#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "debitcard.h"
#include "depositmoney.h"
#include "QPixmap"
#include <QMessageBox>
#include <QIcon>
#include <QApplication>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlTableModel>
#include <QRandomGenerator>

int login_attemps = 0;

void MainWindow::initializeDatabase() {  // this function creates a database if doesnt exist before
    // Connect to SQLite database
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("D:/BankingAppReplica/bankingApp.db");


    if (!db.open()) {   // opening of database
        QMessageBox::critical(this, "Database Error", db.lastError().text());
        return;
    }

    QSqlQuery query;
    QString createTable = "CREATE TABLE IF NOT EXISTS userdata ("
                          "account_number TEXT PRIMARY KEY, "
                          "fullname TEXT NOT NULL, "
                          "username TEXT NOT NULL, "
                          "password TEXT NOT NULL, "
                          "email TEXT NOT NULL, "
                          "account_type TEXT NOT NULL, "
                          "card_type TEXT NOT NULL, "
                          "balance REAL NOT NULL)";

    if (!query.exec(createTable)) {
        QMessageBox::critical(this, "Database Error", query.lastError().text());
    }
}


void MainWindow::checkLogin() {
    login_attemps++;
    QString username = ui->lineEdit_username->text();
    QString enteredPassword = ui->lineEdit_password->text();

    QSqlQuery query;
    query.prepare("SELECT password, account_number, fullname, balance, account_type, card_type FROM userdata WHERE username = :username");
    query.bindValue(":username", username);

    if (query.exec() && query.next()) {
        QString storedPassword = query.value(0).toString();

        // Verify the password
        if (enteredPassword == storedPassword) {
            // Fetch account details
            QString accountNumber = query.value(1).toString();
            QString fullName = query.value(2).toString();
            double balance = query.value(3).toDouble();
            QString accountType = query.value(4).toString();
            QString cardType = query.value(5).toString();

            ui->label_accountnumber->setText("Account # " + accountNumber);
            ui->label_fullname->setText("Hello, " + fullName);
            ui->label_balance->setText(QString::number(balance, 'f', 2) + " PKR");
            ui->label_accounttype->setText(accountType + " Account");
            ui->label_cardtype->setText(cardType + " Debit Card");

            ui->stackedWidget->setCurrentIndex(1);

            // Load additional images or icons if necessary
            QPixmap pix("D:/BankingAppReplica/logo.png");
            ui->label_13->setPixmap(pix);
            ui->pushButton_4->setIcon(QIcon("D:/BankingAppReplica/sendMoney.png"));
        } else {
            QMessageBox::warning(this, "Login", "Incorrect password. Please try again.");
            if (login_attemps > 3) {
                QMessageBox::warning(this, "Time out...", "Too many incorrect password attempts");
                close();
            }
        }
    } else {
        QMessageBox::warning(this, "Login", "User not found. Please try again.");
    }
}



void MainWindow::openAccountCreationBox() {
    accountCreationBox accountDialog(this);
    if (accountDialog.exec() == QDialog::Accepted) {

    }
}

void MainWindow::openForgotPasswordBox() {
    forgotPassword accountDialog(this);
    if (accountDialog.exec() == QDialog::Accepted) {
    }
}

void MainWindow::logOut() {
    ui->stackedWidget->setCurrentIndex(0);
    ui->lineEdit_username->clear();
    ui->lineEdit_password->clear();
    QMessageBox::information(this, "Logout", "You have been logged out.");
}

void::MainWindow::cardinfo() {
    debitcard accountDialog(this);
    if (accountDialog.exec() == QDialog::Accepted) {
    }
}

void::MainWindow::opendepositmoney() {
    depositmoney accountDialog(this);
    if (accountDialog.exec() == QDialog::Accepted) {
    }
}


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    initializeDatabase();

    setWindowIcon(QIcon("D:/BankingAppReplica/logo.png"));
    QPixmap pix("D:/BankingAppReplica/logo.png");
    ui->label_6->setPixmap(pix);

    connect(ui->loginButton, &QPushButton::clicked, this, &MainWindow::checkLogin);
    connect(ui->createAccountButton, &QPushButton::clicked, this, &MainWindow::openAccountCreationBox);
    connect(ui->fpasswordButton, &QPushButton::clicked, this, &MainWindow::openForgotPasswordBox);
    connect(ui->logoutButton, &QPushButton::clicked, this, &MainWindow::logOut);
    connect(ui->pushButton_6, &QPushButton::clicked, this, &MainWindow::cardinfo);
    connect(ui->pushButton_5, &QPushButton::clicked, this, &MainWindow::opendepositmoney);
}

MainWindow::~MainWindow()
{
    delete ui;
}
