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
    QLineEdit *lineEdit_username_2;
    QLineEdit *lineEdit_username_4;
    QLabel *label_6;
    QLineEdit *lineEdit_username_5;
    QPushButton *pushButton;

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
        lineEdit_username_2 = new QLineEdit(forgotPassword);
        lineEdit_username_2->setObjectName("lineEdit_username_2");
        lineEdit_username_2->setGeometry(QRect(90, 230, 331, 51));
        QFont font1;
        font1.setPointSize(11);
        lineEdit_username_2->setFont(font1);
        lineEdit_username_2->setInputMethodHints(Qt::InputMethodHint::ImhEmailCharactersOnly);
        lineEdit_username_2->setMaxLength(30);
        lineEdit_username_4 = new QLineEdit(forgotPassword);
        lineEdit_username_4->setObjectName("lineEdit_username_4");
        lineEdit_username_4->setGeometry(QRect(90, 320, 331, 51));
        lineEdit_username_4->setFont(font1);
        lineEdit_username_4->setMaxLength(25);
        lineEdit_username_4->setEchoMode(QLineEdit::EchoMode::Password);
        label_6 = new QLabel(forgotPassword);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(90, 370, 131, 47));
        label_6->setFont(font);
        lineEdit_username_5 = new QLineEdit(forgotPassword);
        lineEdit_username_5->setObjectName("lineEdit_username_5");
        lineEdit_username_5->setGeometry(QRect(90, 410, 331, 51));
        lineEdit_username_5->setFont(font1);
        lineEdit_username_5->setMaxLength(25);
        lineEdit_username_5->setEchoMode(QLineEdit::EchoMode::Password);
        pushButton = new QPushButton(forgotPassword);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(190, 480, 141, 51));

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
        pushButton->setText(QCoreApplication::translate("forgotPassword", "Change Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class forgotPassword: public Ui_forgotPassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORGOTPASSWORD_H
