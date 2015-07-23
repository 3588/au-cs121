#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
void startDuel  (int&, double);//判断是否打中
void tG();//复杂分析t-g,t失误.开始g-d//ok
//包含Gd,gw++
//Gd下t-g:Tg,(简单分析,tw++,),非Tg(复杂分析)
void Gd();//g-d,g赢//ok
void Tg();//简单分析t-g,t赢
void tG2();//t-g,t失误.开始g-t.
//简单分析g-t,g赢.
//g-t,g失误,回到Gd
void gD();//g-d,g失误
//之后第一次dw++
//第二次g-d,g中,gw++,g失误,dw++
const double t_s=1/3.0, g_s=1/2.0;//t和g的准确率ok
const int d_s=1.0;//d的准确率ok
int tw=0, gw=0, dw=0;//全局,每个赢得次数ok
int Shoot = 1;//判断是否打中,1=打中,0失误.ok
int main()
	{
	srand (time(0));	
	
	//射击开始
for(int i=1;i<=1000000.0;i++)//ok
		{
		//第一次射击T-G
	startDuel(Shoot, t_s);
	if(Shoot == 1)//打中,简单分析
		{
		tw++;
	dw++;
	//ok
		}
	else//失误,复杂分析
		{
		tG();
		}
		}//射击结束
double ftw=tw/1000000.0, fgw=gw/1000000.0, fdw=dw/1000000.0;
cout<<"Tom: "<<ftw<<" Gordon: "<<fgw<<" Darren: "<<fdw;
	}
void startDuel  (int& Shoot, double tgd_s)//判断是否打中
	{
	int x=rand()%100;
	double y=x/99.0;
	if(y<=tgd_s)//射中
		{
		Shoot = 1;
		}
	else//失误
		{
		Shoot = 0;
		}
	}


void tG()//复杂分析t-g,t失误.
	{
	//test
	//cout<<"复杂分析tG,g-d "<<endl;
	//第二次射击G-D
	startDuel(Shoot, g_s);
	if(Shoot == 1)//G打中
		{
		gw++;
		Gd();
		}
	else
		{
		gD();
		}
	
	}
void Gd()//g-d,g赢
	{
	//test
	//cout<<"复杂分析gD,t-g "<<endl;
	//射击t-g
	startDuel(Shoot, t_s);
	if(Shoot == 1)//t打中
		{
		tw++;
		}
	else
		{
		tG2();
		}
	}
void tG2()//t-g,t失误.开始g-t.
//简单分析g-t,g赢.
//g-t,g失误,回到Gd
	{
	//test
	//cout<<"复杂分析tG,g-t "<<endl;
	//射击g-t
	startDuel(Shoot, g_s);
	if(Shoot == 1)//g打中
		{
		gw++;
		}
	else
		{
		Gd();//回到Gd,开始t-g
		}
	}
void gD()//g-d,g失误
//之后第一次dw++
//第二次g-d,g中,gw++,g失误,dw++
	{
	dw++;
		//test
	//cout<<"复杂分析gD,Dt,g-d"<<endl;
	//射击g-d
	startDuel(Shoot, g_s);
	if(Shoot == 1)
		{
		gw++;
		}
	else
		{
		dw++;
		}

	}
