#include <iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
const double T_S=1/3.0, G_S=1/2.0, D_S=1/1.0;//ȫ��,�ֱ�׼ȷ��
void startDuel (int&, double );//�����Ƿ����
void PassFinal(int&, int&, int&,int,int,int);//�������ջ�������
void g_t(int&);//G��T(T-D,T���к�)
void t_g(int&);//T-G
void g_d(int&);//g-d
void t_d(int&);//t-d
void d_g(int&);//d-g
int main()
{
	int a, fw;//a�жϻ���, fw����Ӯ
	int ft=0, fg=0, fd=0;//�ֱ�Ӯ
	srand(time(0));//��ʱ��������
	//�����ʼ
	//��һ�����
	for(int i=1;i<=1000; i++)
		{
	startDuel (a, T_S);//T��D
	if(a==1)//T����
	{
		g_t(fw);//��G-T
	}
	else
	{
		g_d(fw);//g-d
	}
	switch(fw)//��ʼ�ж�����Ӯ
	{
		
	case 1:
		ft++;
		break;
	case 2:
		fg++;
		break;
	case 3:
		fd++;
		break;
	default:
		cout<<"error";
	}
		}

	cout<<"Tom:"<<ft/10<<"% "<<"Gordon:"<<fg/10<<"% "<<"Darren:"<<fd/10<<"% ";
	return 0;
}
void startDuel (int& a, double b)
{
	
	int x = rand()%100;
	double y = x/99.0;
	if(y<=b)
	{
		a=1;
	}
	else
	{
		a=0;
	}
}

void g_t(int& fw)//G��T(T-D,T���к�)
{
int a;
	//��һ��Ӯ��ڶ������
	//T-G���,��N�����
	startDuel (a, G_S);//G��T
	if(a==1)//g����,G����Ӯ
	{
		fw=2;
	}
	else
		{
		t_g(fw);
		}
}
void t_g(int& fw)//t-g
{
int a;
	startDuel (a, T_S);//t��g
	if(a==1)//g����,G����Ӯ
	{
		fw=1;
	}
	else
		{
		g_t(fw);
		}
}
void g_d(int& fw)//g-d
{
int a;
	startDuel (a, G_S);//t��g
		if(a==1)//g����,����t-g
	{
		t_g(fw);
	}
	else
		{
		d_g(fw);
		}
}
void d_g(int& fw)//d-g
{
int a;
	//g����,t-d
	startDuel (a, T_S);//t��d
	if(a==1)//t����,t����Ӯ,
	{
		fw=1;
	}
	else//t��,d����Ӯ
		{
		fw=3;
		}

}