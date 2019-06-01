#ifndef _MAIN_H//防止头文件重复包含，放在最前面
#define _MAIN_H
#include <iostream>

using namespace std;

/**************************************************
数据结构声明：
**************************************************/

//城市：
typedef enum Cities {
	None = 0,
	Beijing = 1, //北京
	Tianjin = 2, //天津
	Zhengzhou = 3, //郑州
	Xian = 4, //西安
	Nanjing = 5, //南京
	Shanghai = 6, //上海
	Wuhan = 7, //武汉
	Changsha = 8,  //长沙
	Chengdu = 9, //成都
	Guangzhou = 10 //广州
}City;

//出行方式：
typedef enum Types { bus = 0, train, plane }Type;

//边：
class Edge {
public:
	int target;//到达城市
	int departure;//出发时间
	int spendtime;//花费时间
	int money;//钱
	Edge() {//构造函数
		target = 0;
		departure = 0;
		spendtime = 0;
		money = 0;
	}
};
//存边
extern Edge edges[10][3][300];//出发城市，交通方式

class Message {//信息
public:
	int from;
	int target;
	int pass[10];//路过,以零结尾
	int calMode;//模式：1.最短时间	2.最少价格	3.限时最少费用
	int mode3Time;//一定价格内最短时间的价格
	Message() {//构造函数
		from = 0;
		target = 0;
		for (int i = 0; i < 10; i++) {

			pass[i] = 0;
		}
		calMode = 0;
		mode3Time = 0;
	}
};
extern Message message; //存传入信息

class Left {//路径
public:
	int here;
	int next;//下一个目的地,终点为0
	int inTime;//到达时间，起点为hour
	int outTime;//离开时间
	int outType;//离开出行方式
	Left() {//构造函数
		here = 0;
		next = 0;
		inTime = 0;
		outTime = 0;
		outType = 0;
	}
};
extern Left leftOutput[12];//路径输出
extern int moneyOutput;//花费输出


class Position {//位置
public:
	int from;
	int to;
	Position() {//构造函数
		from = 0;
		to = 0;
	}
};
extern Position position;//实时位置
/**************************************************
函数声明：
**************************************************/

extern void readLog(void);//读数据（火车等）（init模块）
extern int readUser(int u);//读用户数据（init模块）返回1表示读入用户上次的方案,超过30天的旅行可能无法判断
extern void input(int cityStart, int cityTarget, int cityPass[9], int modeS, int mode3Money);//输入(calculate模块)
extern int Cal(int hour);//计算(calculate模块)返回0说明给定情况不可用
void update1(void);//随时间更新旅客位置
extern void logging(int mode);//日志
/**************************************************
其他全局变量声明：
**************************************************/

extern int year;//时间
extern int month;
extern int date;
extern int hour;

extern int userEnd;

extern int user;//用户名
#endif//防止头文件重复包含，放在最后面
