#include "forgotpassword.h"
#include "ui_forgotpassword.h"
#include "QPixmap"


forgotPassword::forgotPassword(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::forgotPassword)
{
    ui->setupUi(this);
    QPixmap pix("D:/BankingAppReplica/logo.png");
    ui->logo->setPixmap(pix);
}

forgotPassword::~forgotPassword()
{
    delete ui;
}
