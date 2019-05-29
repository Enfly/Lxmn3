/********************************************************************************
** Form generated from reading UI file '策略.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI__7B56__7565__H
#define UI__7B56__7565__H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sc
{
public:
    QTextBrowser *textBrowser;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *sc)
    {
        if (sc->objectName().isEmpty())
            sc->setObjectName(QString::fromUtf8("sc"));
        sc->resize(796, 600);
        textBrowser = new QTextBrowser(sc);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(220, 150, 256, 192));
        pushButton = new QPushButton(sc);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(160, 470, 93, 28));
        pushButton_2 = new QPushButton(sc);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(450, 470, 93, 28));

        retranslateUi(sc);

        QMetaObject::connectSlotsByName(sc);
    } // setupUi

    void retranslateUi(QWidget *sc)
    {
        sc->setWindowTitle(QApplication::translate("sc", "sc", nullptr));
        pushButton->setText(QApplication::translate("sc", "\351\207\207\347\224\250", nullptr));
        pushButton_2->setText(QApplication::translate("sc", "\351\207\215\346\226\260\347\224\237\346\210\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sc: public Ui_sc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI__7B56__7565__H
