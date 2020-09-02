#include "threads.h"
#include <QDebug>


Threads::Threads(QString s):QThread()
{
    name=s;
}

void Threads::run()
{
    for (int i = 0; i < 100; i++ ) {
        qDebug()<<i;
    }
}
