/********************************************************************************
** Form generated from reading UI file 'qtguiclass2.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTGUICLASS2_H
#define UI_QTGUICLASS2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtGuiClass2
{
public:

    void setupUi(QWidget *QtGuiClass2)
    {
        if (QtGuiClass2->objectName().isEmpty())
            QtGuiClass2->setObjectName(QString::fromUtf8("QtGuiClass2"));
        QtGuiClass2->resize(400, 300);

        retranslateUi(QtGuiClass2);

        QMetaObject::connectSlotsByName(QtGuiClass2);
    } // setupUi

    void retranslateUi(QWidget *QtGuiClass2)
    {
        QtGuiClass2->setWindowTitle(QApplication::translate("QtGuiClass2", "QtGuiClass2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtGuiClass2: public Ui_QtGuiClass2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTGUICLASS2_H
