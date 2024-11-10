/********************************************************************************
** Form generated from reading UI file 'accountcreationbox.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNTCREATIONBOX_H
#define UI_ACCOUNTCREATIONBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_accountCreationBox
{
public:
    QLabel *logo;
    QLineEdit *lineEdit_fullname;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_email;
    QLabel *label_4;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_password;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QComboBox *comboBox_accountType;
    QLabel *label_9;
    QSpinBox *spinBox;
    QPushButton *submitButton;
    QLabel *label_10;
    QLabel *label_11;
    QComboBox *comboBox_cardType;
    QLineEdit *lineEdit_username_5;
    QCheckBox *checkBox;

    void setupUi(QDialog *accountCreationBox)
    {
        if (accountCreationBox->objectName().isEmpty())
            accountCreationBox->setObjectName("accountCreationBox");
        accountCreationBox->resize(578, 773);
        logo = new QLabel(accountCreationBox);
        logo->setObjectName("logo");
        logo->setGeometry(QRect(210, 30, 151, 151));
        logo->setPixmap(QPixmap(QString::fromUtf8("logo.png")));
        logo->setScaledContents(true);
        lineEdit_fullname = new QLineEdit(accountCreationBox);
        lineEdit_fullname->setObjectName("lineEdit_fullname");
        lineEdit_fullname->setGeometry(QRect(40, 270, 251, 41));
        QFont font;
        font.setPointSize(11);
        lineEdit_fullname->setFont(font);
        lineEdit_fullname->setMaxLength(25);
        label_2 = new QLabel(accountCreationBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 230, 101, 47));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        label_2->setFont(font1);
        label_3 = new QLabel(accountCreationBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(300, 230, 101, 47));
        label_3->setFont(font1);
        lineEdit_email = new QLineEdit(accountCreationBox);
        lineEdit_email->setObjectName("lineEdit_email");
        lineEdit_email->setGeometry(QRect(300, 270, 251, 41));
        lineEdit_email->setFont(font);
        lineEdit_email->setInputMethodHints(Qt::InputMethodHint::ImhEmailCharactersOnly);
        lineEdit_email->setMaxLength(30);
        label_4 = new QLabel(accountCreationBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 310, 101, 47));
        label_4->setFont(font1);
        lineEdit_username = new QLineEdit(accountCreationBox);
        lineEdit_username->setObjectName("lineEdit_username");
        lineEdit_username->setGeometry(QRect(40, 350, 251, 41));
        lineEdit_username->setFont(font);
        lineEdit_username->setMaxLength(25);
        lineEdit_password = new QLineEdit(accountCreationBox);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setGeometry(QRect(300, 350, 251, 41));
        lineEdit_password->setFont(font);
        lineEdit_password->setMaxLength(25);
        lineEdit_password->setEchoMode(QLineEdit::EchoMode::Password);
        label_5 = new QLabel(accountCreationBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(300, 310, 101, 47));
        label_5->setFont(font1);
        label_6 = new QLabel(accountCreationBox);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(40, 190, 231, 47));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        label_6->setFont(font2);
        label_7 = new QLabel(accountCreationBox);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(40, 410, 231, 47));
        label_7->setFont(font2);
        label_8 = new QLabel(accountCreationBox);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(40, 450, 131, 47));
        label_8->setFont(font1);
        comboBox_accountType = new QComboBox(accountCreationBox);
        comboBox_accountType->addItem(QString());
        comboBox_accountType->addItem(QString());
        comboBox_accountType->addItem(QString());
        comboBox_accountType->setObjectName("comboBox_accountType");
        comboBox_accountType->setEnabled(true);
        comboBox_accountType->setGeometry(QRect(40, 490, 251, 51));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(false);
        comboBox_accountType->setFont(font3);
        comboBox_accountType->setInputMethodHints(Qt::InputMethodHint::ImhNone);
        comboBox_accountType->setEditable(false);
        comboBox_accountType->setMaxVisibleItems(3);
        comboBox_accountType->setInsertPolicy(QComboBox::InsertPolicy::InsertAtTop);
        label_9 = new QLabel(accountCreationBox);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(40, 540, 211, 47));
        label_9->setFont(font1);
        spinBox = new QSpinBox(accountCreationBox);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(40, 580, 51, 41));
        submitButton = new QPushButton(accountCreationBox);
        submitButton->setObjectName("submitButton");
        submitButton->setGeometry(QRect(210, 700, 161, 51));
        QFont font4;
        font4.setBold(true);
        submitButton->setFont(font4);
        label_10 = new QLabel(accountCreationBox);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(300, 540, 541, 47));
        label_10->setFont(font1);
        label_11 = new QLabel(accountCreationBox);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(300, 450, 171, 47));
        label_11->setFont(font1);
        comboBox_cardType = new QComboBox(accountCreationBox);
        comboBox_cardType->addItem(QString());
        comboBox_cardType->addItem(QString());
        comboBox_cardType->addItem(QString());
        comboBox_cardType->setObjectName("comboBox_cardType");
        comboBox_cardType->setEnabled(true);
        comboBox_cardType->setGeometry(QRect(300, 490, 251, 51));
        comboBox_cardType->setFont(font3);
        comboBox_cardType->setInputMethodHints(Qt::InputMethodHint::ImhNone);
        comboBox_cardType->setEditable(false);
        comboBox_cardType->setMaxVisibleItems(2);
        comboBox_cardType->setInsertPolicy(QComboBox::InsertPolicy::InsertAtTop);
        lineEdit_username_5 = new QLineEdit(accountCreationBox);
        lineEdit_username_5->setObjectName("lineEdit_username_5");
        lineEdit_username_5->setGeometry(QRect(300, 580, 251, 41));
        lineEdit_username_5->setFont(font);
        lineEdit_username_5->setMaxLength(25);
        checkBox = new QCheckBox(accountCreationBox);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(40, 650, 301, 26));

        retranslateUi(accountCreationBox);

        comboBox_accountType->setCurrentIndex(0);
        comboBox_cardType->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(accountCreationBox);
    } // setupUi

    void retranslateUi(QDialog *accountCreationBox)
    {
        accountCreationBox->setWindowTitle(QCoreApplication::translate("accountCreationBox", "Account Creation Box", nullptr));
        logo->setText(QString());
        label_2->setText(QCoreApplication::translate("accountCreationBox", "Full Name", nullptr));
        label_3->setText(QCoreApplication::translate("accountCreationBox", "Email", nullptr));
        label_4->setText(QCoreApplication::translate("accountCreationBox", "Username", nullptr));
        label_5->setText(QCoreApplication::translate("accountCreationBox", "Password", nullptr));
        label_6->setText(QCoreApplication::translate("accountCreationBox", "Personal Information ", nullptr));
        label_7->setText(QCoreApplication::translate("accountCreationBox", "Account Information", nullptr));
        label_8->setText(QCoreApplication::translate("accountCreationBox", "Account Type", nullptr));
        comboBox_accountType->setItemText(0, QCoreApplication::translate("accountCreationBox", "Savings", nullptr));
        comboBox_accountType->setItemText(1, QCoreApplication::translate("accountCreationBox", "Current", nullptr));
        comboBox_accountType->setItemText(2, QCoreApplication::translate("accountCreationBox", "Islamic", nullptr));

        comboBox_accountType->setCurrentText(QCoreApplication::translate("accountCreationBox", "Savings", nullptr));
        label_9->setText(QCoreApplication::translate("accountCreationBox", "Transactions per month", nullptr));
        submitButton->setText(QCoreApplication::translate("accountCreationBox", "Submit Application", nullptr));
        label_10->setText(QCoreApplication::translate("accountCreationBox", "Annual Income", nullptr));
        label_11->setText(QCoreApplication::translate("accountCreationBox", "Select Debit Card", nullptr));
        comboBox_cardType->setItemText(0, QCoreApplication::translate("accountCreationBox", "Visa", nullptr));
        comboBox_cardType->setItemText(1, QCoreApplication::translate("accountCreationBox", "MasterCard", nullptr));
        comboBox_cardType->setItemText(2, QCoreApplication::translate("accountCreationBox", "PayPak", nullptr));

        comboBox_cardType->setCurrentText(QCoreApplication::translate("accountCreationBox", "Visa", nullptr));
        checkBox->setText(QCoreApplication::translate("accountCreationBox", "Do you accept the terms and conditions?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class accountCreationBox: public Ui_accountCreationBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNTCREATIONBOX_H
