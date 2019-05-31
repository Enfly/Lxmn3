/********************************************************************************
** Form generated from reading UI file 'zjm.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZJM_H
#define UI_ZJM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_zjm
{
public:
    QLineEdit *lineEdit_3;
    QLabel *label_3;
    QLabel *label_2;
    QWidget *layoutWidget_6;
    QVBoxLayout *verticalLayout;
    QLabel *label_9;
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
    QLineEdit *lineEdit;
    QPushButton *pushButton_4;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit_4;
    QLabel *label;
    QPushButton *pushButton_6;
    QPushButton *pushButton_2;
    QComboBox *comboBox_4;
    QLabel *label_4;
    QPushButton *pushButton_5;
    QSpinBox *spinBox;
    QPushButton *pushButton;
    QLabel *label_5;
    QComboBox *comboBox;
    QLabel *label_8;
    QComboBox *comboBox_3;
    QComboBox *comboBox_2;
    QLabel *label_7;
    QLabel *label_10;
    QPushButton *pushButton_7;
    QLabel *label_6;
    QFrame *frame;
    QFrame *frame_2;

    void setupUi(QWidget *zjm)
    {
        if (zjm->objectName().isEmpty())
            zjm->setObjectName(QString::fromUtf8("zjm"));
        zjm->resize(1120, 630);
        zjm->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_3 = new QLineEdit(zjm);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(720, 40, 40, 40));
        lineEdit_3->setStyleSheet(QString::fromUtf8("border-style:outset;"));
        label_3 = new QLabel(zjm);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(780, 40, 40, 40));
        label_2 = new QLabel(zjm);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(670, 40, 40, 40));
        layoutWidget_6 = new QWidget(zjm);
        layoutWidget_6->setObjectName(QString::fromUtf8("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(680, 290, 189, 123));
        verticalLayout = new QVBoxLayout(layoutWidget_6);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget_6);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout->addWidget(label_9);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        checkBox = new QCheckBox(layoutWidget_6);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"background-color: rgb(255,165,101);"));

        gridLayout->addWidget(checkBox, 0, 0, 1, 1);

        checkBox_2 = new QCheckBox(layoutWidget_6);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"background-color: rgb(255,165,101);"));

        gridLayout->addWidget(checkBox_2, 0, 1, 1, 1);

        checkBox_3 = new QCheckBox(layoutWidget_6);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"background-color: rgb(255,165,101);"));

        gridLayout->addWidget(checkBox_3, 0, 2, 1, 1);

        checkBox_4 = new QCheckBox(layoutWidget_6);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        checkBox_4->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"background-color: rgb(255,165,101);"));

        gridLayout->addWidget(checkBox_4, 1, 0, 1, 1);

        checkBox_5 = new QCheckBox(layoutWidget_6);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));
        checkBox_5->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"background-color: rgb(255,165,101);"));

        gridLayout->addWidget(checkBox_5, 1, 1, 1, 1);

        checkBox_6 = new QCheckBox(layoutWidget_6);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));
        checkBox_6->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"background-color: rgb(255,165,101);"));

        gridLayout->addWidget(checkBox_6, 1, 2, 1, 1);

        checkBox_7 = new QCheckBox(layoutWidget_6);
        checkBox_7->setObjectName(QString::fromUtf8("checkBox_7"));
        checkBox_7->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"background-color: rgb(255,165,101);"));

        gridLayout->addWidget(checkBox_7, 2, 0, 1, 1);

        checkBox_8 = new QCheckBox(layoutWidget_6);
        checkBox_8->setObjectName(QString::fromUtf8("checkBox_8"));
        checkBox_8->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"background-color: rgb(255,165,101);"));

        gridLayout->addWidget(checkBox_8, 2, 1, 1, 1);

        checkBox_9 = new QCheckBox(layoutWidget_6);
        checkBox_9->setObjectName(QString::fromUtf8("checkBox_9"));
        checkBox_9->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"background-color: rgb(255,165,101);"));

        gridLayout->addWidget(checkBox_9, 2, 2, 1, 1);

        checkBox_10 = new QCheckBox(layoutWidget_6);
        checkBox_10->setObjectName(QString::fromUtf8("checkBox_10"));
        checkBox_10->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"background-color: rgb(255,165,101);"));

        gridLayout->addWidget(checkBox_10, 3, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        lineEdit = new QLineEdit(zjm);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(520, 40, 40, 40));
        lineEdit->setStyleSheet(QString::fromUtf8("border-style:outset;"));
        pushButton_4 = new QPushButton(zjm);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(1290, 1060, 93, 28));
        lineEdit_2 = new QLineEdit(zjm);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(620, 40, 40, 40));
        lineEdit_2->setStyleSheet(QString::fromUtf8("border-style:outset;"));
        pushButton_3 = new QPushButton(zjm);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(1470, 1060, 93, 28));
        lineEdit_4 = new QLineEdit(zjm);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(830, 40, 40, 40));
        lineEdit_4->setStyleSheet(QString::fromUtf8("border-style:outset;"));
        label = new QLabel(zjm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(570, 40, 40, 40));
        pushButton_6 = new QPushButton(zjm);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(660, 480, 93, 28));
        pushButton_6->setStyleSheet(QString::fromUtf8("border-style:outset;\n"
"border-radius:10px;\n"
"background: rgb(255,179,167);"));
        pushButton_2 = new QPushButton(zjm);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(750, 140, 100, 60));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-style:outset;\n"
"border-radius:10px;\n"
"background: rgb(255,179,167);"));
        comboBox_4 = new QComboBox(zjm);
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));
        comboBox_4->setGeometry(QRect(500, 250, 171, 71));
        comboBox_4->setStyleSheet(QString::fromUtf8("font: 22pt \"Adobe Arabic\";\n"
"background-color: rgb(255,185,90);\n"
"border-radius:10px;"));
        label_4 = new QLabel(zjm);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(880, 40, 40, 40));
        pushButton_5 = new QPushButton(zjm);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(800, 480, 93, 28));
        pushButton_5->setStyleSheet(QString::fromUtf8("border-style:outset;\n"
"border-radius:10px;\n"
"background: rgb(255,179,167);"));
        spinBox = new QSpinBox(zjm);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(990, 480, 46, 24));
        spinBox->setStyleSheet(QString::fromUtf8("background-color: rgb(46,169,223);"));
        spinBox->setValue(1);
        pushButton = new QPushButton(zjm);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(560, 140, 100, 60));
        pushButton->setStyleSheet(QString::fromUtf8("border-style:outset;\n"
"background: rgb(255,179,167);\n"
"border-radius:10px;"));
        label_5 = new QLabel(zjm);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(920, 480, 66, 24));
        comboBox = new QComboBox(zjm);
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
        comboBox->setGeometry(QRect(768, 208, 100, 30));
        comboBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255,185,90);\n"
"font: 8pt \"Adobe Arabic\";\n"
"border-radius:10px;"));
        label_8 = new QLabel(zjm);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(690, 210, 30, 16));
        comboBox_3 = new QComboBox(zjm);
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
        comboBox_3->setGeometry(QRect(768, 253, 100, 30));
        comboBox_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255,185,90);\n"
"font: 8pt \"Adobe Arabic\";\n"
"border-radius:10px;"));
        comboBox_2 = new QComboBox(zjm);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(783, 433, 100, 30));
        comboBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255,185,90);\n"
"font: 8pt \"Adobe Arabic\";\n"
"border-radius:10px;"));
        label_7 = new QLabel(zjm);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(690, 260, 30, 16));
        label_10 = new QLabel(zjm);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(1040, 480, 51, 16));
        pushButton_7 = new QPushButton(zjm);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(520, 420, 121, 81));
        pushButton_7->setStyleSheet(QString::fromUtf8("font: 16pt \"Adobe Arabic\";\n"
"border-style:outset;\n"
"border-radius:10px;\n"
"background: rgb(255,179,167);"));
        label_6 = new QLabel(zjm);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(690, 440, 60, 16));
        frame = new QFrame(zjm);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(1120, 630, 120, 80));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(zjm);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(0, 0, 1120, 630));
        frame_2->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/D:/Downloads/QQdownload/oz.png);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        frame_2->raise();
        comboBox->raise();
        label_8->raise();
        comboBox_3->raise();
        comboBox_2->raise();
        lineEdit_3->raise();
        label_3->raise();
        label_2->raise();
        layoutWidget_6->raise();
        lineEdit->raise();
        pushButton_4->raise();
        lineEdit_2->raise();
        pushButton_3->raise();
        lineEdit_4->raise();
        label->raise();
        pushButton_6->raise();
        pushButton_2->raise();
        comboBox_4->raise();
        label_4->raise();
        pushButton_5->raise();
        spinBox->raise();
        pushButton->raise();
        label_5->raise();
        label_7->raise();
        label_10->raise();
        pushButton_7->raise();
        label_6->raise();
        frame->raise();

        retranslateUi(zjm);

        QMetaObject::connectSlotsByName(zjm);
    } // setupUi

    void retranslateUi(QWidget *zjm)
    {
        zjm->setWindowTitle(QApplication::translate("zjm", "zjm", nullptr));
        lineEdit_3->setText(QString());
        label_3->setText(QApplication::translate("zjm", "\346\227\245", nullptr));
        label_2->setText(QApplication::translate("zjm", "\346\234\210", nullptr));
        label_9->setText(QApplication::translate("zjm", "\351\200\224\347\273\217\345\237\216\345\270\202", nullptr));
        checkBox->setText(QApplication::translate("zjm", "\345\214\227\344\272\254", nullptr));
        checkBox_2->setText(QApplication::translate("zjm", "\345\244\251\346\264\245", nullptr));
        checkBox_3->setText(QApplication::translate("zjm", "\351\203\221\345\267\236", nullptr));
        checkBox_4->setText(QApplication::translate("zjm", "\350\245\277\345\256\211", nullptr));
        checkBox_5->setText(QApplication::translate("zjm", "\345\215\227\344\272\254", nullptr));
        checkBox_6->setText(QApplication::translate("zjm", "\344\270\212\346\265\267", nullptr));
        checkBox_7->setText(QApplication::translate("zjm", "\346\255\246\346\261\211", nullptr));
        checkBox_8->setText(QApplication::translate("zjm", "\351\225\277\346\262\231", nullptr));
        checkBox_9->setText(QApplication::translate("zjm", "\346\210\220\351\203\275", nullptr));
        checkBox_10->setText(QApplication::translate("zjm", "\345\271\277\345\267\236", nullptr));
        lineEdit->setText(QString());
        pushButton_4->setText(QApplication::translate("zjm", "\351\207\207\347\224\250", nullptr));
        lineEdit_2->setText(QString());
        pushButton_3->setText(QApplication::translate("zjm", "\351\207\215\346\226\260\347\224\237\346\210\220", nullptr));
        lineEdit_4->setText(QString());
        label->setText(QApplication::translate("zjm", "\345\271\264", nullptr));
        pushButton_6->setText(QApplication::translate("zjm", "\347\224\237\346\210\220", nullptr));
        pushButton_2->setText(QApplication::translate("zjm", "\347\255\226\347\225\245", nullptr));
        comboBox_4->setItemText(0, QApplication::translate("zjm", "User1", nullptr));
        comboBox_4->setItemText(1, QApplication::translate("zjm", "User2", nullptr));
        comboBox_4->setItemText(2, QApplication::translate("zjm", "User3", nullptr));

        label_4->setText(QApplication::translate("zjm", "\346\227\266", nullptr));
        pushButton_5->setText(QApplication::translate("zjm", "\345\217\226\346\266\210", nullptr));
        pushButton->setText(QApplication::translate("zjm", "\346\233\264\346\215\242\350\264\246\345\217\267", nullptr));
        label_5->setText(QApplication::translate("zjm", "\346\227\266\351\227\264\351\231\220\345\256\232", nullptr));
        comboBox->setItemText(0, QApplication::translate("zjm", "\345\214\227\344\272\254", nullptr));
        comboBox->setItemText(1, QApplication::translate("zjm", "\345\244\251\346\264\245", nullptr));
        comboBox->setItemText(2, QApplication::translate("zjm", "\351\203\221\345\267\236", nullptr));
        comboBox->setItemText(3, QApplication::translate("zjm", "\350\245\277\345\256\211", nullptr));
        comboBox->setItemText(4, QApplication::translate("zjm", "\345\215\227\344\272\254", nullptr));
        comboBox->setItemText(5, QApplication::translate("zjm", "\344\270\212\346\265\267", nullptr));
        comboBox->setItemText(6, QApplication::translate("zjm", "\346\255\246\346\261\211", nullptr));
        comboBox->setItemText(7, QApplication::translate("zjm", "\351\225\277\346\262\231", nullptr));
        comboBox->setItemText(8, QApplication::translate("zjm", "\346\210\220\351\203\275", nullptr));
        comboBox->setItemText(9, QApplication::translate("zjm", "\345\271\277\345\267\236", nullptr));

        label_8->setText(QApplication::translate("zjm", "\350\265\267\347\202\271", nullptr));
        comboBox_3->setItemText(0, QApplication::translate("zjm", "\345\214\227\344\272\254", nullptr));
        comboBox_3->setItemText(1, QApplication::translate("zjm", "\345\244\251\346\264\245", nullptr));
        comboBox_3->setItemText(2, QApplication::translate("zjm", "\351\203\221\345\267\236", nullptr));
        comboBox_3->setItemText(3, QApplication::translate("zjm", "\350\245\277\345\256\211", nullptr));
        comboBox_3->setItemText(4, QApplication::translate("zjm", "\345\215\227\344\272\254", nullptr));
        comboBox_3->setItemText(5, QApplication::translate("zjm", "\344\270\212\346\265\267", nullptr));
        comboBox_3->setItemText(6, QApplication::translate("zjm", "\346\255\246\346\261\211", nullptr));
        comboBox_3->setItemText(7, QApplication::translate("zjm", "\351\225\277\346\262\231", nullptr));
        comboBox_3->setItemText(8, QApplication::translate("zjm", "\346\210\220\351\203\275", nullptr));
        comboBox_3->setItemText(9, QApplication::translate("zjm", "\345\271\277\345\267\236", nullptr));

        comboBox_2->setItemText(0, QApplication::translate("zjm", "\346\234\200\345\260\221\346\227\266\351\227\264", nullptr));
        comboBox_2->setItemText(1, QApplication::translate("zjm", "\346\234\200\345\260\221\350\264\271\347\224\250", nullptr));
        comboBox_2->setItemText(2, QApplication::translate("zjm", "\350\247\204\345\256\232\346\227\266\351\227\264\346\234\200\345\260\221\350\264\271\347\224\250", nullptr));

        label_7->setText(QApplication::translate("zjm", "\347\273\210\347\202\271", nullptr));
        label_10->setText(QApplication::translate("zjm", "\345\260\217\346\227\266", nullptr));
        pushButton_7->setText(QApplication::translate("zjm", "\347\241\256\345\256\232\351\200\211\346\213\251", nullptr));
        label_6->setText(QApplication::translate("zjm", "\346\227\205\350\241\214\347\255\226\347\225\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class zjm: public Ui_zjm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZJM_H
