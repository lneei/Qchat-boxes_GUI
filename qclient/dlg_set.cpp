#include "dlg_set.h"
#include "ui_dlg_set.h"
#include<QNetworkInterface>
dlg_set::dlg_set(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::dlg_set)
{
    ui->setupUi(this);

    ui->cb_ips->clear();
    auto l=QNetworkInterface::allAddresses();
    for(auto it:l)
    {
        if(QAbstractSocket::IPv4Protocol==it.protocol())//判断是否是ipv4
        {
            ui->cb_ips->addItem(it.toString());
        }
    }
}

dlg_set::~dlg_set()
{
    delete ui;
}

void dlg_set::showEvent(QShowEvent *event)
{
    ui->cb_ips->clear();
    auto l=QNetworkInterface::allAddresses();
    for(auto it:l)
    {
        if(QAbstractSocket::IPv4Protocol==it.protocol())//判断是否是ipv4
        {
            ui->cb_ips->addItem(it.toString());
        }
    }
}

QString dlg_set::getLocalIP()
{
    return ui->cb_ips->currentText();
}

QString dlg_set::getServerIP()
{
    return ui->le_server->text();
}

int dlg_set::getServerPort()
{
    return ui->le_port->text().toInt();
}

QString dlg_set::getName()
{
    return ui->le_name->text();
}

void dlg_set::on_btn_confirm_clicked()
{
    this->done(1);
}

void dlg_set::on_btn_cancel_clicked()
{
    this->done(0);
}

