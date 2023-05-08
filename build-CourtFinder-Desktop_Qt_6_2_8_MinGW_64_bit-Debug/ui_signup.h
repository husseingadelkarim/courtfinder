/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.2.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignUp
{
public:
    QLineEdit *Email;
    QLineEdit *Username;
    QLineEdit *Password;
    QLineEdit *Password2;
    QLineEdit *FirstName;
    QLineEdit *LastName;
    QCommandLinkButton *Login;
    QPushButton *pushButton;
    QLabel *alert;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QWidget *SignUp)
    {
        if (SignUp->objectName().isEmpty())
            SignUp->setObjectName(QString::fromUtf8("SignUp"));
        SignUp->resize(488, 442);
        SignUp->setCursor(QCursor(Qt::ArrowCursor));
        SignUp->setLayoutDirection(Qt::LeftToRight);
        SignUp->setAutoFillBackground(false);
        Email = new QLineEdit(SignUp);
        Email->setObjectName(QString::fromUtf8("Email"));
        Email->setGeometry(QRect(50, 230, 191, 26));
        Username = new QLineEdit(SignUp);
        Username->setObjectName(QString::fromUtf8("Username"));
        Username->setGeometry(QRect(260, 230, 191, 26));
        Password = new QLineEdit(SignUp);
        Password->setObjectName(QString::fromUtf8("Password"));
        Password->setGeometry(QRect(260, 260, 191, 26));
        Password2 = new QLineEdit(SignUp);
        Password2->setObjectName(QString::fromUtf8("Password2"));
        Password2->setGeometry(QRect(260, 290, 191, 26));
        FirstName = new QLineEdit(SignUp);
        FirstName->setObjectName(QString::fromUtf8("FirstName"));
        FirstName->setGeometry(QRect(50, 260, 191, 26));
        LastName = new QLineEdit(SignUp);
        LastName->setObjectName(QString::fromUtf8("LastName"));
        LastName->setGeometry(QRect(50, 290, 191, 26));
        Login = new QCommandLinkButton(SignUp);
        Login->setObjectName(QString::fromUtf8("Login"));
        Login->setGeometry(QRect(0, 400, 281, 41));
        pushButton = new QPushButton(SignUp);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(390, 400, 93, 29));
        alert = new QLabel(SignUp);
        alert->setObjectName(QString::fromUtf8("alert"));
        alert->setGeometry(QRect(250, 320, 231, 20));
        label = new QLabel(SignUp);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 320, 231, 20));
        label_2 = new QLabel(SignUp);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 40, 261, 16));
        label_3 = new QLabel(SignUp);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 60, 261, 16));
        label_4 = new QLabel(SignUp);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 80, 241, 16));
        label_5 = new QLabel(SignUp);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 100, 441, 16));

        retranslateUi(SignUp);

        QMetaObject::connectSlotsByName(SignUp);
    } // setupUi

    void retranslateUi(QWidget *SignUp)
    {
        SignUp->setWindowTitle(QCoreApplication::translate("SignUp", "Sign Up", nullptr));
        Email->setText(QString());
        Email->setPlaceholderText(QCoreApplication::translate("SignUp", "Email", nullptr));
        Username->setText(QString());
        Username->setPlaceholderText(QCoreApplication::translate("SignUp", "Username", nullptr));
        Password->setText(QString());
        Password->setPlaceholderText(QCoreApplication::translate("SignUp", "Password", nullptr));
        Password2->setText(QString());
        Password2->setPlaceholderText(QCoreApplication::translate("SignUp", "Re-write Password", nullptr));
        FirstName->setInputMask(QString());
        FirstName->setText(QString());
        FirstName->setPlaceholderText(QCoreApplication::translate("SignUp", "First Name", nullptr));
        LastName->setText(QString());
        LastName->setPlaceholderText(QCoreApplication::translate("SignUp", "Last Name", nullptr));
        Login->setText(QCoreApplication::translate("SignUp", "Already have an account? Log in", nullptr));
        pushButton->setText(QCoreApplication::translate("SignUp", "Enter", nullptr));
        alert->setText(QString());
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("SignUp", "Instructions for Signing Up:", nullptr));
        label_3->setText(QCoreApplication::translate("SignUp", "Email: Must be a valid email address", nullptr));
        label_4->setText(QCoreApplication::translate("SignUp", "Username: Can't be more than 50 characters", nullptr));
        label_5->setText(QCoreApplication::translate("SignUp", "First and Last Names: These two may be left empty if you wish but not advisable", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignUp: public Ui_SignUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
