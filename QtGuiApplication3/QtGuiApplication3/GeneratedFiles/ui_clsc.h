/********************************************************************************
** Form generated from reading UI file 'clsc.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLSC_H
#define UI_CLSC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_clsc
{
public:
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *comboBox_2;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QGridLayout *gridLayout;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_8;
    QCheckBox *checkBox_9;
    QCheckBox *checkBox_10;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *comboBox_3;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QPushButton *pushButton_2;

    void setupUi(QWidget *clsc)
    {
        if (clsc->objectName().isEmpty())
            clsc->setObjectName(QString::fromUtf8("clsc"));
        clsc->resize(678, 665);
        pushButton = new QPushButton(clsc);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(220, 500, 93, 28));
        layoutWidget = new QWidget(clsc);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(210, 440, 219, 23));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        comboBox_2 = new QComboBox(layoutWidget);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        horizontalLayout_3->addWidget(comboBox_2);

        layoutWidget_2 = new QWidget(clsc);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(210, 280, 189, 123));
        verticalLayout = new QVBoxLayout(layoutWidget_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        checkBox = new QCheckBox(layoutWidget_2);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        gridLayout->addWidget(checkBox, 0, 0, 1, 1);

        checkBox_2 = new QCheckBox(layoutWidget_2);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        gridLayout->addWidget(checkBox_2, 0, 1, 1, 1);

        checkBox_3 = new QCheckBox(layoutWidget_2);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        gridLayout->addWidget(checkBox_3, 0, 2, 1, 1);

        checkBox_4 = new QCheckBox(layoutWidget_2);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));

        gridLayout->addWidget(checkBox_4, 1, 0, 1, 1);

        checkBox_5 = new QCheckBox(layoutWidget_2);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));

        gridLayout->addWidget(checkBox_5, 1, 1, 1, 1);

        checkBox_6 = new QCheckBox(layoutWidget_2);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));

        gridLayout->addWidget(checkBox_6, 1, 2, 1, 1);

        checkBox_7 = new QCheckBox(layoutWidget_2);
        checkBox_7->setObjectName(QString::fromUtf8("checkBox_7"));

        gridLayout->addWidget(checkBox_7, 2, 0, 1, 1);

        checkBox_8 = new QCheckBox(layoutWidget_2);
        checkBox_8->setObjectName(QString::fromUtf8("checkBox_8"));

        gridLayout->addWidget(checkBox_8, 2, 1, 1, 1);

        checkBox_9 = new QCheckBox(layoutWidget_2);
        checkBox_9->setObjectName(QString::fromUtf8("checkBox_9"));

        gridLayout->addWidget(checkBox_9, 2, 2, 1, 1);

        checkBox_10 = new QCheckBox(layoutWidget_2);
        checkBox_10->setObjectName(QString::fromUtf8("checkBox_10"));

        gridLayout->addWidget(checkBox_10, 3, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        layoutWidget_3 = new QWidget(clsc);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(210, 230, 168, 23));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        comboBox_3 = new QComboBox(layoutWidget_3);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));

        horizontalLayout_2->addWidget(comboBox_3);

        layoutWidget_4 = new QWidget(clsc);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(210, 150, 168, 23));
        horizontalLayout = new QHBoxLayout(layoutWidget_4);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget_4);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(layoutWidget_4);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);

        pushButton_2 = new QPushButton(clsc);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(360, 500, 93, 28));

        retranslateUi(clsc);

        QMetaObject::connectSlotsByName(clsc);
    } // setupUi

    void retranslateUi(QWidget *clsc)
    {
        clsc->setWindowTitle(QApplication::translate("clsc", "clsc", nullptr));
        pushButton->setText(QApplication::translate("clsc", "\347\224\237\346\210\220", nullptr));
        label_3->setText(QApplication::translate("clsc", "\346\227\205\350\241\214\347\255\226\347\225\245", nullptr));
        comboBox_2->setItemText(0, QApplication::translate("clsc", "\346\234\200\345\260\221\350\264\271\347\224\250", nullptr));
        comboBox_2->setItemText(1, QApplication::translate("clsc", "\346\234\200\345\260\221\346\227\266\351\227\264", nullptr));
        comboBox_2->setItemText(2, QApplication::translate("clsc", "\350\247\204\345\256\232\346\227\266\351\227\264\346\234\200\345\260\221\350\264\271\347\224\250", nullptr));

        label_4->setText(QApplication::translate("clsc", "\351\200\224\347\273\217\345\237\216\345\270\202", nullptr));
        checkBox->setText(QApplication::translate("clsc", "\345\214\227\344\272\254", nullptr));
        checkBox_2->setText(QApplication::translate("clsc", "\345\244\251\346\264\245", nullptr));
        checkBox_3->setText(QApplication::translate("clsc", "\351\203\221\345\267\236", nullptr));
        checkBox_4->setText(QApplication::translate("clsc", "\350\245\277\345\256\211", nullptr));
        checkBox_5->setText(QApplication::translate("clsc", "\345\215\227\344\272\254", nullptr));
        checkBox_6->setText(QApplication::translate("clsc", "\344\270\212\346\265\267", nullptr));
        checkBox_7->setText(QApplication::translate("clsc", "\346\255\246\346\261\211", nullptr));
        checkBox_8->setText(QApplication::translate("clsc", "\351\225\277\346\262\231", nullptr));
        checkBox_9->setText(QApplication::translate("clsc", "\346\210\220\351\203\275", nullptr));
        checkBox_10->setText(QApplication::translate("clsc", "\345\271\277\345\267\236", nullptr));
        label_2->setText(QApplication::translate("clsc", "\347\273\210\347\202\271", nullptr));
        comboBox_3->setItemText(0, QApplication::translate("clsc", "\345\214\227\344\272\254", nullptr));
        comboBox_3->setItemText(1, QApplication::translate("clsc", "\345\244\251\346\264\245", nullptr));
        comboBox_3->setItemText(2, QApplication::translate("clsc", "\351\203\221\345\267\236", nullptr));
        comboBox_3->setItemText(3, QApplication::translate("clsc", "\350\245\277\345\256\211", nullptr));
        comboBox_3->setItemText(4, QApplication::translate("clsc", "\345\215\227\344\272\254", nullptr));
        comboBox_3->setItemText(5, QApplication::translate("clsc", "\344\270\212\346\265\267", nullptr));
        comboBox_3->setItemText(6, QApplication::translate("clsc", "\346\255\246\346\261\211", nullptr));
        comboBox_3->setItemText(7, QApplication::translate("clsc", "\351\225\277\346\262\231", nullptr));
        comboBox_3->setItemText(8, QApplication::translate("clsc", "\346\210\220\351\203\275", nullptr));
        comboBox_3->setItemText(9, QApplication::translate("clsc", "\345\271\277\345\267\236", nullptr));

        label->setText(QApplication::translate("clsc", "\350\265\267\347\202\271", nullptr));
        comboBox->setItemText(0, QApplication::translate("clsc", "\345\214\227\344\272\254", nullptr));
        comboBox->setItemText(1, QApplication::translate("clsc", "\345\244\251\346\264\245", nullptr));
        comboBox->setItemText(2, QApplication::translate("clsc", "\351\203\221\345\267\236", nullptr));
        comboBox->setItemText(3, QApplication::translate("clsc", "\350\245\277\345\256\211", nullptr));
        comboBox->setItemText(4, QApplication::translate("clsc", "\345\215\227\344\272\254", nullptr));
        comboBox->setItemText(5, QApplication::translate("clsc", "\344\270\212\346\265\267", nullptr));
        comboBox->setItemText(6, QApplication::translate("clsc", "\346\255\246\346\261\211", nullptr));
        comboBox->setItemText(7, QApplication::translate("clsc", "\351\225\277\346\262\231", nullptr));
        comboBox->setItemText(8, QApplication::translate("clsc", "\346\210\220\351\203\275", nullptr));
        comboBox->setItemText(9, QApplication::translate("clsc", "\345\271\277\345\267\236", nullptr));

        pushButton_2->setText(QApplication::translate("clsc", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class clsc: public Ui_clsc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLSC_H
