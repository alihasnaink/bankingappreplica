#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QPixmap"
#include <QMessageBox>
#include <QIcon>
#include <QApplication>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlTableModel>
#include <QRandomGenerator>

void MainWindow::initializeDatabase() {
    // Connect to SQLite database
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("D:/BankingAppReplica/bankingApp.db");  // Specify your database file path

    // Open the database
    if (!db.open()) {
        QMessageBox::critical(this, "Database Error", db.lastError().text());
        return;
    }

    // Create table if it doesn't exist
    QSqlQuery query;
    QString createTable = "CREATE TABLE IF NOT EXISTS userdata ("
                          "account_number TEXT PRIMARY KEY, "  // Randomly generated 9-digit number
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
    QString username = ui->lineEdit_username->text();
    QString enteredPassword = ui->lineEdit_password->text();

    // Query database for user
    QSqlQuery query;
    query.prepare("SELECT password FROM userdata WHERE username = :username");
    query.bindValue(":username", username);

    if (query.exec() && query.next()) {
        QString storedPassword = query.value(0).toString();
        if (enteredPassword == storedPassword) {
            ui->stackedWidget->setCurrentIndex(1);
            QPixmap pix("D:/BankingAppReplica/logo.png");
            ui->label_13->setPixmap(pix);
            ui->pushButton_4->setIcon(QIcon("D:/BankingAppReplica/sendMoney.png"));
        } else {
            QMessageBox::warning(this, "Login", "Incorrect password. Please try again.");
        }
    } else {
        QMessageBox::warning(this, "Login", "User not found. Please try again.");
    }
}


void MainWindow::openAccountCreationBox() {
    accountCreationBox accountDialog(this);
    if (accountDialog.exec() == QDialog::Accepted) {
        // Handle accepted dialog (e.g., retrieve data)
    }
}

void MainWindow::openForgotPasswordBox() {
    forgotPassword accountDialog(this);
    if (accountDialog.exec() == QDialog::Accepted) {
        // Handle accepted dialog (e.g., retrieve data)
    }
}

void MainWindow::logOut() {
    ui->stackedWidget->setCurrentIndex(0);
    ui->lineEdit_username->clear();
    ui->lineEdit_password->clear();
    QMessageBox::information(this, "Logout", "You have been logged out.");
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
    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::checkLogin);
    connect(ui->pushButton_2, &QPushButton::clicked, this, &MainWindow::openAccountCreationBox);
    connect(ui->pushButton_3, &QPushButton::clicked, this, &MainWindow::openForgotPasswordBox);
    connect(ui->logoutbutton, &QPushButton::clicked, this, &MainWindow::logOut);
}

MainWindow::~MainWindow()
{
    delete ui;
}
