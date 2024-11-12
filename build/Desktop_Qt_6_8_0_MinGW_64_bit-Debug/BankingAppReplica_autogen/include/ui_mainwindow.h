/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label_6;
    QLineEdit *lineEdit_password;
    QLineEdit *lineEdit_username;
    QPushButton *createAccountButton;
    QPushButton *loginButton;
    QLabel *usernam_Label;
    QPushButton *fpasswordButton;
    QLabel *welcome_Label;
    QLabel *password_Label;
    QWidget *page_3;
    QPushButton *logoutButton;
    QLabel *label_fullname;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QLabel *label_5;
    QListView *listView;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_balance;
    QLabel *label_accounttype;
    QLabel *label_cardtype;
    QLabel *label_accountnumber;
    QLabel *label_13;
    QWidget *page_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(748, 660);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setAutoFillBackground(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 10, 741, 631));
        page = new QWidget();
        page->setObjectName("page");
        label_6 = new QLabel(page);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(290, 30, 161, 161));
        label_6->setPixmap(QPixmap(QString::fromUtf8("C:/Users/HP/.designer/backup/logo.png")));
        label_6->setScaledContents(true);
        lineEdit_password = new QLineEdit(page);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setGeometry(QRect(180, 440, 401, 51));
        QFont font;
        font.setPointSize(11);
        lineEdit_password->setFont(font);
        lineEdit_password->setMaxLength(25);
        lineEdit_password->setEchoMode(QLineEdit::EchoMode::Password);
        lineEdit_username = new QLineEdit(page);
        lineEdit_username->setObjectName("lineEdit_username");
        lineEdit_username->setGeometry(QRect(180, 330, 401, 51));
        lineEdit_username->setFont(font);
        lineEdit_username->setMaxLength(25);
        createAccountButton = new QPushButton(page);
        createAccountButton->setObjectName("createAccountButton");
        createAccountButton->setGeometry(QRect(380, 510, 201, 41));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setItalic(false);
        createAccountButton->setFont(font1);
        loginButton = new QPushButton(page);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(180, 510, 191, 41));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(false);
        loginButton->setFont(font2);
        usernam_Label = new QLabel(page);
        usernam_Label->setObjectName("usernam_Label");
        usernam_Label->setGeometry(QRect(180, 290, 94, 47));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        usernam_Label->setFont(font3);
        fpasswordButton = new QPushButton(page);
        fpasswordButton->setObjectName("fpasswordButton");
        fpasswordButton->setGeometry(QRect(440, 560, 141, 29));
        fpasswordButton->setMouseTracking(false);
        fpasswordButton->setAcceptDrops(false);
        fpasswordButton->setAutoFillBackground(false);
        welcome_Label = new QLabel(page);
        welcome_Label->setObjectName("welcome_Label");
        welcome_Label->setGeometry(QRect(170, 220, 511, 41));
        QFont font4;
        font4.setPointSize(18);
        font4.setBold(true);
        welcome_Label->setFont(font4);
        password_Label = new QLabel(page);
        password_Label->setObjectName("password_Label");
        password_Label->setGeometry(QRect(180, 400, 89, 47));
        password_Label->setFont(font3);
        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        logoutButton = new QPushButton(page_3);
        logoutButton->setObjectName("logoutButton");
        logoutButton->setGeometry(QRect(630, 20, 83, 29));
        label_fullname = new QLabel(page_3);
        label_fullname->setObjectName("label_fullname");
        label_fullname->setGeometry(QRect(20, 90, 511, 41));
        label_fullname->setFont(font4);
        pushButton_4 = new QPushButton(page_3);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(20, 330, 81, 81));
        QIcon icon;
        icon.addFile(QString::fromUtf8("sendMoney.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_4->setIcon(icon);
        pushButton_4->setIconSize(QSize(32, 32));
        pushButton_5 = new QPushButton(page_3);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(110, 330, 81, 81));
        pushButton_6 = new QPushButton(page_3);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(20, 420, 81, 81));
        pushButton_7 = new QPushButton(page_3);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(110, 420, 81, 81));
        pushButton_8 = new QPushButton(page_3);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(20, 510, 81, 81));
        pushButton_9 = new QPushButton(page_3);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(110, 510, 81, 81));
        pushButton_10 = new QPushButton(page_3);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(200, 510, 81, 81));
        pushButton_11 = new QPushButton(page_3);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setGeometry(QRect(200, 330, 81, 81));
        pushButton_12 = new QPushButton(page_3);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setGeometry(QRect(290, 330, 81, 81));
        pushButton_13 = new QPushButton(page_3);
        pushButton_13->setObjectName("pushButton_13");
        pushButton_13->setGeometry(QRect(290, 510, 81, 81));
        pushButton_14 = new QPushButton(page_3);
        pushButton_14->setObjectName("pushButton_14");
        pushButton_14->setGeometry(QRect(290, 420, 81, 81));
        pushButton_15 = new QPushButton(page_3);
        pushButton_15->setObjectName("pushButton_15");
        pushButton_15->setGeometry(QRect(200, 420, 81, 81));
        label_5 = new QLabel(page_3);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 280, 511, 41));
        QFont font5;
        font5.setPointSize(14);
        font5.setBold(true);
        label_5->setFont(font5);
        listView = new QListView(page_3);
        listView->setObjectName("listView");
        listView->setGeometry(QRect(410, 110, 311, 491));
        label_7 = new QLabel(page_3);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(410, 70, 511, 41));
        label_7->setFont(font5);
        label_8 = new QLabel(page_3);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(20, 200, 71, 41));
        label_8->setFont(font5);
        label_balance = new QLabel(page_3);
        label_balance->setObjectName("label_balance");
        label_balance->setGeometry(QRect(20, 230, 211, 41));
        QFont font6;
        font6.setPointSize(28);
        label_balance->setFont(font6);
        label_accounttype = new QLabel(page_3);
        label_accounttype->setObjectName("label_accounttype");
        label_accounttype->setGeometry(QRect(20, 150, 211, 41));
        QFont font7;
        font7.setPointSize(10);
        label_accounttype->setFont(font7);
        label_cardtype = new QLabel(page_3);
        label_cardtype->setObjectName("label_cardtype");
        label_cardtype->setGeometry(QRect(20, 170, 211, 41));
        label_cardtype->setFont(font7);
        label_accountnumber = new QLabel(page_3);
        label_accountnumber->setObjectName("label_accountnumber");
        label_accountnumber->setGeometry(QRect(20, 120, 211, 41));
        label_accountnumber->setFont(font7);
        label_13 = new QLabel(page_3);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(20, 0, 101, 101));
        label_13->setPixmap(QPixmap(QString::fromUtf8("logo.png")));
        label_13->setScaledContents(true);
        stackedWidget->addWidget(page_3);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 748, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "CS100 National Bank App", nullptr));
        label_6->setText(QString());
        createAccountButton->setText(QCoreApplication::translate("MainWindow", "Create new account", nullptr));
        loginButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        usernam_Label->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        fpasswordButton->setText(QCoreApplication::translate("MainWindow", "Forgot your password?", nullptr));
        welcome_Label->setText(QCoreApplication::translate("MainWindow", "Welcome back to your banking app!", nullptr));
        password_Label->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        logoutButton->setText(QCoreApplication::translate("MainWindow", "Log Out", nullptr));
        label_fullname->setText(QCoreApplication::translate("MainWindow", "Good evening, Shuja Abbas!", nullptr));
        pushButton_4->setText(QString());
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Deposit Money", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "View Card Information", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Change Account Information", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "Send Money", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "Send Money", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "Send Money", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "Pay Bill", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "View Transactio  History", nullptr));
        pushButton_13->setText(QCoreApplication::translate("MainWindow", "Send Money", nullptr));
        pushButton_14->setText(QCoreApplication::translate("MainWindow", "Budget Manager", nullptr));
        pushButton_15->setText(QCoreApplication::translate("MainWindow", "Currency Converter", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Banking Features", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Transaction History", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Balance", nullptr));
        label_balance->setText(QCoreApplication::translate("MainWindow", "200,000 PKR", nullptr));
        label_accounttype->setText(QCoreApplication::translate("MainWindow", "Savings Account", nullptr));
        label_cardtype->setText(QCoreApplication::translate("MainWindow", "MasterCard Debit Card", nullptr));
        label_accountnumber->setText(QCoreApplication::translate("MainWindow", "Account # 2100564656544654", nullptr));
        label_13->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
