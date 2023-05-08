/********************************************************************************
** Form generated from reading UI file 'bookingtime.ui'
**
** Created by: Qt User Interface Compiler version 6.2.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKINGTIME_H
#define UI_BOOKINGTIME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_bookingTime
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QLabel *DateTimeLabel;
    QPushButton *pushButton_9;

    void setupUi(QWidget *bookingTime)
    {
        if (bookingTime->objectName().isEmpty())
            bookingTime->setObjectName(QString::fromUtf8("bookingTime"));
        bookingTime->resize(560, 410);
        pushButton = new QPushButton(bookingTime);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 130, 91, 24));
        pushButton_2 = new QPushButton(bookingTime);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 160, 91, 24));
        pushButton_3 = new QPushButton(bookingTime);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(30, 190, 91, 24));
        pushButton_4 = new QPushButton(bookingTime);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(30, 220, 91, 24));
        pushButton_5 = new QPushButton(bookingTime);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(30, 250, 91, 24));
        pushButton_6 = new QPushButton(bookingTime);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(30, 280, 91, 24));
        pushButton_7 = new QPushButton(bookingTime);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(30, 310, 91, 24));
        pushButton_8 = new QPushButton(bookingTime);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(30, 340, 91, 24));
        DateTimeLabel = new QLabel(bookingTime);
        DateTimeLabel->setObjectName(QString::fromUtf8("DateTimeLabel"));
        DateTimeLabel->setGeometry(QRect(340, 10, 181, 16));
        pushButton_9 = new QPushButton(bookingTime);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(20, 20, 75, 24));

        retranslateUi(bookingTime);

        QMetaObject::connectSlotsByName(bookingTime);
    } // setupUi

    void retranslateUi(QWidget *bookingTime)
    {
        bookingTime->setWindowTitle(QCoreApplication::translate("bookingTime", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("bookingTime", "9 AM- 11 AM", nullptr));
        pushButton_2->setText(QCoreApplication::translate("bookingTime", "11 AM - 1 PM", nullptr));
        pushButton_3->setText(QCoreApplication::translate("bookingTime", "1 PM - 3 PM", nullptr));
        pushButton_4->setText(QCoreApplication::translate("bookingTime", "3 PM - 5 PM", nullptr));
        pushButton_5->setText(QCoreApplication::translate("bookingTime", "5 PM - 7 PM", nullptr));
        pushButton_6->setText(QCoreApplication::translate("bookingTime", "7 PM - 9 PM", nullptr));
        pushButton_7->setText(QCoreApplication::translate("bookingTime", "9 PM - 11 PM", nullptr));
        pushButton_8->setText(QCoreApplication::translate("bookingTime", "11 PM - 1 AM", nullptr));
        DateTimeLabel->setText(QString());
        pushButton_9->setText(QCoreApplication::translate("bookingTime", "Return", nullptr));
    } // retranslateUi

};

namespace Ui {
    class bookingTime: public Ui_bookingTime {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKINGTIME_H
