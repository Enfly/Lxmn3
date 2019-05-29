/********************************************************************************
** Form generated from reading UI file 'qtguiapplication3.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTGUIAPPLICATION3_H
#define UI_QTGUIAPPLICATION3_H

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

class Ui_QtGuiApplication3Class
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtGuiApplication3Class)
    {
        if (QtGuiApplication3Class->objectName().isEmpty())
            QtGuiApplication3Class->setObjectName(QString::fromUtf8("QtGuiApplication3Class"));
        QtGuiApplication3Class->resize(674, 458);
        QtGuiApplication3Class->setIconSize(QSize(30, 30));
        centralWidget = new QWidget(QtGuiApplication3Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(210, 120, 231, 181));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        comboBox = new QComboBox(widget);
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
        comboBox->setIconSize(QSize(20, 20));

        verticalLayout->addWidget(comboBox);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        QtGuiApplication3Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtGuiApplication3Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 674, 26));
        QtGuiApplication3Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtGuiApplication3Class);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        QtGuiApplication3Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtGuiApplication3Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QtGuiApplication3Class->setStatusBar(statusBar);

        retranslateUi(QtGuiApplication3Class);

        QMetaObject::connectSlotsByName(QtGuiApplication3Class);
    } // setupUi

    void retranslateUi(QMainWindow *QtGuiApplication3Class)
    {
        QtGuiApplication3Class->setWindowTitle(QApplication::translate("QtGuiApplication3Class", "QtGuiApplication3", nullptr));
        comboBox->setItemText(0, QApplication::translate("QtGuiApplication3Class", "User1", nullptr));
        comboBox->setItemText(1, QApplication::translate("QtGuiApplication3Class", "User2", nullptr));
        comboBox->setItemText(2, QApplication::translate("QtGuiApplication3Class", "User3", nullptr));
        comboBox->setItemText(3, QApplication::translate("QtGuiApplication3Class", "User4", nullptr));
        comboBox->setItemText(4, QApplication::translate("QtGuiApplication3Class", "User5", nullptr));
        comboBox->setItemText(5, QApplication::translate("QtGuiApplication3Class", "User6", nullptr));
        comboBox->setItemText(6, QApplication::translate("QtGuiApplication3Class", "User7", nullptr));
        comboBox->setItemText(7, QApplication::translate("QtGuiApplication3Class", "User8", nullptr));
        comboBox->setItemText(8, QApplication::translate("QtGuiApplication3Class", "User9", nullptr));

        pushButton->setText(QApplication::translate("QtGuiApplication3Class", "\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtGuiApplication3Class: public Ui_QtGuiApplication3Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTGUIAPPLICATION3_H
