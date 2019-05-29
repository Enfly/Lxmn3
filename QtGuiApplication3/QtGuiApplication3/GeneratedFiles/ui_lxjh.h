/********************************************************************************
** Form generated from reading UI file 'lxjh.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LXJH_H
#define UI_LXJH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_lxjh
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *lxjh)
    {
        if (lxjh->objectName().isEmpty())
            lxjh->setObjectName(QString::fromUtf8("lxjh"));
        lxjh->resize(465, 469);
        centralWidget = new QWidget(lxjh);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(170, 110, 95, 191));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        comboBox = new QComboBox(layoutWidget);
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

        verticalLayout->addWidget(comboBox);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        lxjh->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(lxjh);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 465, 26));
        lxjh->setMenuBar(menuBar);
        mainToolBar = new QToolBar(lxjh);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        lxjh->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(lxjh);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        lxjh->setStatusBar(statusBar);

        retranslateUi(lxjh);

        QMetaObject::connectSlotsByName(lxjh);
    } // setupUi

    void retranslateUi(QMainWindow *lxjh)
    {
        lxjh->setWindowTitle(QApplication::translate("lxjh", "lxjh", nullptr));
        comboBox->setItemText(0, QApplication::translate("lxjh", "User1", nullptr));
        comboBox->setItemText(1, QApplication::translate("lxjh", "User2", nullptr));
        comboBox->setItemText(2, QApplication::translate("lxjh", "User3", nullptr));
        comboBox->setItemText(3, QApplication::translate("lxjh", "User4", nullptr));
        comboBox->setItemText(4, QApplication::translate("lxjh", "User5", nullptr));
        comboBox->setItemText(5, QApplication::translate("lxjh", "User6", nullptr));
        comboBox->setItemText(6, QApplication::translate("lxjh", "User7", nullptr));
        comboBox->setItemText(7, QApplication::translate("lxjh", "User8", nullptr));
        comboBox->setItemText(8, QApplication::translate("lxjh", "User9", nullptr));

        pushButton->setText(QApplication::translate("lxjh", "\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class lxjh: public Ui_lxjh {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LXJH_H
