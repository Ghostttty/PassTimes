#include "threads.h"
#include <QDebug>
#include <QVector>


Threads::Threads(int start, int stop, QVector<int> &p):QThread(),startValue(start),stopValue(stop),copyArray(p)
{

}


void Threads::run()
{
    for(int i=startValue;i<stopValue;i++){
            sum*=pow(copyArray[i],copyArray[i]);
//            qDebug()<<i+" "+j;

    }
}

int Threads::getSum()
{
    return sum;
}
