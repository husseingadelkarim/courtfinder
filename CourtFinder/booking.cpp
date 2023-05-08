#include "booking.h"
#include "ui_booking.h"
#include "bookingtime.h"
#include "courts.h"

booking::booking(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::booking)
{
    ui->setupUi(this);
    ui->label->setText("Chooose a booking date");
}

booking::~booking()
{
    delete ui;
}

void booking::on_calendarWidget_clicked(const QDate &date)
{
    QString date1 = date.toString();
    this->close();
    bookingTime *open = new bookingTime(date1);
    open->show();

}


void booking::on_pushButton_clicked()
{
    this->close();
    Courts *open = new Courts();
    open -> show();
}

