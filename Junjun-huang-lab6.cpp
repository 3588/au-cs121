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


	switch(enter_month)//��ʼѡ���·ݺ����õ�һ�������
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
}//ѡ���·ݽ���


	if((enter_month == 4)||(enter_month == 6)||(enter_month == 9)||(enter_month == 11)||(enter_month == 2))//�趨ÿ�¶�����
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
	}//�趨ÿ�����ڽ���


	

	if((enter_month>=1)&&(enter_month<=12))//û�д���
	{
	cout<<"2010\n";
	cout<<"Sun Mon Tue Wed Thu Fri Sat\n"
		<<"=== === === === === === ===\n";



//��������
//��������
int days = t_month,sdays,week1 = start_week, week2, sweek;//����ֵ
	sweek = week1;//������ֵ
	week2=week1-1;//����һ������7�컻��
	while(sweek > 1)//���õ�һ��ǰ�Ŀո�
	{
		cout<<"    ";
		sweek--;
	}
	for(sdays=1; sdays<=days; sdays++)//��ʼ��������
	{
		
		
		week2++;
		if(week2 == 8)//����
		{
			cout<<"\n";
			week2 = 0;
			sdays--;
		}
		else
		{
			
			if(sdays>=10)//�����2λ��,��һ���ո�
		{
			cout<<sdays
				<<"  ";
		}
		else//1λ��,3���ո�
		{
			cout<<sdays
				<<"   ";
		}			
		
			}

				
	}//�������ڽ���


	cout<<"\nDo you want to continue? y for yes and n for no: ";
	cin>>more;
		if((more == 'y')||(more == 'Y'))//��һ�ο�ʼ
		{
		one_more = 1;
		}
		else
		{
		one_more = 0;
		}//��һ�ν���
		}//û�д������


	else//�д���
	{
	cout<<"\nDo you want to continue? y for yes and n for no: ";
	cin>>more;
	if((more == 'y')||(more == 'Y'))//��һ�ο�ʼ
	{
		one_more = 1;
	}
	else
	{
		one_more = 0;
	}//��һ�ν���
	}//�д������
	}//while����
	cout<<"\nAll done. Bye\n";

	return 0;
}