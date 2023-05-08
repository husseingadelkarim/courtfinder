#include "bookingtime.h"
#include "ui_bookingtime.h"
#include "booking.h"

bookingTime::bookingTime(QString date1, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::bookingTime)
{
    ui->setupUi(this);
    this -> date = date1;
    ui ->DateTimeLabel->setText("Reservation for " + date);
}

bookingTime::~bookingTime()
{
    delete ui;
}

void bookingTime::on_pushButton_clicked()
{
    QString content;
    QFile file1("9AM to 11PM.txt");
    if(file1.open(QIODevice::ReadOnly | QIODevice::Text)){
        QTextStream read(&file1);
        content = read.readAll();
        file1.close();
    }
    if(content == ""){
        m.setText("Your court has been reserved on " + date + " from 9 AM to 11 AM, we will send an email to you for confirmation");
        m.exec();
        if(file1.open(QIODevice::WriteOnly | QIODevice::Text)){
            QTextStream write(&file1);
            write << "x";
            file1.close();
        }
    }else{
        m.setText("This timing of this court is taken please try again");
        m.exec();
    }
}


void bookingTime::on_pushButton_9_clicked()
{
    this->close();
    booking *open = new booking;
    open->show();
}


void bookingTime::on_pushButton_2_clicked()
{
    QString content;
    QFile file1("11AM to 1PM.txt");
    if(file1.open(QIODevice::ReadOnly | QIODevice::Text)){
        QTextStream read(&file1);
        content = read.readAll();
        file1.close();
    }
    if(content == ""){
        m.setText("Your court has been reserved on " + date + " from 11 AM to 1 PM, we will send an email to you for confirmation");
        m.exec();
        if(file1.open(QIODevice::WriteOnly | QIODevice::Text)){
            QTextStream write(&file1);
            write << "x";
            file1.close();
        }
    }else{
        m.setText("This timing of this court is taken please try again");
        m.exec();
    }
}


void bookingTime::on_pushButton_3_clicked()
{
    QString content;
    QFile file1("1PM to 3PM.txt");
    if(file1.open(QIODevice::ReadOnly | QIODevice::Text)){
        QTextStream read(&file1);
        content = read.readAll();
        file1.close();
    }
    if(content == ""){
        m.setText("Your court has been reserved on " + date + " from 1 PM to 3 PM, we will send an email to you for confirmation");
        m.exec();
        if(file1.open(QIODevice::WriteOnly | QIODevice::Text)){
            QTextStream write(&file1);
            write << "x";
            file1.close();
        }
    }else{
        m.setText("This timing of this court is taken please try again");
        m.exec();
    }
}


void bookingTime::on_pushButton_4_clicked()
{
    QString content;
    QFile file1("3PM to 5PM.txt");
    if(file1.open(QIODevice::ReadOnly | QIODevice::Text)){
        QTextStream read(&file1);
        content = read.readAll();
        file1.close();
    }
    if(content == ""){
        m.setText("Your court has been reserved on " + date + " from 3 PM to 7 PM, we will send an email to you for confirmation");
        m.exec();
        if(file1.open(QIODevice::WriteOnly | QIODevice::Text)){
            QTextStream write(&file1);
            write << "x";
            file1.close();
        }
    }else{
        m.setText("This timing of this court is taken please try again");
        m.exec();
    }
}


void bookingTime::on_pushButton_5_clicked()
{
    QString content;
    QFile file1("5PM to 7PM.txt");
    if(file1.open(QIODevice::ReadOnly | QIODevice::Text)){
        QTextStream read(&file1);
        content = read.readAll();
        file1.close();
    }
    if(content == ""){
        m.setText("Your court has been reserved on " + date + " from 5 PM to 7 PM, we will send an email to you for confirmation");
        m.exec();
        if(file1.open(QIODevice::WriteOnly | QIODevice::Text)){
            QTextStream write(&file1);
            write << "x";
            file1.close();
        }
    }else{
        m.setText("This timing of this court is taken please try again");
        m.exec();
    }
}


void bookingTime::on_pushButton_6_clicked()
{
    QString content;
    QFile file1("7PM to 9PM.txt");
    if(file1.open(QIODevice::ReadOnly | QIODevice::Text)){
        QTextStream read(&file1);
        content = read.readAll();
        file1.close();
    }
    if(content == ""){
        m.setText("Your court has been reserved on " + date + " from 7 PM to 9 PM, we will send an email to you for confirmation");
        m.exec();
        if(file1.open(QIODevice::WriteOnly | QIODevice::Text)){
            QTextStream write(&file1);
            write << "x";
            file1.close();
        }
    }else{
        m.setText("This timing of this court is taken please try again");
        m.exec();
    }
}


void bookingTime::on_pushButton_7_clicked()
{
    QString content;
    QFile file1("9PM to 11PM.txt");
    if(file1.open(QIODevice::ReadOnly | QIODevice::Text)){
        QTextStream read(&file1);
        content = read.readAll();
        file1.close();
    }
    if(content == ""){
        m.setText("Your court has been reserved on " + date + " from 9 PM to 11 PM, we will send an email to you for confirmation");
        m.exec();
        if(file1.open(QIODevice::WriteOnly | QIODevice::Text)){
            QTextStream write(&file1);
            write << "x";
            file1.close();
        }
    }else{
        m.setText("This timing of this court is taken please try again");
        m.exec();
    }
}


void bookingTime::on_pushButton_8_clicked()
{
    QString content;
    QFile file1("11PM to 1AM.txt");
    if(file1.open(QIODevice::ReadOnly | QIODevice::Text)){
        QTextStream read(&file1);
        content = read.readAll();
        file1.close();
    }
    if(content == ""){
        m.setText("Your court has been reserved on " + date + " from 11 PM to 1 AM, we will send an email to you for confirmation");
        m.exec();
        if(file1.open(QIODevice::WriteOnly | QIODevice::Text)){
            QTextStream write(&file1);
            write << "x";
            file1.close();
        }
    }else{
        m.setText("This timing of this court is taken please try again");
        m.exec();
    }
}

