#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "calculatorinterface.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_divideButton_clicked();

    void on_multiplyButton_clicked();

private:
    Ui::Widget *ui;
    com::blikoon::CalculatorInterface* calcHandle;
};
#endif // WIDGET_H
