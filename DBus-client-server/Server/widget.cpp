#include "widget.h"
#include "./ui_widget.h"
#include "calculatoradaptor.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    slaveCalculator = new SlaveCalculator(this);
    new CalculatorInterfaceAdaptor(slaveCalculator);
    QDBusConnection connection = QDBusConnection::sessionBus();
    connection.registerObject("/CalcServicePath", slaveCalculator);
    connection.registerService("com.blikoon.Calculator");
}

Widget::~Widget()
{
    delete ui;
}

