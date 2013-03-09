#include <iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
int drawRandomCard ();
void humanPlay(int&, int&);//人
void humanPlayFrist(int&, int&);//人第一次
void humanPlayMore(int&, int&);//人第二次以上
void computerPlay(int&, int&);//电脑
void computerPlayFrist(int&);//电脑第一次
void computerPlayMore(int&, int&);//电脑第二次以上
void computerStratrgy(int, int&);//电脑策略
void checkwiner(int, int);//21点内谁赢
void endc(char&);
int main()
	{
	srand(time(0));
	//开始循环
	int humanBJ = 0, computerBJ = 0;//初始化点数
	int humanMore = 1, computerMore = 1;//初始化是否要牌
	char oneMore;
	do{
	humanPlay(humanBJ, humanMore);//人取牌,传递=点数,是否要牌
	computerPlay(computerBJ, computerMore);//电脑取牌,传递=点数,是否要牌
	//第二次开始循环
	while(humanMore == 1|| computerMore==1)
		{
	if(humanMore == 1 && humanBJ<=21)//人要牌
			{
		humanPlay(humanBJ, humanMore);//人取牌
			}
		if(computerMore==1&&computerBJ<=21)//电脑要牌
		{
		computerPlay(computerBJ, computerMore);//电脑取牌
		}
		}
	//第二次开始循环结束
	
	//都不要牌
	
	checkwiner(humanBJ, computerBJ);//传递人,电脑点数.

	//附加选项
	cout<<"Do you want to know you and computer final sum? Y or N: ";
	char f_sum;
	cin>>f_sum;
	if(f_sum =='y' || f_sum=='Y')
		{
		cout<<"If the sum is 0, mean is sum over 21.\n";
		cout<<"You sum is "<<humanBJ<<"\n"
			<<"Computer sum is "<<computerBJ<<"\n";
		}
	 endc(oneMore);
	 humanBJ=0;
	 computerBJ=0;
		}while(oneMore == 'y' || oneMore == 'Y');
	cout<<"Thank you paly\n"; 	


	return 0;
	}
void endc(char& oneMore)
	{
	cout<<"Do you want to play again? Y or N: ";
	cin>>oneMore;
	}
//获取牌
int drawRandomCard ()
	{
	int card;
	card = rand()%10+1;
	return card;
	}
//获取牌结束
//人取牌
void humanPlay(int& h, int& hm)//传递进来点数&,是否&
	{

	if(h==0)//人第一次
		{
		humanPlayFrist(h, hm);
		}
	else//人第一次后
		{
		humanPlayMore(h, hm);
		}
	}
//人取牌结束
//人第一次
void humanPlayFrist(int& h, int& hm)//人第一次
	{
	h = drawRandomCard();//获得卡
	cout<<"You card is: "
		<<h<<"\n";
	char om;
	cout<<"One mroe? Y or N:";
	cin>>om;
	if(om == 'y' || om == 'Y')//再来一张
		{
		hm = 1;
		}
	else//结束,只要一张,开始computer
		{
		hm = 0;
		}
	
	}
//人第一次结束
//人第一次后
void humanPlayMore(int& h, int& hm)//人第二次以上
	{

	h = h+drawRandomCard();//获得牌
	cout<<"You card sum is: "
		<<h<<"\n";
	if(h>21)//大于21
		{
		h=0;
		hm=0;
		}
	else
		{
	char om;
	cout<<"One mroe? Y or N:";
	cin>>om;
	if(om=='y'||om == 'Y')//再来一张
		{
		hm=1;
		}
	else//结束,开始computer
		{
		hm=0;
		}
		}

	}
//人第一次后结束
//电脑取牌
void computerPlay(int& c, int& cm)
	{
	if(c==0)//电脑第一次
		{
		computerPlayFrist(c);
		}
	else//电脑第一次后
		{
		computerPlayMore(c, cm);
		}
	}
//电脑取牌结束
//电脑第一次
void computerPlayFrist(int& c)//电脑第一次
	{
	c = drawRandomCard();//获得牌
		int cm=1;//继续要牌
	}
//电脑第一次结束
//电脑第一次后
void computerPlayMore(int& c, int& cm)//电脑第一次后
	{
	c = c+drawRandomCard();//获得牌
	if(c>21)//大于21
		{
		c=0;
		cm=0;
		}
	else
		{	
	//电脑策略
		computerStratrgy(c, cm);
		}
	}
//电脑第一次后结束
//电脑策略
void computerStratrgy(int c, int& cm)
	{
	int tmp1, tmp2;
	tmp1=21-c;
	tmp2 = rand()%10-1;
	if(tmp2<+tmp1)
		{
		cm = 1;
		}
	else
		{
		cm = 0;
		}
	}
//电脑策略结束
//输赢
void checkwiner(int h, int c)//21点内谁赢
	{
	if(h>c)
		{
		cout<<"You win\n";
		}
	if(c>h)
		{
		cout<<"You loss\n";
		}
	if(c==h)
		{
		if(h==0)
			{
			cout<<"You and Computer both over 21\n";
			}
		cout<<"Sorry! You and Computer sum same\n";
		cout<<"No winner";
		}
	}