/********************************************************************************
** Form generated from reading UI file 'dlg_set.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLG_SET_H
#define UI_DLG_SET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dlg_set
{
public:
    QGridLayout *gridLayout_3;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *btn_cancel;
    QPushButton *btn_confirm;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QLineEdit *le_server;
    QLabel *label_4;
    QLabel *label_2;
    QLineEdit *le_port;
    QComboBox *cb_ips;
    QLabel *label_3;
    QLabel *label;
    QLineEdit *le_name;

    void setupUi(QDialog *dlg_set)
    {
        if (dlg_set->objectName().isEmpty())
            dlg_set->setObjectName("dlg_set");
        dlg_set->resize(208, 214);
        gridLayout_3 = new QGridLayout(dlg_set);
        gridLayout_3->setObjectName("gridLayout_3");
        widget = new QWidget(dlg_set);
        widget->setObjectName("widget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMaximumSize(QSize(16777215, 40));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        btn_cancel = new QPushButton(widget);
        btn_cancel->setObjectName("btn_cancel");

        gridLayout->addWidget(btn_cancel, 0, 2, 1, 1);

        btn_confirm = new QPushButton(widget);
        btn_confirm->setObjectName("btn_confirm");

        gridLayout->addWidget(btn_confirm, 0, 1, 1, 1);


        gridLayout_3->addWidget(widget, 1, 0, 1, 1);

        widget_2 = new QWidget(dlg_set);
        widget_2->setObjectName("widget_2");
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        le_server = new QLineEdit(widget_2);
        le_server->setObjectName("le_server");

        gridLayout_2->addWidget(le_server, 1, 1, 1, 1);

        label_4 = new QLabel(widget_2);
        label_4->setObjectName("label_4");

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);

        le_port = new QLineEdit(widget_2);
        le_port->setObjectName("le_port");

        gridLayout_2->addWidget(le_port, 2, 1, 1, 1);

        cb_ips = new QComboBox(widget_2);
        cb_ips->setObjectName("cb_ips");

        gridLayout_2->addWidget(cb_ips, 3, 1, 1, 1);

        label_3 = new QLabel(widget_2);
        label_3->setObjectName("label_3");

        gridLayout_2->addWidget(label_3, 3, 0, 1, 1);

        label = new QLabel(widget_2);
        label->setObjectName("label");

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        le_name = new QLineEdit(widget_2);
        le_name->setObjectName("le_name");

        gridLayout_2->addWidget(le_name, 0, 1, 1, 1);


        gridLayout_3->addWidget(widget_2, 0, 0, 1, 1);


        retranslateUi(dlg_set);

        QMetaObject::connectSlotsByName(dlg_set);
    } // setupUi

    void retranslateUi(QDialog *dlg_set)
    {
        dlg_set->setWindowTitle(QCoreApplication::translate("dlg_set", "Dialog", nullptr));
        btn_cancel->setText(QCoreApplication::translate("dlg_set", "\345\217\226\346\266\210", nullptr));
        btn_confirm->setText(QCoreApplication::translate("dlg_set", "\350\277\236\346\216\245", nullptr));
        le_server->setText(QCoreApplication::translate("dlg_set", "192.168.3.1", nullptr));
        label_4->setText(QCoreApplication::translate("dlg_set", "\346\230\265\347\247\260:", nullptr));
        label_2->setText(QCoreApplication::translate("dlg_set", "\347\253\257\345\217\243\357\274\232", nullptr));
        le_port->setText(QCoreApplication::translate("dlg_set", "1234", nullptr));
        label_3->setText(QCoreApplication::translate("dlg_set", "\346\234\254\345\234\260ip:", nullptr));
        label->setText(QCoreApplication::translate("dlg_set", "\346\234\215\345\212\241\345\231\250\345\234\260\345\235\200:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dlg_set: public Ui_dlg_set {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_SET_H
