#pragma once

#include <QWidget>
#include "ui_qtguiclass2.h"

class QtGuiClass2 : public QWidget
{
	Q_OBJECT

public:
	QtGuiClass2(QWidget *parent = Q_NULLPTR);
	~QtGuiClass2();

private:
	Ui::QtGuiClass2 ui;
};
