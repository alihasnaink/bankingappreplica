#include "sendmoney.h"
#include "ui_sendmoney.h"

sendmoney::sendmoney(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::sendmoney)
{
    ui->setupUi(this);
}

sendmoney::~sendmoney()
{
    delete ui;
}
