#include<iostream>
using namespace std;
int main()
{
	int enter_month, one_more = 1, t_month, start_week = 0;
	char more;
	while(one_more)
	{
	cout<<"Please inout a month\n"
		<<"(1 for January, 2 for February, and so forth): ";
	cin>>enter_month;


	switch(enter_month)//开始选择月份和设置第一天的星期
	{
	case 1:
		cout<<"January ";
		start_week = 6;
		break;
	case 2:
		cout<<"February ";
		start_week = 2;
		break;
	case 3:
		cout<<"March ";
		start_week = 2;
		break;
	case 4:
		cout<<"April ";
		start_week = 5;
		break;
	case 5:
		cout<<"May ";
		start_week = 7;
		break;
	case 6:
		cout<<"June ";
		start_week = 3;
		break;
	case 7:
		cout<<"July ";
		start_week = 5;
		break;
	case 8:
		cout<<"August ";
		start_week = 1;
		break;
	case 9:
		cout<<"September ";
		start_week = 4;
		break;
	case 10: 
		cout<<"October ";
		start_week = 6;
		break;
	case 11:
		cout<<"November ";
		start_week = 2;
		break;
	case 12:
		cout<<"December ";
		start_week = 4;
		break;
	default:
		cout<<"Month input error!\n";
		break;
}//选择月份结束


	if((enter_month == 4)||(enter_month == 6)||(enter_month == 9)||(enter_month == 11)||(enter_month == 2))//设定每月多少天
	{
		if(enter_month == 2)
		{
			 t_month = 28;
		}
		else
		{
			t_month = 30;
		}
	}
	else
	{
		t_month = 31;
	}//设定每月日期结束


	

	if((enter_month>=1)&&(enter_month<=12))//没有错误
	{
	cout<<"2010\n";
	cout<<"Sun Mon Tue Wed Thu Fri Sat\n"
		<<"=== === === === === === ===\n";



//排列日期
//独立计算
int days = t_month,sdays,week1 = start_week, week2, sweek;//导入值
	sweek = week1;//传递数值
	week2=week1-1;//设置一个星期7天换行
	while(sweek > 1)//设置第一天前的空格
	{
		cout<<"    ";
		sweek--;
	}
	for(sdays=1; sdays<=days; sdays++)//开始排列日期
	{
		
		
		week2++;
		if(week2 == 8)//换行
		{
			cout<<"\n";
			week2 = 0;
			sdays--;
		}
		else
		{
			
			if(sdays>=10)//如果是2位数,少一个空格
		{
			cout<<sdays
				<<"  ";
		}
		else//1位数,3个空格
		{
			cout<<sdays
				<<"   ";
		}			
		
			}

				
	}//排列日期结束


	cout<<"\nDo you want to continue? y for yes and n for no: ";
	cin>>more;
		if((more == 'y')||(more == 'Y'))//再一次开始
		{
		one_more = 1;
		}
		else
		{
		one_more = 0;
		}//再一次结束
		}//没有错误结束


	else//有错误
	{
	cout<<"\nDo you want to continue? y for yes and n for no: ";
	cin>>more;
	if((more == 'y')||(more == 'Y'))//再一次开始
	{
		one_more = 1;
	}
	else
	{
		one_more = 0;
	}//再一次结束
	}//有错误结束
	}//while结束
	cout<<"\nAll done. Bye\n";

	return 0;
}