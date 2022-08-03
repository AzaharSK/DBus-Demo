#ifndef SLAVECALCULATOR_H
#define SLAVECALCULATOR_H

#include <QObject>

class SlaveCalculator : public QObject
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "com.blikoon.CalculatorInterface")
public:
    explicit SlaveCalculator(QObject *parent = nullptr);

signals:

public slots:
    double multiplay(double x , double y);
    double divide(double x , double y);


};

#endif // SLAVECALCULATOR_H
