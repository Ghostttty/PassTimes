#ifndef THREADSOLDC_H
#define THREADSOLDC_H
#include <QVector>

class ThreadsOldC
{
private:
    int valueThreads;
    QVector<int> vectorTimes;
    int sum1[4];
    void One();
    void Two();
public:
    ThreadsOldC();
    void VectorInit(int vectorLenght);
    void setValueThreads(int& x);
    QString MultyTimes();
    QString TwentyThreadMulty();
    void MultyParr(int startValue,int stopValue,int value);
};

#endif // THREADSOLDC_H
