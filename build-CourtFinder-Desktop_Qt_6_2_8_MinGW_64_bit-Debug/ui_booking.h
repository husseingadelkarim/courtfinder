/********************************************************************************
** Form generated from reading UI file 'booking.ui'
**
** Created by: Qt User Interface Compiler version 6.2.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKING_H
#define UI_BOOKING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_booking
{
public:
    QCalendarWidget *calendarWidget;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *booking)
    {
        if (booking->objectName().isEmpty())
            booking->setObjectName(QString::fromUtf8("booking"));
        booking->resize(400, 300);
        calendarWidget = new QCalendarWidget(booking);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setGeometry(QRect(19, 46, 361, 151));
        label = new QLabel(booking);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 10, 221, 16));
        pushButton = new QPushButton(booking);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 240, 75, 24));

        retranslateUi(booking);

        QMetaObject::connectSlotsByName(booking);
    } // setupUi

    void retranslateUi(QWidget *booking)
    {
        booking->setWindowTitle(QCoreApplication::translate("booking", "Form", nullptr));
        label->setText(QCoreApplication::translate("booking", "label", nullptr));
        pushButton->setText(QCoreApplication::translate("booking", "Return", nullptr));
    } // retranslateUi

};

namespace Ui {
    class booking: public Ui_booking {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKING_H
