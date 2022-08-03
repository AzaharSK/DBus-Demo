#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    setWindowTitle("DBUS client");
    calcHandle = new com::blikoon::CalculatorInterface("com.blikoon.Calculator", "/CalcServicePath" , QDBusConnection::sessionBus());
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_divideButton_clicked()
{
    if(calcHandle->isValid()) {
        double result=calcHandle->divide(ui->number1SpinBox->value(), ui->number2SpinBox->value());
        ui->resultLineEdit->setText(QString::number(result));
    }
    else
        qDebug()<<"Error in calcHandle: Ensure Server app is running ";
}


void Widget::on_multiplyButton_clicked()
{
    if(calcHandle->isValid()) {
        double result=calcHandle->multiplay(ui->number1SpinBox->value(), ui->number2SpinBox->value());
        ui->resultLineEdit->setText(QString::number(result));
    }
    else
        qDebug()<<"Error in calcHandle: Ensure Server app is running ";
}

