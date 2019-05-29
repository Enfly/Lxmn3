#include "main.h"
#include <iostream>
#include <fstream>

void logging(int mode) {
	ofstream logl("log.txt", ios::app);
	ofstream fout;

	if (mode == 0) {//用户登录 log
		logl << year << ". " << month << ". " << date << "  " << hour << endl;
		logl << "用户" << user << "登录" << endl;
	}
	if (mode == -1) {//用户登出 log
		logl << year << ". " << month << ". " << date << "  " << hour << endl;
		logl << "用户" << user << "登出" << endl;


		if (user == 1)
			fout.open("user1.txt", ios::app);
		if (user == 2)
			fout.open("user2.txt", ios::app);
		if (user == 3)
			fout.open("user3.txt", ios::app);
		int i = 0;
		if (position.from != message.target) {
			fout << position.from<<" ";
			fout << position.to << " ";
			fout << year << " ";
			fout << month << " ";
			fout << date << endl;
		}
		while (leftOutput[i].here != 0) {
			fout << leftOutput[i].here << " ";
			fout << leftOutput[i].next << " ";
			fout << leftOutput[i].inTime << " ";
			fout << leftOutput[i].outTime << " ";
			fout << leftOutput[i].outType <<endl;
			i++;
		}
	}
	if (mode == 1) {//用户提出方案要求 log
		logl << year << ". " << month << ". " << date << "  " << hour << endl;
		logl << endl << "用户" << user << "提出方案要求：" << endl;
		logl << "\t起点：";
		switch (message.from) {
		case 1:logl << "北京"; break;
		case 2:logl << "天津"; break;
		case 3:logl << "郑州"; break;
		case 4:logl << "西安"; break;
		case 5:logl << "南京"; break;
		case 6:logl << "上海"; break;
		case 7:logl << "武汉"; break;
		case 8:logl << "长沙"; break;
		case 9:logl << "成都"; break;
		case 10:logl << "广州";
		}
		logl << "\t终点：";
		switch (message.target) {
		case 1:logl << "北京"; break;
		case 2:logl << "天津"; break;
		case 3:logl << "郑州"; break;
		case 4:logl << "西安"; break;
		case 5:logl << "南京"; break;
		case 6:logl << "上海"; break;
		case 7:logl << "武汉"; break;
		case 8:logl << "长沙"; break;
		case 9:logl << "成都"; break;
		case 10:logl << "广州";
		}
		logl << endl;
		logl << "\t途径城市为： ";
		int i = 0;
		while (message.pass[i] != 0) {
			switch (message.pass[i]) {
			case 1:logl << "北京"; break;
			case 2:logl << "天津"; break;
			case 3:logl << "郑州"; break;
			case 4:logl << "西安"; break;
			case 5:logl << "南京"; break;
			case 6:logl << "上海"; break;
			case 7:logl << "武汉"; break;
			case 8:logl << "长沙"; break;
			case 9:logl << "成都"; break;
			case 10:logl << "广州";
			}
			logl << " ";
			i++;
		}
		logl << endl;
		logl << "计算模式为： " << endl;
		switch (message.calMode) {
		case 1:logl << "最短时间" << endl; break;
		case 2:logl << "最少价格" << endl; break;
		case 3:
			logl << "限时最少费用" << endl;
			logl << "时间为" << message.mode3Time << "元" << endl;
		}
	}
	if (mode == 2) {//方案计算完成 log user
		logl << year << ". " << month << ". " << date << "  " << hour << endl;
		//需要改
		logl << "方案计算完成，为：" << endl;
		int i = 0;
		int a, b, da, db;
		a = b = 0;
		while (leftOutput[i].next != 0) {
			a = leftOutput[i].inTime % 24;
			da = (leftOutput[i].inTime / 24) + 1;
			logl << "第 " << da << "天的" << a << "时到 ";
			switch (leftOutput[i].here) {
			case 1:logl << "北京"; break;
			case 2:logl << "天津"; break;
			case 3:logl << "郑州"; break;
			case 4:logl << "西安"; break;
			case 5:logl << "南京"; break;
			case 6:logl << "上海"; break;
			case 7:logl << "武汉"; break;
			case 8:logl << "长沙"; break;
			case 9:logl << "成都"; break;
			case 10:logl << "广州";
			}
			logl << endl;

			b = leftOutput[i].outTime % 24;
			db = (leftOutput[i].outTime / 24) + 1;
			logl << "在第 " << db << " 天的 " << b << " 时乘坐 ";
			switch (leftOutput[i].outType) {
			case 0:logl << "汽车"; break;
			case 1:logl << "火车"; break;
			case 2:logl << "飞机";
			}
			logl << " 去往 ";
			switch (leftOutput[i].next) {
			case 1:logl << "北京"; break;
			case 2:logl << "天津"; break;
			case 3:logl << "郑州"; break;
			case 4:logl << "西安"; break;
			case 5:logl << "南京"; break;
			case 6:logl << "上海"; break;
			case 7:logl << "武汉"; break;
			case 8:logl << "长沙"; break;
			case 9:logl << "成都"; break;
			case 10:logl << "广州";
			}

			i++;
		}
		logl << endl;
		a = leftOutput[i].inTime % 24;
		da = (leftOutput[i].inTime / 24) + 1;
		logl << "第 " << da << "天的" << a << "时到达终点 ";
		switch (leftOutput[i].here) {
		case 1:logl << "北京"; break;
		case 2:logl << "天津"; break;
		case 3:logl << "郑州"; break;
		case 4:logl << "西安"; break;
		case 5:logl << "南京"; break;//这是汉语
		case 6:logl << "上海"; break;
		case 7:logl << "武汉"; break;
		case 8:logl << "长沙"; break;
		case 9:logl << "成都"; break;
		case 10:logl << "广州";
		}
		logl << endl;

		//user **************************************************************
		if (user == 1)
			fout.open("user1.txt", ios::trunc);
		if (user == 2)
			fout.open("user2.txt", ios::trunc);
		if (user == 3)
			fout.open("user3.txt", ios::trunc);
			fout << 1 << " ";
			fout << moneyOutput << endl;
			fout << position.from << " ";//需要按照user2.txt的格式修改
			fout << position.to << " ";
			fout << year << " ";
			fout << month << " ";
			fout << date<<endl;
		i = 0;
	}
	if (mode == 3) {//用户移动 log
		int i, flage;
		if(userEnd==1)
		{
				if (user == 1)
					fout.open("user1.txt", ios::trunc);
				if (user == 2)
					fout.open("user2.txt", ios::trunc);
				if (user == 3)
					fout.open("user3.txt", ios::trunc);
				fout << 0<<endl;
			logl << year << ". " << month << ". " << date << "  " << hour << endl;
			logl << "用户" << user << "到达了";
			switch (position.from) {
			case 1:logl << "北京"; break;
			case 2:logl << "天津"; break;
			case 3:logl << "郑州"; break;
			case 4:logl << "西安"; break;
			case 5:logl << "南京"; break;
			case 6:logl << "上海"; break;
			case 7:logl << "武汉"; break;
			case 8:logl << "长沙"; break;
			case 9:logl << "成都"; break;
			case 10:logl << "广州";
			}
			logl << endl;
		}
		else
		{
			logl << "用户" << user << "正在从" << position.from << "前往" << position.to << endl;
		}

		//需要写

		//（位置然后开始动，还有交通方式）
	}

	logl.close();
	fout.close();
}