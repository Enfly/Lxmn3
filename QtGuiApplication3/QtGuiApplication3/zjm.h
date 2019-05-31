#pragma once

#include <QWidget>
#include<QCloseEvent>
#include "ui_zjm.h"
#include "main.h"
#include"map.h"
#include "warning1.h"
#include "warning2.h"
#include "warning3.h"

class zjm : public QWidget
{
	Q_OBJECT

public:
	zjm(QWidget *parent = Q_NULLPTR);
	~zjm();
	int id1;
	Map m;
	warning1 w1;
	warning2 w2;
	warning3 w3;
	void timerEvent(QTimerEvent*);
	void closeEvent(QCloseEvent* event);
signals:
	void DayUp();
	void MonthUp();
	void YearUp();
	void chonghui();
private:
	Ui::zjm ui;
	void Plan(int a);
	void hide1();
	void hide2();
	void hide3();
private slots:
	void Dayup();
	void Monthup();
	void Yearup();
	void sccl();
	void select();
	void Tc();
	void CL();
	void QUIt();
};
