/********************************************************************************
** Form generated from reading UI file 'map.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAP_H
#define UI_MAP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_map
{
public:
    QLabel *label_2;
    QLineEdit *lineEdit;

    void setupUi(QWidget *map)
    {
        if (map->objectName().isEmpty())
            map->setObjectName(QString::fromUtf8("map"));
        map->resize(1111, 809);
        map->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/D:/Downloads/QQdownload/1.png);"));
        label_2 = new QLabel(map);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(980, 150, 31, 20));
        label_2->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/D:/Downloads/QQdownload/oz.png);"));
        lineEdit = new QLineEdit(map);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(1030, 150, 81, 21));
        lineEdit->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/D:/Downloads/QQdownload/oz.png);"));

        retranslateUi(map);

        QMetaObject::connectSlotsByName(map);
    } // setupUi

    void retranslateUi(QWidget *map)
    {
        map->setWindowTitle(QApplication::translate("map", "map", nullptr));
        label_2->setText(QApplication::translate("map", "\350\264\271\347\224\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class map: public Ui_map {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAP_H
