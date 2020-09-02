#include "threads.h"
#include <QDebug>
#include <QVector>


Threads::Threads(int start, int stop, QVector<int> &p):QThread(),startValue(start),stopValue(stop),copyArray(p)
{

}


void Threads::run()
{
    for(int i=startValue;i<stopValue;i++){
        for(int j=startValue;j<stopValue;j++){
            sum+=sqrt(copyArray[i]*copyArray[j]);
//            qDebug()<<i+" "+j;
        }
    }
}

int Threads::getSum()
{
    return sum;
}
