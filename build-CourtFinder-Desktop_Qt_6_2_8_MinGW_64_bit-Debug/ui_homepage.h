/********************************************************************************
** Form generated from reading UI file 'homepage.ui'
**
** Created by: Qt User Interface Compiler version 6.2.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEPAGE_H
#define UI_HOMEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Homepage
{
public:
    QLabel *Welcome;
    QPushButton *Football;
    QPushButton *Padel;
    QPushButton *Basketball;
    QLabel *Logo;

    void setupUi(QWidget *Homepage)
    {
        if (Homepage->objectName().isEmpty())
            Homepage->setObjectName(QString::fromUtf8("Homepage"));
        Homepage->resize(748, 602);
        Welcome = new QLabel(Homepage);
        Welcome->setObjectName(QString::fromUtf8("Welcome"));
        Welcome->setGeometry(QRect(460, 0, 281, 31));
        Welcome->setLayoutDirection(Qt::RightToLeft);
        Welcome->setAutoFillBackground(false);
        Football = new QPushButton(Homepage);
        Football->setObjectName(QString::fromUtf8("Football"));
        Football->setGeometry(QRect(170, 450, 93, 29));
        Padel = new QPushButton(Homepage);
        Padel->setObjectName(QString::fromUtf8("Padel"));
        Padel->setGeometry(QRect(300, 450, 93, 29));
        Basketball = new QPushButton(Homepage);
        Basketball->setObjectName(QString::fromUtf8("Basketball"));
        Basketball->setGeometry(QRect(430, 450, 93, 29));
        Logo = new QLabel(Homepage);
        Logo->setObjectName(QString::fromUtf8("Logo"));
        Logo->setGeometry(QRect(70, 90, 561, 301));

        retranslateUi(Homepage);

        QMetaObject::connectSlotsByName(Homepage);
    } // setupUi

    void retranslateUi(QWidget *Homepage)
    {
        Homepage->setWindowTitle(QCoreApplication::translate("Homepage", "Homepage", nullptr));
        Welcome->setText(QString());
        Football->setText(QCoreApplication::translate("Homepage", "Football", nullptr));
        Padel->setText(QCoreApplication::translate("Homepage", "Padel", nullptr));
        Basketball->setText(QCoreApplication::translate("Homepage", "Basketball", nullptr));
        Logo->setText(QCoreApplication::translate("Homepage", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Homepage: public Ui_Homepage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGE_H
