#include "slavecalculator.h"

SlaveCalculator::SlaveCalculator(QObject *parent)
    : QObject{parent}
{

}

double SlaveCalculator::multiplay(double x, double y)
{
    return x*y;
}

double SlaveCalculator::divide(double x, double y)
{
    return x/y;
}
