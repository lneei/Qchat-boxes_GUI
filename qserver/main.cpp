#include <QCoreApplication>
#include<TalkServer.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    TalkServer s;
    TalkServer server;
    server.init();
    return a.exec();
}











