/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.2.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QLineEdit *Username;
    QLineEdit *password;
    QLabel *Logo;
    QCommandLinkButton *SignUpButton;
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QWidget *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(628, 493);
        Username = new QLineEdit(login);
        Username->setObjectName(QString::fromUtf8("Username"));
        Username->setGeometry(QRect(220, 370, 154, 26));
        password = new QLineEdit(login);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(220, 400, 154, 26));
        password->setEchoMode(QLineEdit::Password);
        password->setClearButtonEnabled(false);
        Logo = new QLabel(login);
        Logo->setObjectName(QString::fromUtf8("Logo"));
        Logo->setGeometry(QRect(40, 60, 531, 301));
        SignUpButton = new QCommandLinkButton(login);
        SignUpButton->setObjectName(QString::fromUtf8("SignUpButton"));
        SignUpButton->setGeometry(QRect(160, 430, 261, 41));
        pushButton = new QPushButton(login);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(500, 450, 93, 29));
        label = new QLabel(login);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 470, 361, 20));

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QWidget *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "Login", nullptr));
        Username->setText(QString());
        Username->setPlaceholderText(QCoreApplication::translate("login", "Username", nullptr));
        password->setPlaceholderText(QCoreApplication::translate("login", "Password", nullptr));
        Logo->setText(QCoreApplication::translate("login", "TextLabel", nullptr));
        SignUpButton->setText(QCoreApplication::translate("login", "Don't have an account? Sign Up", nullptr));
        pushButton->setText(QCoreApplication::translate("login", "Login", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
