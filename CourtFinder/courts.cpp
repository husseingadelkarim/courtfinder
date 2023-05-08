#include "courts.h"
#include "ui_courts.h"
#include "booking.h"

Courts::Courts(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Courts)
{
    ui->setupUi(this);
    ui->label->setText("Pick a court to check availability!");
}

Courts::~Courts()
{
    delete ui;
}



void Courts::on_pushButton_clicked()
{
    this->close();
    booking *open = new booking;
    open->show();
}

void Courts::on_pushButton_2_clicked()
{
    this->close();
    booking *open = new booking;
    open->show();
}

void Courts::on_pushButton_3_clicked()
{
    this->close();
    booking *open = new booking;
    open->show();
}
void Courts::on_pushButton_4_clicked()
{
    this->close();
    booking *open = new booking;
    open->show();
}
void Courts::on_pushButton_5_clicked()
{
    this->close();
    booking *open = new booking;
    open->show();
}
void Courts::on_pushButton_6_clicked()
{
    this->close();
    booking *open = new booking;
    open->show();
}
void Courts::on_pushButton_7_clicked()
{
    this->close();
    booking *open = new booking;
    open->show();
}
void Courts::on_pushButton_8_clicked()
{
    this->close();
    booking *open = new booking;
    open->show();
}
void Courts::on_pushButton_9_clicked()
{
    this->close();
    booking *open = new booking;
    open->show();
}
