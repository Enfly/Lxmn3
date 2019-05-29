#pragma once

#include <QWidget>
#include "ui_warning2.h"

class warning2 : public QWidget
{
	Q_OBJECT

public:
	warning2(QWidget *parent = Q_NULLPTR);
	~warning2();

private:
	Ui::warning2 ui;
private slots:
	void hid();
};
