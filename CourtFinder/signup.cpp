#include "signup.h"
#include "ui_signup.h"
#include "ui_login.h"
#include "login.h"

SignUp::SignUp(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SignUp)
{
    ui->setupUi(this);
}

SignUp::~SignUp()
{
    delete ui;
}

bool SignUp::signup1(QString users, QString fname, QString lname, QString email)
{
    QFile file(users);
    if(!file.open(QFile::Append))
    {
        qCritical() << file.errorString();
        return false;
    }
    QTextStream stream(&file);
    stream <<fname << " " << lname << " " <<email << " \n";
    file.close();
    return true;
}

void SignUp::allacounts()
{
    QFile file("User&Pass.txt");
    qDebug() << "allaccounts() file opened";
        if (file.open(QIODevice::ReadOnly)) {
            QTextStream read(&file);
        while(!read.atEnd()){
            read >> un[x] >> pw[x];
            x++;
        }
        }
        file.close();
}

bool SignUp::checkuser(QString user)
{
    bool found = false;
       allacounts();
       for(int i=0;i<=x;i++){
           if(user==un[i]){
               found = true;
               break;
           }
       }if(found){
           return true;
       } else{
           return false;
       }
}

bool SignUp::checkpass(QString user, QString password)
{
    for(int i=0;i<=x;i++){
            if(user==un[i]){
                x=i;
                break;
            }
        }
        if(password==pw[x]){
            return true;
        }else{
            return false;
        }
}

void SignUp::on_Login_clicked()
{
    this -> close();
    login * open = new login;
    open -> show();
}


void SignUp::on_pushButton_clicked()
{
    QString flag;
    QFile file1("First Names.txt");
    QFile file("User&Pass.txt");
        if (file.open(QIODevice::Append) && file1.open(QIODevice::Append)) {
            qDebug() << "append file opened";
            QTextStream write(&file);
            QTextStream write1(&file1);
            fname = ui -> FirstName ->text();
            lname = ui -> LastName -> text();
            email = ui ->Email ->text();
            for(int i = 0; i < email.length(); i++){
                if(email[i] == '@'){
                    flag = '@';
                }
            }
            if(flag != '@'){
                ui -> label -> setText("Not a valid email");
            }else{
                write1 << fname << " " << lname << " " << email;
                ui -> label -> setText("Valid email");
            }
            user = ui->Username->text();
            if(!checkuser(user)&&user!=""){
                qDebug() << "user available";
                    pass = ui->Password->text();
                    passc = ui->Password2->text();
                    if(pass!=passc){
                       ui->alert->setText("Password and Confirmation must be the same");
                    }
                    else
                    {
                        qDebug() << "user and pass written";
                        write<<user<<"\t"<<pass<<"\n";
                        this->close();
                        Homepage * open = new Homepage(user);
                        open -> show();
                    }
                    file.close();
                    file1.close();
            }
            else
            {
                ui->alert->setText("User already exists! Please try again");
            }
        }

}

