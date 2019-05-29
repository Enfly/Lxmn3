#pragma once

#include <QWidget>
#include "ui_warning1.h"

class warning1 : public QWidget
{
	Q_OBJECT

public:
	warning1(QWidget *parent = Q_NULLPTR);
	~warning1();

private:
	Ui::warning1 ui;
private slots:
	void hid();

};
