#ifndef CELL_MAIN_H
#define CELL_MAIN_H
#include"dlg_set.h"
#include <QMainWindow>
#include<QTcpSocket>
QT_BEGIN_NAMESPACE
namespace Ui {
class Cell_main;
}
QT_END_NAMESPACE

class Cell_main : public QMainWindow
{
    Q_OBJECT

public:
    Cell_main(QWidget *parent = nullptr);
    ~Cell_main();

    virtual void mousePressEvent(QMouseEvent *event);
    virtual void mouseReleaseEvent(QMouseEvent *event);
    virtual void mouseMoveEvent(QMouseEvent *event);

    void dealCientRead();
    void dealPack(QByteArray arr);
    void tcpcon();

private slots:
    void on_btn_set_clicked();

    void on_btn_close_clicked();

    void on_btn_lessen_clicked();

    void on_btn_send_clicked();

private:
    Ui::Cell_main *ui;

    bool m_isPressed=false;

    QPoint m_wnd;
    QPoint press;
    dlg_set s1;
    QTcpSocket m_socket;

    QByteArray m_buffer;
    int m_ipacklen;
};
#endif // CELL_MAIN_H
