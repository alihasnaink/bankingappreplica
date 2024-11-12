/********************************************************************************
** Form generated from reading UI file 'forgotpassword.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORGOTPASSWORD_H
#define UI_FORGOTPASSWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_forgotPassword
{
public:
    QLabel *logo;
    QLabel *label_5;
    QLabel *label_3;
    QLineEdit *email_fp;
    QLineEdit *password_fp;
    QLabel *label_6;
    QLineEdit *cpassword_fp;
    QPushButton *changePassword;

    void setupUi(QDialog *forgotPassword)
    {
        if (forgotPassword->objectName().isEmpty())
            forgotPassword->setObjectName("forgotPassword");
        forgotPassword->resize(493, 564);
        logo = new QLabel(forgotPassword);
        logo->setObjectName("logo");
        logo->setGeometry(QRect(170, 30, 161, 161));
        logo->setPixmap(QPixmap(QString::fromUtf8("logo.png")));
        logo->setScaledContents(true);
        label_5 = new QLabel(forgotPassword);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(90, 280, 111, 47));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        label_5->setFont(font);
        label_3 = new QLabel(forgotPassword);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(90, 190, 231, 47));
        label_3->setFont(font);
        email_fp = new QLineEdit(forgotPassword);
        email_fp->setObjectName("email_fp");
        email_fp->setGeometry(QRect(90, 230, 331, 51));
        QFont font1;
        font1.setPointSize(11);
        email_fp->setFont(font1);
        email_fp->setInputMethodHints(Qt::InputMethodHint::ImhEmailCharactersOnly);
        email_fp->setMaxLength(30);
        password_fp = new QLineEdit(forgotPassword);
        password_fp->setObjectName("password_fp");
        password_fp->setGeometry(QRect(90, 320, 331, 51));
        password_fp->setFont(font1);
        password_fp->setMaxLength(25);
        password_fp->setEchoMode(QLineEdit::EchoMode::Password);
        label_6 = new QLabel(forgotPassword);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(90, 370, 131, 47));
        label_6->setFont(font);
        cpassword_fp = new QLineEdit(forgotPassword);
        cpassword_fp->setObjectName("cpassword_fp");
        cpassword_fp->setGeometry(QRect(90, 410, 331, 51));
        cpassword_fp->setFont(font1);
        cpassword_fp->setMaxLength(25);
        cpassword_fp->setEchoMode(QLineEdit::EchoMode::Password);
        changePassword = new QPushButton(forgotPassword);
        changePassword->setObjectName("changePassword");
        changePassword->setGeometry(QRect(190, 480, 141, 51));

        retranslateUi(forgotPassword);

        QMetaObject::connectSlotsByName(forgotPassword);
    } // setupUi

    void retranslateUi(QDialog *forgotPassword)
    {
        forgotPassword->setWindowTitle(QCoreApplication::translate("forgotPassword", "Forgot Password", nullptr));
        logo->setText(QString());
        label_5->setText(QCoreApplication::translate("forgotPassword", "New password", nullptr));
        label_3->setText(QCoreApplication::translate("forgotPassword", "Enter your registered email", nullptr));
        label_6->setText(QCoreApplication::translate("forgotPassword", "Confirm Password", nullptr));
        changePassword->setText(QCoreApplication::translate("forgotPassword", "Change Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class forgotPassword: public Ui_forgotPassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORGOTPASSWORD_H
