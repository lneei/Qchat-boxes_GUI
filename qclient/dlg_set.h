#ifndef DLG_SET_H
#define DLG_SET_H

#include <QDialog>

namespace Ui {
class dlg_set;
}

class dlg_set : public QDialog
{
    Q_OBJECT

public:
    explicit dlg_set(QWidget *parent = nullptr);
    ~dlg_set();


    virtual void showEvent(QShowEvent *event);

    QString getLocalIP();
    QString getServerIP();
    int getServerPort();

    QString getName();



private slots:
    void on_btn_confirm_clicked();

    void on_btn_cancel_clicked();

private:
    Ui::dlg_set *ui;
};

#endif // DLG_SET_H
