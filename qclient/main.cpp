#include "cell_main.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Cell_main w;
    w.show();
    return a.exec();
}
