#include "accountcreationbox.h"
#include "ui_accountcreationbox.h"
#include "QPixmap"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlTableModel>
#include <QMessageBox>
#include <QRandomGenerator>



accountCreationBox::accountCreationBox(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::accountCreationBox)
{
    ui->setupUi(this);
    QPixmap pix("D:/BankingAppReplica/logo.png");
    ui->logo->setPixmap(pix);
    connect(ui->submitButton, &QPushButton::clicked, this, &accountCreationBox::submitAccount);
}

accountCreationBox::~accountCreationBox()
{
    delete ui;
}

bool accountCreationBox::isUsernameOrEmailTaken(const QString &username, const QString &email) {
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM userdata WHERE username = :username OR email = :email");
    query.bindValue(":username", username);
    query.bindValue(":email", email);

    if (query.exec() && query.next()) {
        return query.value(0).toInt() > 0;
    } else {
        QMessageBox::warning(this, "Database Error", "Failed to check username and email uniqueness: " + query.lastError().text());
        return true;
    }
}

QString accountCreationBox::getFullname()  {
    return ui->lineEdit_fullname->text();
}

QString accountCreationBox::getUsername() const {
    return ui->lineEdit_username->text();
}

QString accountCreationBox::getPassword() const {
    return ui->lineEdit_password->text();
}

QString accountCreationBox::getEmail() const {
    return ui->lineEdit_email->text();
}

QString accountCreationBox::getAccountType() const {
    return ui->comboBox_accountType->currentText();
}

QString accountCreationBox::getCardType() const {
    return ui->comboBox_cardType->currentText();
}


void accountCreationBox::submitAccount()
{
    QString newUsername = getUsername();
    QString newfullname = getFullname();
    QString newPassword = getPassword();
    QString newEmail = getEmail();
    QString newAccountType = getAccountType();
    QString newCardType = getCardType();

    if (newUsername.isEmpty() || newPassword.isEmpty() || newEmail.isEmpty()) { // need to add more validations here
        QMessageBox::warning(this, "Input Error", "Please fill in all the required fields.");
        return;
    }

    if (isUsernameOrEmailTaken(newUsername, newEmail)) {
        QMessageBox::warning(this, "Account Creation", "Username or email is already in use.");
        return;
    }

    QSqlQuery query(QSqlDatabase::database());
    query.prepare("INSERT INTO userdata (account_number, fullname, username, password, email, account_type, card_type, balance) "
                  "VALUES (:accountNumber, :fullname, :username, :password, :email, :accountType, :cardType, :balance)");
    query.bindValue(":accountNumber", QString::number(QRandomGenerator::global()->bounded(100000000, 1000000000)));
    query.bindValue(":username", newUsername);
    query.bindValue(":fullname", newfullname);
    query.bindValue(":password", newPassword);
    query.bindValue(":email", newEmail);
    query.bindValue(":accountType", newAccountType);
    query.bindValue(":cardType", newCardType);
    query.bindValue(":balance", 0.0);

    if (!query.exec()) {
        QMessageBox::warning(this, "Account Creation", "Account creation failed: " + query.lastError().text());
    } else {
        QMessageBox::information(this, "Account Creation", "Account created successfully!");
        accept();  //
    }
}
