#include "depositmoney.h"
#include "ui_depositmoney.h"

depositmoney::depositmoney(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::depositmoney)
{

    ui->setupUi(this);
    QPixmap pix2("D:/BankingAppReplica/logo.png");
    ui->logo->setPixmap(pix2);
}

depositmoney::~depositmoney()
{
    delete ui;
}
