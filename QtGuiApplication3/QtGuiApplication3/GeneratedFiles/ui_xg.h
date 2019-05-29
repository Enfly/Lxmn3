/********************************************************************************
** Form generated from reading UI file 'xg.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XG_H
#define UI_XG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_xg
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *comboBox_3;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QGridLayout *gridLayout;
    QCheckBox *checkBox_9;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_8;
    QCheckBox *checkBox;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_10;
    QCheckBox *checkBox_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QWidget *xg)
    {
        if (xg->objectName().isEmpty())
            xg->setObjectName(QString::fromUtf8("xg"));
        xg->resize(785, 557);
        layoutWidget = new QWidget(xg);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(270, 80, 251, 121));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        textEdit = new QTextEdit(layoutWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        horizontalLayout->addWidget(textEdit);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        comboBox_3 = new QComboBox(layoutWidget);
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


        verticalLayout_2->addLayout(horizontalLayout_2);

        layoutWidget_2 = new QWidget(xg);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(270, 230, 189, 123));
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
        checkBox_9 = new QCheckBox(layoutWidget_2);
        checkBox_9->setObjectName(QString::fromUtf8("checkBox_9"));

        gridLayout->addWidget(checkBox_9, 2, 2, 1, 1);

        checkBox_7 = new QCheckBox(layoutWidget_2);
        checkBox_7->setObjectName(QString::fromUtf8("checkBox_7"));

        gridLayout->addWidget(checkBox_7, 2, 0, 1, 1);

        checkBox_8 = new QCheckBox(layoutWidget_2);
        checkBox_8->setObjectName(QString::fromUtf8("checkBox_8"));

        gridLayout->addWidget(checkBox_8, 2, 1, 1, 1);

        checkBox = new QCheckBox(layoutWidget_2);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        gridLayout->addWidget(checkBox, 0, 0, 1, 1);

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

        checkBox_10 = new QCheckBox(layoutWidget_2);
        checkBox_10->setObjectName(QString::fromUtf8("checkBox_10"));

        gridLayout->addWidget(checkBox_10, 3, 0, 1, 1);

        checkBox_2 = new QCheckBox(layoutWidget_2);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        gridLayout->addWidget(checkBox_2, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        pushButton_2 = new QPushButton(xg);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(400, 430, 93, 28));
        pushButton = new QPushButton(xg);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 440, 93, 28));

        retranslateUi(xg);

        QMetaObject::connectSlotsByName(xg);
    } // setupUi

    void retranslateUi(QWidget *xg)
    {
        xg->setWindowTitle(QApplication::translate("xg", "xg", nullptr));
        label->setText(QApplication::translate("xg", "\350\265\267\347\202\271", nullptr));
        label_2->setText(QApplication::translate("xg", "\347\273\210\347\202\271", nullptr));
        comboBox_3->setItemText(0, QApplication::translate("xg", "\345\214\227\344\272\254", nullptr));
        comboBox_3->setItemText(1, QApplication::translate("xg", "\345\244\251\346\264\245", nullptr));
        comboBox_3->setItemText(2, QApplication::translate("xg", "\351\203\221\345\267\236", nullptr));
        comboBox_3->setItemText(3, QApplication::translate("xg", "\350\245\277\345\256\211", nullptr));
        comboBox_3->setItemText(4, QApplication::translate("xg", "\345\215\227\344\272\254", nullptr));
        comboBox_3->setItemText(5, QApplication::translate("xg", "\344\270\212\346\265\267", nullptr));
        comboBox_3->setItemText(6, QApplication::translate("xg", "\346\255\246\346\261\211", nullptr));
        comboBox_3->setItemText(7, QApplication::translate("xg", "\351\225\277\346\262\231", nullptr));
        comboBox_3->setItemText(8, QApplication::translate("xg", "\346\210\220\351\203\275", nullptr));
        comboBox_3->setItemText(9, QApplication::translate("xg", "\345\271\277\345\267\236", nullptr));

        label_4->setText(QApplication::translate("xg", "\351\200\224\347\273\217\345\237\216\345\270\202", nullptr));
        checkBox_9->setText(QApplication::translate("xg", "\346\210\220\351\203\275", nullptr));
        checkBox_7->setText(QApplication::translate("xg", "\346\255\246\346\261\211", nullptr));
        checkBox_8->setText(QApplication::translate("xg", "\351\225\277\346\262\231", nullptr));
        checkBox->setText(QApplication::translate("xg", "\345\214\227\344\272\254", nullptr));
        checkBox_3->setText(QApplication::translate("xg", "\351\203\221\345\267\236", nullptr));
        checkBox_4->setText(QApplication::translate("xg", "\350\245\277\345\256\211", nullptr));
        checkBox_5->setText(QApplication::translate("xg", "\345\215\227\344\272\254", nullptr));
        checkBox_6->setText(QApplication::translate("xg", "\344\270\212\346\265\267", nullptr));
        checkBox_10->setText(QApplication::translate("xg", "\345\271\277\345\267\236", nullptr));
        checkBox_2->setText(QApplication::translate("xg", "\345\244\251\346\264\245", nullptr));
        pushButton_2->setText(QApplication::translate("xg", "\350\277\224\345\233\236", nullptr));
        pushButton->setText(QApplication::translate("xg", "\347\241\256\350\256\244\344\277\256\346\224\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class xg: public Ui_xg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XG_H
