/********************************************************************************
** Form generated from reading UI file 'debitcard.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEBITCARD_H
#define UI_DEBITCARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_debitcard
{
public:
    QLabel *debitcardimage;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QDialog *debitcard)
    {
        if (debitcard->objectName().isEmpty())
            debitcard->setObjectName("debitcard");
        debitcard->resize(504, 599);
        debitcardimage = new QLabel(debitcard);
        debitcardimage->setObjectName("debitcardimage");
        debitcardimage->setGeometry(QRect(30, 30, 441, 311));
        debitcardimage->setPixmap(QPixmap(QString::fromUtf8("debit card.png")));
        debitcardimage->setScaledContents(true);
        label = new QLabel(debitcard);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 80, 81, 81));
        label->setPixmap(QPixmap(QString::fromUtf8("logo.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(debitcard);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(100, 180, 291, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Courier")});
        font.setPointSize(19);
        font.setBold(false);
        label_2->setFont(font);
        label_3 = new QLabel(debitcard);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(100, 220, 291, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Courier")});
        font1.setPointSize(12);
        font1.setBold(false);
        label_3->setFont(font1);
        label_4 = new QLabel(debitcard);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(100, 240, 291, 31));
        label_4->setFont(font1);
        label_5 = new QLabel(debitcard);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(100, 260, 291, 31));
        label_5->setFont(font1);

        retranslateUi(debitcard);

        QMetaObject::connectSlotsByName(debitcard);
    } // setupUi

    void retranslateUi(QDialog *debitcard)
    {
        debitcard->setWindowTitle(QCoreApplication::translate("debitcard", "Dialog", nullptr));
        debitcardimage->setText(QString());
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("debitcard", "4925 2565 7468 2441", nullptr));
        label_3->setText(QCoreApplication::translate("debitcard", "ALI HASNAIN", nullptr));
        label_4->setText(QCoreApplication::translate("debitcard", "CVV 166", nullptr));
        label_5->setText(QCoreApplication::translate("debitcard", "VALID THRU 02/29", nullptr));
    } // retranslateUi

};

namespace Ui {
    class debitcard: public Ui_debitcard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEBITCARD_H
