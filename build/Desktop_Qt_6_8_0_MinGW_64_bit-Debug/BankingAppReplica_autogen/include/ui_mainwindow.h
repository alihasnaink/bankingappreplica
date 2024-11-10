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
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLabel *label_2;
    QPushButton *pushButton_3;
    QLabel *label;
    QLabel *label_3;
    QWidget *page_3;
    QPushButton *logoutbutton;
    QLabel *label_4;
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
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
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
        pushButton_2 = new QPushButton(page);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(380, 510, 201, 41));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setItalic(false);
        pushButton_2->setFont(font1);
        pushButton = new QPushButton(page);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(180, 510, 191, 41));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(false);
        pushButton->setFont(font2);
        label_2 = new QLabel(page);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(180, 290, 94, 47));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        label_2->setFont(font3);
        pushButton_3 = new QPushButton(page);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(440, 560, 141, 29));
        pushButton_3->setMouseTracking(false);
        pushButton_3->setAcceptDrops(false);
        pushButton_3->setAutoFillBackground(false);
        label = new QLabel(page);
        label->setObjectName("label");
        label->setGeometry(QRect(170, 220, 511, 41));
        QFont font4;
        font4.setPointSize(18);
        font4.setBold(true);
        label->setFont(font4);
        label_3 = new QLabel(page);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(180, 400, 89, 47));
        label_3->setFont(font3);
        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        logoutbutton = new QPushButton(page_3);
        logoutbutton->setObjectName("logoutbutton");
        logoutbutton->setGeometry(QRect(630, 20, 83, 29));
        label_4 = new QLabel(page_3);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 90, 511, 41));
        label_4->setFont(font4);
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
        label_9 = new QLabel(page_3);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(20, 230, 211, 41));
        QFont font6;
        font6.setPointSize(28);
        label_9->setFont(font6);
        label_10 = new QLabel(page_3);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(20, 150, 211, 41));
        QFont font7;
        font7.setPointSize(10);
        label_10->setFont(font7);
        label_11 = new QLabel(page_3);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(20, 170, 211, 41));
        label_11->setFont(font7);
        label_12 = new QLabel(page_3);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(20, 120, 211, 41));
        label_12->setFont(font7);
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
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Create new account", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Forgot your password?", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Welcome back to your banking app!", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        logoutbutton->setText(QCoreApplication::translate("MainWindow", "Log Out", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Good evening, Shuja Abbas!", nullptr));
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
        label_9->setText(QCoreApplication::translate("MainWindow", "200,000 PKR", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Savings Account", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "MasterCard Debit Card", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Account # 2100564656544654", nullptr));
        label_13->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
