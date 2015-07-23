#include <iostream>
using namespace std;
void input (int&, int&);
void introduction ();
void toAmPm(int&);
void amORpm(int, char&);//AM or pm
void output (int, int, char);
int main()
	{
	int hh, mm;
	char ampm, oneMore;
	do
		{
	introduction ();
	input(hh, mm);//输入
	toAmPm(hh);
	amORpm(hh, ampm);//ampm转换
	output (hh, mm, ampm);
	cout<<"\nDo you want converts again?(Y for YES, N for NO): ";
	cin>>oneMore;
		}while(oneMore=='y' ||oneMore=='Y');

		return 0;
	}
void introduction ()
	{
	cout<<"This program will converts from 24-hour to 12-hour\n";
	}
void input (int& hh, int& mm)
	{
		char hm;
		do{
	cout<<"Please enter time(24-hour HH:MM): ";
	cin>>hh>>hm>>mm;
			}while(hh<1 || hh>24 || mm<0 || mm>59);//如果输入超出范围,再一次	
	}
void toAmPm(int& hh)
	{
	if(hh>12 && hh!=24)
		{
		hh=hh%12;
		}
	if(hh==24)
		{
		hh=12;
		}
	}
void amORpm(int hh, char& ampm)
	{
	if(hh<12 || hh==24)//特殊情况,输入24:00=0:0am
		{
		ampm='a';
		}
	else//实际无用
		{
		ampm='p';
		}
	}
void output (int hh, int mm, char ampm)
	{
	cout<<"The time is: ";
	if(ampm=='a')
		{
		if(mm<10)
			{
			cout<<hh<<":"<<"0"<<mm<<" AM";
			}
		else{
		cout<<hh<<":"<<mm<<" AM";
			}
		}
	else
		{
		if(mm<10)
			{
			cout<<hh<<":"<<"0"<<mm<<" PM";
			}
		else{
		cout<<hh<<":"<<mm<<" PM";
			}
		}
	}