/********************************************************************************
** Form generated from reading UI file 'depositmoney.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEPOSITMONEY_H
#define UI_DEPOSITMONEY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_depositmoney
{
public:
    QLineEdit *cpassword_fp;
    QLabel *logo;
    QPushButton *changePassword;
    QLabel *label_6;
    QLineEdit *email_fp;
    QLabel *label_3;
    QLineEdit *password_fp;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_7;
    QPushButton *changePassword_2;

    void setupUi(QDialog *depositmoney)
    {
        if (depositmoney->objectName().isEmpty())
            depositmoney->setObjectName("depositmoney");
        depositmoney->resize(492, 534);
        cpassword_fp = new QLineEdit(depositmoney);
        cpassword_fp->setObjectName("cpassword_fp");
        cpassword_fp->setGeometry(QRect(240, 380, 171, 41));
        QFont font;
        font.setPointSize(11);
        cpassword_fp->setFont(font);
        cpassword_fp->setMaxLength(25);
        cpassword_fp->setEchoMode(QLineEdit::EchoMode::Password);
        logo = new QLabel(depositmoney);
        logo->setObjectName("logo");
        logo->setGeometry(QRect(190, 20, 101, 101));
        logo->setPixmap(QPixmap(QString::fromUtf8("logo.png")));
        logo->setScaledContents(true);
        changePassword = new QPushButton(depositmoney);
        changePassword->setObjectName("changePassword");
        changePassword->setGeometry(QRect(170, 450, 141, 51));
        label_6 = new QLabel(depositmoney);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(240, 340, 131, 47));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        label_6->setFont(font1);
        email_fp = new QLineEdit(depositmoney);
        email_fp->setObjectName("email_fp");
        email_fp->setGeometry(QRect(80, 290, 331, 41));
        email_fp->setFont(font);
        email_fp->setInputMethodHints(Qt::InputMethodHint::ImhEmailCharactersOnly);
        email_fp->setMaxLength(30);
        label_3 = new QLabel(depositmoney);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(80, 250, 231, 47));
        label_3->setFont(font1);
        password_fp = new QLineEdit(depositmoney);
        password_fp->setObjectName("password_fp");
        password_fp->setGeometry(QRect(80, 380, 151, 41));
        password_fp->setFont(font);
        password_fp->setMaxLength(25);
        password_fp->setEchoMode(QLineEdit::EchoMode::Password);
        label_4 = new QLabel(depositmoney);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(80, 340, 231, 47));
        label_4->setFont(font1);
        label_5 = new QLabel(depositmoney);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(120, 120, 261, 47));
        label_5->setFont(font1);
        label_7 = new QLabel(depositmoney);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(110, 210, 281, 47));
        label_7->setFont(font1);
        changePassword_2 = new QPushButton(depositmoney);
        changePassword_2->setObjectName("changePassword_2");
        changePassword_2->setGeometry(QRect(150, 170, 201, 41));

        retranslateUi(depositmoney);

        QMetaObject::connectSlotsByName(depositmoney);
    } // setupUi

    void retranslateUi(QDialog *depositmoney)
    {
        depositmoney->setWindowTitle(QCoreApplication::translate("depositmoney", "Dialog", nullptr));
        logo->setText(QString());
        changePassword->setText(QCoreApplication::translate("depositmoney", "Deposit Money", nullptr));
        label_6->setText(QCoreApplication::translate("depositmoney", "Expiry Date", nullptr));
        label_3->setText(QCoreApplication::translate("depositmoney", "Card Number", nullptr));
        label_4->setText(QCoreApplication::translate("depositmoney", "CVV", nullptr));
        label_5->setText(QCoreApplication::translate("depositmoney", "Directly deposit using Bank transfer", nullptr));
        label_7->setText(QCoreApplication::translate("depositmoney", "Deposit through other bank card", nullptr));
        changePassword_2->setText(QCoreApplication::translate("depositmoney", "View bank account information", nullptr));
    } // retranslateUi

};

namespace Ui {
    class depositmoney: public Ui_depositmoney {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEPOSITMONEY_H
