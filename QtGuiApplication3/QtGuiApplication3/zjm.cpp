#include "zjm.h"
#include "main.h"
#include <iostream>
#include<QTimer>
int hour = 0;
int date = 1;
int month = 1;
int year = 2010;

//用户名
int user;
//存边
Edge edges[10][3][300];//出发城市，交通方式
//结束标志为target = None

//模式：1.最短时间	2.最少价格	3.一定价格内最短时间
int calMode = 0;

//存传入信息
Message message;
Position position;
//当前位置
//Position position;//实时位置

Left leftOutput[11];//路径输出
//路径
int moneyOutput = 0;//花费输出
int i;
int cityPass[10];
int userEnd = 0;


zjm::zjm(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	readLog();
	ui.lineEdit_4->setText(QString::number(hour));
	ui.lineEdit_3->setText(QString::number(date));
	ui.lineEdit_2->setText(QString::number(month));
	ui.lineEdit->setText(QString::number(year));
	connect(this, SIGNAL(DayUp()), this, SLOT(Dayup()));
	connect(this, SIGNAL(MonthUp()), this, SLOT(Monthup()));
	connect(this, SIGNAL(YearUp()), this, SLOT(Yearup()));
	id1 = startTimer(10000);
	hide1();
	connect(ui.pushButton_7, SIGNAL(released()), this, SLOT(select()));
	connect(ui.pushButton, SIGNAL(released()), this, SLOT(Tc()));
	connect(ui.pushButton_2, SIGNAL(released()), this, SLOT(CL()));
	connect(ui.pushButton_5, SIGNAL(released()), this, SLOT(QUIt()));
	ui.spinBox->setRange(1, 1000);
	connect(ui.pushButton_6, SIGNAL(released()), this, SLOT(sccl()));
}

zjm::~zjm()
{
}
void zjm::timerEvent(QTimerEvent*)
{
	if (hour == 23)
	{
		hour = -1;
		emit DayUp();
	}
	ui.lineEdit_4->setText(QString::number(++hour));
	update1();
	emit chonghui();
	m.hide();
	m.show();
}
void zjm::Dayup()
{
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
	{
		if (date == 31)
		{
			date = 0;
			emit MonthUp();
		}
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		if (date == 30)
		{
			date = 0;
			emit MonthUp();
		}
	}
	else if (month == 2 && year % 4 != 0)
	{
		if (date == 28)
		{
			date = 0;
			emit MonthUp();
		}
	}
	else if (month == 2 && year % 4 == 0)
	{
		if (date == 29)
		{
			date = 0;
			emit MonthUp();
		}
	}
	ui.lineEdit_3->setText(QString::number(++date));
}
void zjm::Monthup()
{
	if (month == 12)
	{
		month = 0;
		emit YearUp();
	}
	ui.lineEdit_2->setText(QString::number(++month));
}
void zjm::Yearup()
{
	ui.lineEdit->setText(QString::number(++year));
}
void zjm::Plan(int a)
{
	cityPass[i] = a;
	i++;
}
void zjm::sccl()
{
	i = 0;
	int flage=1;
	int cityStart = ui.comboBox->currentIndex()+1;
	int cityTarget = ui.comboBox_3->currentIndex()+1;
	if (ui.checkBox->isChecked())
	{
		Plan(1);
	}
	if (ui.checkBox_2->isChecked())
	{
		Plan(2);
	}
	if (ui.checkBox_3->isChecked())
	{
		Plan(3);
	}
	if (ui.checkBox_4->isChecked())
	{
		Plan(4);
	}
	if (ui.checkBox_5->isChecked())
	{
		Plan(5);
	}
	if (ui.checkBox_6->isChecked())
	{
		Plan(6);
	}
	if (ui.checkBox_7->isChecked())
	{
		Plan(7);
	}
	if (ui.checkBox_8->isChecked())
	{
		Plan(8);
	}
	if (ui.checkBox_9->isChecked())
	{
		Plan(9);
	}
	if (ui.checkBox_10->isChecked())
	{
		Plan(10);
	}
	int modeS= ui.comboBox_2->currentIndex()+1;
	int mode3Time = ui.spinBox->value();
	if (readUser(user) == 1)
	{
		if (position.to != cityPass[0])
		{
			flage = 3;
		}
	}
	if (cityStart == cityTarget)
	for (i = 0; i < 9&&flage==1; i++)
	{
		if (cityPass[i] == cityStart || cityPass[i] == cityTarget)
		{
			flage = 0;
		}
	}
	if (flage == 0)
	{
		w1.show();
	}
	else if(flage==1)
	{
		input(cityStart, cityTarget, cityPass, modeS, mode3Time);
		Cal(hour);
		m.show();
		hide2();
		id1 = startTimer(3000);
		emit chonghui();
		logging(1);
	}
	else if (flage == 2)
	{
		w2.show();
	}
	else if (flage == 3)
	{
		w3.show();
	}
}
void zjm::hide1()
{
	ui.pushButton->hide();
	ui.pushButton_2->hide();
	ui.pushButton_5->hide();
	ui.pushButton_6->hide();
	ui.pushButton_7->show();
	ui.checkBox->hide();
	ui.checkBox_10->hide();
	ui.checkBox_2->hide();
	ui.checkBox_3->hide();
	ui.checkBox_4->hide();
	ui.checkBox_5->hide();
	ui.checkBox_6->hide();
	ui.checkBox_8->hide();
	ui.checkBox_9->hide();
	ui.checkBox_7->hide();
	ui.comboBox->hide();
	ui.comboBox_2->hide();
	ui.comboBox_3->hide();
	ui.comboBox_4->show();
	ui.spinBox->hide();
	ui.label_5->hide();
	ui.label_6->hide();
	ui.label_7->hide();
	ui.label_8->hide();
	ui.label_9->hide();
}
void zjm::select()
{
	user = ui.comboBox_4->currentIndex()+1;
	if (readUser(user) != -1)
	{
		m.show();
	}
	hide2();
	logging(0);
}
void zjm::hide2()
{
	ui.pushButton->show();
	ui.pushButton_2->show();
	ui.pushButton_5->hide();
	ui.pushButton_6->hide();
	ui.pushButton_7->hide();
	ui.checkBox->hide();
	ui.checkBox_10->hide();
	ui.checkBox_2->hide();
	ui.checkBox_3->hide();
	ui.checkBox_4->hide();
	ui.checkBox_5->hide();
	ui.checkBox_6->hide();
	ui.checkBox_8->hide();
	ui.checkBox_9->hide();
	ui.checkBox_7->hide();
	ui.comboBox->hide();
	ui.comboBox_2->hide();
	ui.comboBox_3->hide();
	ui.comboBox_4->hide();
	ui.spinBox->hide();
	ui.label_5->hide();
	ui.label_6->hide();
	ui.label_7->hide();
	ui.label_8->hide();
	ui.label_9->hide();
}
void zjm::Tc()
{
	hide1();
	logging(-1);
}
void zjm::hide3()
{
	ui.pushButton->hide();
	ui.pushButton_2->hide();
	ui.pushButton_5->show();
	ui.pushButton_6->show();
	ui.pushButton_7->hide();
	ui.checkBox->show();
	ui.checkBox_10->show();
	ui.checkBox_2->show();
	ui.checkBox_3->show();
	ui.checkBox_4->show();
	ui.checkBox_5->show();
	ui.checkBox_6->show();
	ui.checkBox_8->show();
	ui.checkBox_9->show();
	ui.checkBox_7->show();
	ui.comboBox->show();
	ui.comboBox_2->show();
	ui.comboBox_3->show();
	ui.comboBox_4->hide();
	ui.spinBox->show();
	ui.label_5->show();
	ui.label_6->show();
	ui.label_7->show();
	ui.label_8->show();
	ui.label_9->show();
}
void zjm::CL()
{
	killTimer(id1);
	hide3();
}
void zjm::QUIt()
{
	hide2();
	id1 = startTimer(10000);
}