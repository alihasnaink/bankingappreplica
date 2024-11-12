#include "debitcard.h"
#include "ui_debitcard.h"

debitcard::debitcard(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::debitcard)
{
    ui->setupUi(this);
    QPixmap pix3("D:/BankingAppReplica/debit card.png");
    ui->debitcardimage->setPixmap(pix3);
    QPixmap pix2("D:/BankingAppReplica/logo.png");
    ui->label->setPixmap(pix2);
}
debitcard::~debitcard()
{
    delete ui;
}

