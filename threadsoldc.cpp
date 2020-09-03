#include "threadsoldc.h"
#include <thread>
#include <QDebug>

ThreadsOldC::ThreadsOldC()
{

}

void ThreadsOldC::VectorInit(int vectorLenght)
{
    vectorTimes.fill(0,vectorLenght);
    for(auto& i:vectorTimes)
        i=1+rand();
    for(auto& i:sum1)
        i=1;
}

void ThreadsOldC::setValueThreads(int &x)
{
    this->valueThreads=x;
}

QString ThreadsOldC::MultyTimes()
{
    clock_t timeStart1,timeStop1;
    int sum=1;
    timeStart1=clock();
    for(int i=0;i<vectorTimes.size();i++){
            sum*=pow(vectorTimes[i],vectorTimes[i]);
//            qDebug()<<i+" "+j;

    }
    timeStop1=clock();
    qDebug()<<sum;
    return QString::number(timeStop1-timeStart1);
}

QString ThreadsOldC::TwentyThreadMulty()
{
//    valueThreads=2;
//    clock_t timeStart,timeStop;
//    timeStart=clock();
//    std::thread tA(&ThreadsOldC::MultyParr,0,vectorTimes.size()/2,0);
//    std::thread tB(&ThreadsOldC::MultyParr,vectorTimes.size()/2,vectorTimes.size(),1);
//    if(tA.joinable()&&tB.joinable()){
//        tA.join();
//        tB.join();
//    }
//    qDebug()<<sum1[0]+sum1[1];
//    timeStop=clock();
//    return QString::number(timeStop-timeStart);
    return 1;
}

void ThreadsOldC::MultyParr(int startValue,int stopValue,int value)
{
    for(int i=startValue;i<stopValue;i++){
        sum1[value]*=pow(vectorTimes[i],vectorTimes[i]);
    }
}

void ThreadsOldC::One(){
    for(int i=0;i<vectorTimes.size()/2;i++){
        sum1[0]*=pow(vectorTimes[i],vectorTimes[i]);
    }
}
void ThreadsOldC::Two(){
    for(int i=vectorTimes.size()/2;i<vectorTimes.size();i++){
        sum1[1]*=pow(vectorTimes[i],vectorTimes[i]);
    }
}
