#include <iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
const double T_S=1/3.0, G_S=1/2.0, D_S=1/1.0;//全局,分别准确率
void startDuel (int&, double );//计算是否击中
void PassFinal(int&, int&, int&,int,int,int);//计算最终击中数字
void g_t(int&);//G打T(T-D,T打中后)
void t_g(int&);//T-G
void g_d(int&);//g-d
void t_d(int&);//t-d
void d_g(int&);//d-g
int main()
{
	int a, fw;//a判断击中, fw最终赢
	int ft=0, fg=0, fd=0;//分别赢
	srand(time(0));//用时间做种子
	//射击开始
	//第一次射击
	for(int i=1;i<=1000; i++)
		{
	startDuel (a, T_S);//T打D
	if(a==1)//T击中
	{
		g_t(fw);//到G-T
	}
	else
	{
		g_d(fw);//g-d
	}
	switch(fw)//开始判断最终赢
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

void g_t(int& fw)//G打T(T-D,T打中后)
{
int a;
	//第一次赢后第二次射击
	//T-G输后,第N次射击
	startDuel (a, G_S);//G打T
	if(a==1)//g打中,G最终赢
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
	startDuel (a, T_S);//t打g
	if(a==1)//g打中,G最终赢
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
	startDuel (a, G_S);//t打g
		if(a==1)//g打中,跳到t-g
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
	//g必输,t-d
	startDuel (a, T_S);//t打d
	if(a==1)//t打中,t最终赢,
	{
		fw=1;
	}
	else//t输,d最终赢
		{
		fw=3;
		}

}