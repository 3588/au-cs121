#include <iostream>
#include <cmath>
#include <string>
using namespace std;
void introduction1 ();
void introduction2 ();
void input1 (int&, int&);//����
void input2 (int&, int&);//�뿪
void checkInput (int, int, int&);//����ʽ
void getfee (int, int, int, int, int&, int&);//����,����h,����m,�뿪h,�뿪m,һ��ʱ��&,����&.
void output (int, int, int, int, int, int, int&);
void time_add_0 (int, int);
int main()
{
	int hh, mm, lhh, lmm, T_min, fee, l_big_e=0;
	char oneMore;
	do
	{
		introduction1 ();//����
		input1 (hh, mm);
		introduction2 ();//�뿪
		input2 (lhh, lmm);
		getfee (hh, mm, lhh, lmm, T_min, fee);//����
		output (hh, mm, lhh, lmm, T_min, fee, l_big_e);//�������
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
void input1 (int& hh, int& mm)//����
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
void input2 (int& hh, int& mm)//�뿪
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
void checkInput (int hh, int mm, int& check)//Ҫ��hh>=4��<=23.mm>=0��mm<=59
{
	if(hh<4 || hh>23 || mm<0 || mm>59)//����+��ʽ����
	{
		if(hh<0 || hh>23)//hh��ʽ����
		{
			cout<<"Please enter hours in 24 hour format.\n";
			check = 1;
		}
		if(mm<0 || mm>59)//mm��ʽ����
		{
			cout<<"Minutes must be between 0 and 59\n";
			check = 1;
		}
		if(hh<4)//����
		{
		cout<<"Your time is incorrect. The garage was not open at that time!\n";
		check = 1;
		}
		}
	else//�޴�
	{
		check = 0;
	}
}
void getfee (int hh, int mm, int lhh, int lmm, int& T_min, int& fee)
{
	int tmp_mm = abs(lmm-mm);
	T_min = (lhh-hh)*60+tmp_mm;
	int tmp_tm1 = T_min/30, tmp_tm2 = T_min%30;//tm2�����=0��+ 2 fee.
	if(tmp_tm2 == 0)//�պ�
	{
		fee = tmp_tm1*2;
	}
	else
	{
		fee = tmp_tm1*2+2;
	}
}//���ݳ���ʱ��,�ܷ���
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
	else//��Ϊm<10
		{
		cout<<h<<":";
		}
	if(m<10)
		{
		cout<<"0"<<m<<"\n";
		}
	else//��Ϊh<10
		{
		cout<<m<<"\n";
		}
	}