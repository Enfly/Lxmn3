/********************************************************************************
** Form generated from reading UI file 'warning3.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WARNING3_H
#define UI_WARNING3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_warning3
{
public:
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QWidget *warning3)
    {
        if (warning3->objectName().isEmpty())
            warning3->setObjectName(QString::fromUtf8("warning3"));
        warning3->resize(495, 431);
        pushButton = new QPushButton(warning3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(200, 260, 93, 28));
        label = new QLabel(warning3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 180, 251, 61));

        retranslateUi(warning3);

        QMetaObject::connectSlotsByName(warning3);
    } // setupUi

    void retranslateUi(QWidget *warning3)
    {
        warning3->setWindowTitle(QApplication::translate("warning3", "warning3", nullptr));
        pushButton->setText(QApplication::translate("warning3", "\347\241\256\350\256\244", nullptr));
        label->setText(QApplication::translate("warning3", "\344\277\256\346\224\271\347\255\226\347\225\245\350\265\267\347\202\271\344\270\215\345\217\257\344\273\245\344\277\256\346\224\271\357\274\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class warning3: public Ui_warning3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WARNING3_H
