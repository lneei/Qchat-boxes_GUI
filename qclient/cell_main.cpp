#include "cell_main.h"
#include "ui_cell_main.h"
#include<QDebug>
#include<QDateTime>
#include<QMouseEvent>
#include<QAbstractSocket>
Cell_main::Cell_main(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Cell_main)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);//隐藏标题栏

    auto fcon=[&](){
        auto ip=m_socket.localAddress().toString();
        ui->textBrowser->append(ip+"连接成功");
    };
    connect(&m_socket,&QAbstractSocket::connected,this,fcon);


    auto fdiscon=[&](){
        auto ip=m_socket.localAddress().toString();
        ui->textBrowser->append(ip+"连接断开");
    };
    connect(&m_socket,&QAbstractSocket::disconnected,this,fdiscon);


    connect(&m_socket,&QAbstractSocket::readyRead,this,&Cell_main::dealCientRead);

    ui->lb_name->setText(s1.getName());


}

Cell_main::~Cell_main()
{
    delete ui;
}

void Cell_main::mousePressEvent(QMouseEvent *event)
{
    auto rect=ui->title->geometry();
    auto p= event->pos();
    if(rect.contains(p))
    {
        m_isPressed=true;
        m_wnd=this->geometry().topLeft();
        press=this->mapToGlobal(p);
    }
}

void Cell_main::mouseReleaseEvent(QMouseEvent *event)
{
    m_isPressed=false;
}

void Cell_main::mouseMoveEvent(QMouseEvent *event)
{
    if(m_isPressed)
    {
        auto v=mapToGlobal(event->pos())-press;
        auto r=m_wnd;
        this->move(r+v);
    }
}

void Cell_main::dealCientRead()
{
    m_buffer.push_back(m_socket.readAll());//每次读的时候把数据放到包里
    if(m_buffer.size()>=4 && m_buffer[0]==0x66)//根据数据协议设计 数据头(1字节)+数据长度(2字节)+指令(1字节)+内容(变长)
    {
        quint16 len = (m_buffer[2]<< 8 & 0xFF00)|static_cast<quint16>(m_buffer[1]);
        if(m_buffer.size()>=len)
        {
            //取出完整的数据包
            QByteArray arr=m_buffer.mid(0,len);
            dealPack(arr);
            m_buffer=m_buffer.mid(len);
        }
    }
}

void Cell_main::dealPack(QByteArray arr)
{
    //拿到了一包数据
    char cmd=arr[3];
    QByteArray arrData=arr.mid(4);
    do
    {
        if(cmd ==0x01)
        {
            //心跳包反馈，计时 长时间无反应踢掉
            break;
        }

        auto strTime = QDateTime::currentDateTime().toString("yyyy/MM/dd hh:mm:ss");

        if(cmd==0x02)
        {
            //我发送的数据包
            ui->textBrowser->append("<font color='green'>"+strTime+"我发送:"+arrData);
            break;

        }
        if(cmd==0x03)
        {
            //我接受的数据包
            ui->textBrowser->append("<font color='blue'>"+strTime+"我接受:"+arrData);
            break;
        }
    }while(false);

}


void Cell_main::tcpcon()
{
    auto local_ip=s1.getLocalIP();
    auto server_ip=s1.getServerIP();
    auto server_port=s1.getServerPort();
    m_socket.close();//断开之前连接
    m_socket.bind(QHostAddress(local_ip));
    m_socket.connectToHost(server_ip,server_port);
}

void Cell_main::on_btn_set_clicked()
{
    int ret =s1.exec();
    if(ret)
    {
        tcpcon();
        qDebug()<<"local ip:"<<s1.getLocalIP();
        qDebug()<<"server ip:"<<s1.getServerIP();
        qDebug()<<"port ip:"<<s1.getServerPort();
        ui->lb_name->setText(s1.getName());
    }
}


void Cell_main::on_btn_close_clicked()
{
    this->close();
}


void Cell_main::on_btn_lessen_clicked()
{
    showMinimized();
}


void Cell_main::on_btn_send_clicked()
{
    auto str = ui->textEdit->toPlainText();
    ui->textEdit->clear();
    QByteArray arr=str.toUtf8();
    quint16 l=arr.size()+4;
    arr.insert(0,0x66);
    arr.insert(1,static_cast<char>(l&0x00FF));
    arr.insert(2,static_cast<char>(l>>8&0x00FF));
    arr.insert(3,0x03);
    m_socket.write(arr);
}





