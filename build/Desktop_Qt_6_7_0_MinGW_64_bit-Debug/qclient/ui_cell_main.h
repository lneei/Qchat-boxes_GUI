/********************************************************************************
** Form generated from reading UI file 'cell_main.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CELL_MAIN_H
#define UI_CELL_MAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Cell_main
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QWidget *title;
    QGridLayout *_2;
    QPushButton *btn_close;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btn_lessen;
    QLabel *lb_name;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_set;
    QWidget *inputbg;
    QGridLayout *gridLayout_2;
    QTextEdit *textEdit;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_clear;
    QPushButton *btn_send;
    QTextBrowser *textBrowser;

    void setupUi(QMainWindow *Cell_main)
    {
        if (Cell_main->objectName().isEmpty())
            Cell_main->setObjectName("Cell_main");
        Cell_main->resize(290, 480);
        Cell_main->setDocumentMode(false);
        centralwidget = new QWidget(Cell_main);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        title = new QWidget(centralwidget);
        title->setObjectName("title");
        title->setMinimumSize(QSize(0, 40));
        title->setMaximumSize(QSize(16777215, 40));
        title->setStyleSheet(QString::fromUtf8("QWidget{background-color: rgb(117, 116, 109);}\n"
"\n"
""));
        _2 = new QGridLayout(title);
        _2->setSpacing(0);
        _2->setObjectName("_2");
        _2->setContentsMargins(0, 0, 0, 0);
        btn_close = new QPushButton(title);
        btn_close->setObjectName("btn_close");
        btn_close->setMinimumSize(QSize(30, 30));
        btn_close->setStyleSheet(QString::fromUtf8("border-image: url(:/res/Shut.svg);"));

        _2->addWidget(btn_close, 0, 8, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        _2->addItem(horizontalSpacer_2, 0, 4, 1, 1);

        btn_lessen = new QPushButton(title);
        btn_lessen->setObjectName("btn_lessen");
        btn_lessen->setMinimumSize(QSize(30, 30));
        btn_lessen->setStyleSheet(QString::fromUtf8("border-image: url(:/res/narrow.svg);"));

        _2->addWidget(btn_lessen, 0, 6, 1, 1);

        lb_name = new QLabel(title);
        lb_name->setObjectName("lb_name");
        lb_name->setMinimumSize(QSize(80, 0));
        lb_name->setMaximumSize(QSize(16777215, 16777215));

        _2->addWidget(lb_name, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        _2->addItem(horizontalSpacer, 0, 2, 1, 1);

        btn_set = new QPushButton(title);
        btn_set->setObjectName("btn_set");
        btn_set->setMinimumSize(QSize(30, 30));
        btn_set->setStyleSheet(QString::fromUtf8("border-image: url(:/res/Set.svg);"));

        _2->addWidget(btn_set, 0, 0, 1, 1);


        gridLayout->addWidget(title, 0, 0, 1, 1);

        inputbg = new QWidget(centralwidget);
        inputbg->setObjectName("inputbg");
        inputbg->setMinimumSize(QSize(0, 0));
        inputbg->setMaximumSize(QSize(16777215, 16777215));
        inputbg->setStyleSheet(QString::fromUtf8("QWidget#input{border:1px solid gray; border-top:none}\n"
"QWidget#input{background-color:rgb(255,255,255);}\n"
"QTextEdit{border:none;}\n"
"QTextBrowser{border:1px solid gray;}\n"
"QTextEdit{border:1px solid gray;}\n"
""));
        gridLayout_2 = new QGridLayout(inputbg);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        textEdit = new QTextEdit(inputbg);
        textEdit->setObjectName("textEdit");
        textEdit->setMinimumSize(QSize(0, 0));
        textEdit->setMaximumSize(QSize(16777215, 140));

        gridLayout_2->addWidget(textEdit, 1, 0, 1, 1);

        widget_4 = new QWidget(inputbg);
        widget_4->setObjectName("widget_4");
        widget_4->setMinimumSize(QSize(0, 35));
        widget_4->setMaximumSize(QSize(16777215, 16777215));
        widget_4->setStyleSheet(QString::fromUtf8("QWidget{background-color:rgb(255, 255, 255)}\n"
"QWidget{border:1px solid gray;}"));
        horizontalLayout = new QHBoxLayout(widget_4);
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btn_clear = new QPushButton(widget_4);
        btn_clear->setObjectName("btn_clear");
        btn_clear->setMinimumSize(QSize(0, 0));
        btn_clear->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(btn_clear);

        btn_send = new QPushButton(widget_4);
        btn_send->setObjectName("btn_send");
        btn_send->setMinimumSize(QSize(0, 0));
        btn_send->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(btn_send);


        gridLayout_2->addWidget(widget_4, 3, 0, 1, 1);

        textBrowser = new QTextBrowser(inputbg);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setMinimumSize(QSize(0, 20));
        textBrowser->setMaximumSize(QSize(16777215, 300));
        textBrowser->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(textBrowser, 0, 0, 1, 1);


        gridLayout->addWidget(inputbg, 1, 0, 1, 1);

        Cell_main->setCentralWidget(centralwidget);

        retranslateUi(Cell_main);

        QMetaObject::connectSlotsByName(Cell_main);
    } // setupUi

    void retranslateUi(QMainWindow *Cell_main)
    {
        Cell_main->setWindowTitle(QCoreApplication::translate("Cell_main", "Cell_main", nullptr));
        btn_close->setText(QString());
        btn_lessen->setText(QString());
        lb_name->setText(QString());
        btn_set->setText(QString());
        btn_clear->setText(QCoreApplication::translate("Cell_main", "\346\270\205\345\261\217", nullptr));
        btn_send->setText(QCoreApplication::translate("Cell_main", "\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Cell_main: public Ui_Cell_main {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CELL_MAIN_H
