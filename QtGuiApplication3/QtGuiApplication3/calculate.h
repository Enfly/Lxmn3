#ifndef _CALCULATE_H//��ֹͷ�ļ��ظ�������������ǰ��
#define _CALCULATE_H

//���ݽṹ��
class Point {//����
public:
	int tag;//Ϊ0���޸ó���,Ϊ1����·�����У�Ϊ2����㣬Ϊ3���յ�
	int out[10];//��0��β
	int from;
};

//ȫ�ֱ�����
int here;//Ŀǰ���ڵ�λ��
int amount;//��������
int mint;//���ʱ��

//������
extern void input(int cityStart, int cityTarget, int cityPass[9], int modeS, int mode3Money);//����
extern int Cal(int hour);
int initC(int hour, Left* left);//��ʼ�������س�����
void calMinTime(int h, Left *l, int m, int lf);//���ʱ��
void calMinMoney(int h, Left *l, int m, int lf);//���ټ۸�
void calComplex(int h, Left *l, int m, int lf);//��ʱ���ٷ���

#endif
