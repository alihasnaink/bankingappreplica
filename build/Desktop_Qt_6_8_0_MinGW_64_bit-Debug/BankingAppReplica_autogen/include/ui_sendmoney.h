/********************************************************************************
** Form generated from reading UI file 'sendmoney.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDMONEY_H
#define UI_SENDMONEY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_sendmoney
{
public:

    void setupUi(QDialog *sendmoney)
    {
        if (sendmoney->objectName().isEmpty())
            sendmoney->setObjectName("sendmoney");
        sendmoney->resize(400, 300);

        retranslateUi(sendmoney);

        QMetaObject::connectSlotsByName(sendmoney);
    } // setupUi

    void retranslateUi(QDialog *sendmoney)
    {
        sendmoney->setWindowTitle(QCoreApplication::translate("sendmoney", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sendmoney: public Ui_sendmoney {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDMONEY_H
