#include "array.h"
#include <vector>
#include <time.h>
#include <QString>
#include <QThread>
#include <thread>
#include "threads.h"
#include <QCoreApplication>
#include <QDebug>
#include <cmath>

double Array::Times()
{
    clock_t timeStart1,timeStop1;
    int sum=1;
    timeStart1=clock();
    for(int i=0;i<array.size();i++){
        for(int j=0;j<array.size();j++){
            sum+=sqrt(array[i]*array[j]);
//            qDebug()<<i+" "+j;
        }
    }
    timeStop1=clock();
    return (timeStop1-timeStart1);
}

QString Array::ParrTime()
{
    clock_t timeStart,timeStop;
    Threads tFirst(0,(int)arrayMulty.size()/2,arrayMulty);
    Threads tSecond((int)arrayMulty.size()/2,(int)arrayMulty.size(),arrayMulty);
    timeStart=clock();
    tFirst.start();
    tSecond.start();
    tFirst.wait();
    tSecond.wait();
    timeStop=clock();
    return QString::number(timeStop-timeStart);
}

QString Array::QuadroThreed()
{
    clock_t timeStart,timeStop;
    Threads tOne(0,(int)arrayMulty.size()/4,arrayMulty);
    Threads tTwo((int)arrayMulty.size()/4,(int)arrayMulty.size()/2,arrayMulty);
    Threads tThree((int)arrayMulty.size()/2,(int)arrayMulty.size()*(3/4),arrayMulty);
    Threads tFour((int)arrayMulty.size()*(3/4),(int)arrayMulty.size(),arrayMulty);
//    &tOne;
    timeStart=clock();
    tOne.start();
    tTwo.start();
    tThree.start();
    tFour.start();
    tOne.wait();
    tTwo.wait();
    tThree.wait();
    tFour.wait();
    timeStop=clock();
    return QString::number(timeStop-timeStart);
}



Array::Array()
{
    array.fill(0,10000);
    arrayMulty.fill(0,10000);
    for(int i=0;i<array.size();i++){
        array[i]=rand()+1;
        arrayMulty[i]=rand()+1;
    }
}

bool Array::Init()
{
    Array();
    return true;
}

QString Array::ParrTimes()
{

    QString resultOne=QString::number(Times());
//    QString resultFour=QString::number(QuadroThreed());
//    QString resultTwo=QString::number(ParrTime());

    return resultOne;//+" "+resultTwo+" "+resultFour;
}

