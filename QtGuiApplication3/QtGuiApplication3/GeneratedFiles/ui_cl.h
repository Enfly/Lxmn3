/********************************************************************************
** Form generated from reading UI file 'cl.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CL_H
#define UI_CL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cl
{
public:
    QPushButton *pushButton;
    QTextBrowser *textBrowser;
    QPushButton *pushButton_2;

    void setupUi(QWidget *cl)
    {
        if (cl->objectName().isEmpty())
            cl->setObjectName(QString::fromUtf8("cl"));
        cl->resize(879, 668);
        pushButton = new QPushButton(cl);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(270, 460, 93, 28));
        textBrowser = new QTextBrowser(cl);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(330, 140, 256, 192));
        pushButton_2 = new QPushButton(cl);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(560, 460, 93, 28));

        retranslateUi(cl);

        QMetaObject::connectSlotsByName(cl);
    } // setupUi

    void retranslateUi(QWidget *cl)
    {
        cl->setWindowTitle(QApplication::translate("cl", "cl", nullptr));
        pushButton->setText(QApplication::translate("cl", "\351\207\207\347\224\250", nullptr));
        pushButton_2->setText(QApplication::translate("cl", "\351\207\215\346\226\260\347\224\237\346\210\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cl: public Ui_cl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CL_H
