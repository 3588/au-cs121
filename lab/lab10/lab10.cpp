#include <iostream>
#include <cmath>
#include <string>
using namespace std;
void introduction1 ();
void introduction2 ();
void input1 (int&, int&);//进入
void input2 (int&, int&);//离开
void checkInput (int, int, int&);//检查格式
void getfee (int, int, int, int, int&, int&);//计算,进入h,进入m,离开h,离开m,一共时间&,费用&.
void output (int, int, int, int, int, int, int&);
void time_add_0 (int, int);
int main()
{
	int hh, mm, lhh, lmm, T_min, fee, l_big_e=0;
	char oneMore;
	do
	{
		introduction1 ();//进入
		input1 (hh, mm);
		introduction2 ();//离开
		input2 (lhh, lmm);
		getfee (hh, mm, lhh, lmm, T_min, fee);//计算
		output (hh, mm, lhh, lmm, T_min, fee, l_big_e);//给出结果
		if(l_big_e==1)
			{
			oneMore='y';
			}
		else
			{
			cout<<"Do you havr another bill to pay?(Y for YES, N for NO): ";
			cin>>oneMore;
			}
	}while(oneMore == 'y' || oneMore== 'Y');
	return 0;
}
void introduction1 ()
	{
	cout<<"When did you enter the garage?\n";
	}
void introduction2 ()
	{
	cout<<"When did you leave the garage?\n";
	}
void input1 (int& hh, int& mm)//进入
{
	int check = 1;
	char hhmm;
	do
	{
	cout<<"Please enter the time (in the format of HR:MIN in 24 hour format): ";
	cin>>hh>>hhmm>>mm;
	checkInput (hh, mm, check);
	}while(check==1);
}
void input2 (int& hh, int& mm)//离开
{
	int check = 1;
	char hhmm;
	do
	{
	cout<<"Please enter the time (in the format of HR:MIN in 24 hour format): ";
	cin>>hh>>hhmm>>mm;
	checkInput (hh, mm, check);
	}while(check==1);
}
void checkInput (int hh, int mm, int& check)//要求hh>=4，<=23.mm>=0，mm<=59
{
	if(hh<4 || hh>23 || mm<0 || mm>59)//关门+格式错误
	{
		if(hh<0 || hh>23)//hh格式错误
		{
			cout<<"Please enter hours in 24 hour format.\n";
			check = 1;
		}
		if(mm<0 || mm>59)//mm格式错误
		{
			cout<<"Minutes must be between 0 and 59\n";
			check = 1;
		}
		if(hh<4)//关门
		{
		cout<<"Your time is incorrect. The garage was not open at that time!\n";
		check = 1;
		}
		}
	else//无错
	{
		check = 0;
	}
}
void getfee (int hh, int mm, int lhh, int lmm, int& T_min, int& fee)
{
	int tmp_mm = abs(lmm-mm);
	T_min = (lhh-hh)*60+tmp_mm;
	int tmp_tm1 = T_min/30, tmp_tm2 = T_min%30;//tm2如果不=0，+ 2 fee.
	if(tmp_tm2 == 0)//刚好
	{
		fee = tmp_tm1*2;
	}
	else
	{
		fee = tmp_tm1*2+2;
	}
}//传递出总时间,总费用
void output (int hh, int mm, int lhh, int lmm, int tm, int fee, int& l_big_e)
{
if(lhh<=hh)
	{
	l_big_e=1;
	cout<<"Your leave time is earlier than the enter time!\n";
	}
else
	{
		cout<<"Enter  time: ";
		time_add_0(hh, mm);
		cout<<"Leave time: ";
		time_add_0(lhh, lmm);
		cout<<"Total Minutes: "<<tm<<"\n";
		cout<<"Rate: 2.00 dollars per 30 minutes"<<"\n"
			<<"Fee: "<<fee<<".00"<<"\n";
		l_big_e=0;
	}
}
void time_add_0 (int h, int m)
	{
	if(h<10)
		{
		cout<<"0"<<h<<":";
		}
	else//因为m<10
		{
		cout<<h<<":";
		}
	if(m<10)
		{
		cout<<"0"<<m<<"\n";
		}
	else//因为h<10
		{
		cout<<m<<"\n";
		}
	}