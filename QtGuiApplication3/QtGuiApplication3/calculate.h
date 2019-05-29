#ifndef _CALCULATE_H//防止头文件重复包含，放在最前面
#define _CALCULATE_H

//数据结构：
class Point {//城市
public:
	int tag;//为0则无该城市,为1则是路过城市，为2是起点，为3是终点
	int out[10];//以0结尾
	int from;
};

//全局变量：
int here;//目前所在的位置
int amount;//城市数量
int mint;//最短时间

//函数：
extern void input(int cityStart, int cityTarget, int cityPass[9], int modeS, int mode3Money);//读入
extern int Cal(int hour);
int initC(int hour, Left* left);//初始化，返回城市数
void calMinTime(int h, Left *l, int m, int lf);//最短时间
void calMinMoney(int h, Left *l, int m, int lf);//最少价格
void calComplex(int h, Left *l, int m, int lf);//限时最少费用

#endif
