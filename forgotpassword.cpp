#include "forgotpassword.h"
#include "ui_forgotpassword.h"
#include "QPixmap"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlTableModel>
#include <QMessageBox>
#include <QRandomGenerator>


forgotPassword::forgotPassword(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::forgotPassword)
{
    ui->setupUi(this);
    QPixmap pix("D:/BankingAppReplica/logo.png");
    ui->logo->setPixmap(pix);

    connect(ui->changePassword, &QPushButton::clicked, this, &forgotPassword::changePassword);
}

QString forgotPassword::getEmail()  {
    return ui->email_fp->text();
}

QString forgotPassword::getPassword() {
    return ui->password_fp->text();
}

QString forgotPassword::getConfirmedPassword() {
    return ui->cpassword_fp->text();
}

void forgotPassword::changePassword() {
    QString email = getEmail();
    QString newpassword = getPassword();
    QString newcpassword = getConfirmedPassword();

    if (email.isEmpty() || newpassword.isEmpty() || newcpassword.isEmpty()) { // need to add more validations here
        QMessageBox::warning(this, "Input Error", "Please fill in all the required fields.");
        return;
    }
    else if (newpassword != newcpassword) {
        QMessageBox::warning(this, "Input Error", "Passwords do not match");
        return;
    }

    QSqlQuery query(QSqlDatabase::database());
    query.prepare("UPDATE userdata SET password = :newpassword WHERE email = :email");

    query.bindValue(":newpassword", newpassword);
    query.bindValue(":email", email);

    if (!query.exec()) {
        QMessageBox::warning(this, "Error", "Failed to change the password. Please try again.");
    } else {
        QMessageBox::information(this, "Success", "Password has been successfully updated.");
    }
}

forgotPassword::~forgotPassword()
{
    delete ui;
}
