/********************************************************************************
** Form generated from reading UI file 'courts.ui'
**
** Created by: Qt User Interface Compiler version 6.2.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COURTS_H
#define UI_COURTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Courts
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
    QPushButton *pushButton_9;
    QLabel *label;

    void setupUi(QWidget *Courts)
    {
        if (Courts->objectName().isEmpty())
            Courts->setObjectName(QString::fromUtf8("Courts"));
        Courts->resize(671, 336);
        pushButton = new QPushButton(Courts);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(80, 77, 111, 61));
        pushButton_2 = new QPushButton(Courts);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(80, 170, 111, 61));
        pushButton_3 = new QPushButton(Courts);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(80, 260, 111, 61));
        pushButton_4 = new QPushButton(Courts);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(260, 80, 111, 61));
        pushButton_5 = new QPushButton(Courts);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(260, 170, 111, 61));
        pushButton_6 = new QPushButton(Courts);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(440, 170, 111, 61));
        pushButton_7 = new QPushButton(Courts);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(260, 260, 111, 61));
        pushButton_8 = new QPushButton(Courts);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(440, 80, 111, 61));
        pushButton_9 = new QPushButton(Courts);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(440, 260, 111, 61));
        label = new QLabel(Courts);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 20, 251, 31));

        retranslateUi(Courts);

        QMetaObject::connectSlotsByName(Courts);
    } // setupUi

    void retranslateUi(QWidget *Courts)
    {
        Courts->setWindowTitle(QCoreApplication::translate("Courts", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("Courts", "Court1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Courts", "Court2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Courts", "Court3", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Courts", "Court4", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Courts", "Court5", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Courts", "Court8", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Courts", "Court6", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Courts", "Court7", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Courts", "Court9", nullptr));
        label->setText(QCoreApplication::translate("Courts", "label", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Courts: public Ui_Courts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COURTS_H
