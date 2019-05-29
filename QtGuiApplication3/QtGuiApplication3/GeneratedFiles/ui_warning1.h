/********************************************************************************
** Form generated from reading UI file 'warning1.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WARNING1_H
#define UI_WARNING1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_warning1
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *warning1)
    {
        if (warning1->objectName().isEmpty())
            warning1->setObjectName(QString::fromUtf8("warning1"));
        warning1->resize(486, 333);
        label = new QLabel(warning1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 120, 231, 61));
        pushButton = new QPushButton(warning1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(170, 200, 93, 28));

        retranslateUi(warning1);

        QMetaObject::connectSlotsByName(warning1);
    } // setupUi

    void retranslateUi(QWidget *warning1)
    {
        warning1->setWindowTitle(QApplication::translate("warning1", "warning1", nullptr));
        label->setText(QApplication::translate("warning1", "\351\200\224\347\273\217\345\237\216\345\270\202\344\270\215\350\203\275\344\270\216\350\265\267\347\202\271\347\273\210\347\202\271\351\207\215\345\244\215\357\274\201", nullptr));
        pushButton->setText(QApplication::translate("warning1", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class warning1: public Ui_warning1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WARNING1_H
