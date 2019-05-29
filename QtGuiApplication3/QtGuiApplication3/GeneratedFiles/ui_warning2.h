/********************************************************************************
** Form generated from reading UI file 'warning2.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WARNING2_H
#define UI_WARNING2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_warning2
{
public:
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QWidget *warning2)
    {
        if (warning2->objectName().isEmpty())
            warning2->setObjectName(QString::fromUtf8("warning2"));
        warning2->resize(493, 431);
        pushButton = new QPushButton(warning2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(180, 260, 93, 28));
        label = new QLabel(warning2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 180, 251, 61));

        retranslateUi(warning2);

        QMetaObject::connectSlotsByName(warning2);
    } // setupUi

    void retranslateUi(QWidget *warning2)
    {
        warning2->setWindowTitle(QApplication::translate("warning2", "warning2", nullptr));
        pushButton->setText(QApplication::translate("warning2", "\347\241\256\350\256\244", nullptr));
        label->setText(QApplication::translate("warning2", "\350\265\267\347\202\271\344\270\216\347\273\210\347\202\271\347\233\270\345\220\214\346\227\266\357\274\214\344\270\215\350\203\275\346\262\241\346\234\211\351\200\224\347\273\217\357\274\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class warning2: public Ui_warning2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WARNING2_H
