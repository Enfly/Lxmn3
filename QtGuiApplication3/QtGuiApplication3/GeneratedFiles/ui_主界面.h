/********************************************************************************
** Form generated from reading UI file '主界面.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI__4E3B__754C__9762__H
#define UI__4E3B__754C__9762__H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtGuiClass
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QDateTimeEdit *dateTimeEdit;

    void setupUi(QWidget *QtGuiClass)
    {
        if (QtGuiClass->objectName().isEmpty())
            QtGuiClass->setObjectName(QString::fromUtf8("QtGuiClass"));
        QtGuiClass->resize(772, 506);
        pushButton = new QPushButton(QtGuiClass);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(370, 250, 93, 91));
        pushButton_2 = new QPushButton(QtGuiClass);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(540, 250, 93, 91));
        dateTimeEdit = new QDateTimeEdit(QtGuiClass);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(530, 40, 194, 22));

        retranslateUi(QtGuiClass);

        QMetaObject::connectSlotsByName(QtGuiClass);
    } // setupUi

    void retranslateUi(QWidget *QtGuiClass)
    {
        QtGuiClass->setWindowTitle(QApplication::translate("QtGuiClass", "QtGuiClass", nullptr));
        pushButton->setText(QApplication::translate("QtGuiClass", "\346\237\245\350\257\242\347\212\266\346\200\201", nullptr));
        pushButton_2->setText(QApplication::translate("QtGuiClass", "\347\224\237\346\210\220\347\255\226\347\225\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtGuiClass: public Ui_QtGuiClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI__4E3B__754C__9762__H
