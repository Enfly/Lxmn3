/********************************************************************************
** Form generated from reading UI file '状态.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI__72B6__6001__H
#define UI__72B6__6001__H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_zt
{
public:
    QTextBrowser *textBrowser;
    QPushButton *pushButton;

    void setupUi(QWidget *zt)
    {
        if (zt->objectName().isEmpty())
            zt->setObjectName(QString::fromUtf8("zt"));
        zt->resize(701, 503);
        textBrowser = new QTextBrowser(zt);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(180, 120, 256, 192));
        pushButton = new QPushButton(zt);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(260, 400, 93, 28));

        retranslateUi(zt);

        QMetaObject::connectSlotsByName(zt);
    } // setupUi

    void retranslateUi(QWidget *zt)
    {
        zt->setWindowTitle(QApplication::translate("zt", "zt", nullptr));
        pushButton->setText(QApplication::translate("zt", "\344\277\256\346\224\271\347\255\226\347\225\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class zt: public Ui_zt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI__72B6__6001__H
