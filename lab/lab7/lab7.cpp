#include <iostream>
#include <string>
using namespace std;
void firstLine (void);
void drawHourglass (void);
int Height, oneMore = 1 , evenodd;
char onemore;
string character;
int main(){
	while(oneMore)
	{
		firstLine();
		drawHourglass();
	

	}

	return 0;
}
void firstline (void)
{
	cout<<"This code will display an hourglass shape on the screen. \n"
		<<"Please input the height of the hourglass (an integer greater than 3): ";
	cin>>Height;
	cout<<"Please input a paint character: ";
	cin>>character;
}
void drawHourglass (void)
{
	int tmp1=Height;//���ݸ߶ȵ�tmp1
	while(Height>0)//��һ��
	{
		Height--;
		cout<<character;
	}cout<<"\n";

	//��һ�Ž���
	evenodd = tmp1%2;//��ż�ж�
//ͷ����ʼ
	if(evenodd == 0 )//ż��ͷ��
	{
		int tmp2 = tmp1/2-1;//����
		int tmp3 = 1;//ǰ�ո�
		int tmp4 = tmp2-1;//�������ݵ�tmp4
		for(int n = 0; n < tmp2; n++)//�г���
		{
			
			for(int n = 0; n < tmp3; n++)//ǰ�ո���
			{
				cout<<" ";
			}//�ո�������

			cout<<character;
			for(int n = tmp4*2; n >0; n--)//�м�ո�
			{
				cout<<" ";

			}//�м�ո����
			cout<<character
				<<"\n";
			tmp4--;//�����м�ո�
			tmp3++;//����ǰ���ո�
		}
	}//ż��ͷ������

	else//����ͷ��
	{
		int tmp2 = (tmp1-1)/2-1;//����
		int tmp3 = 1;//ǰ�ո�
		int tmp4 = tmp2;//�������ݵ�tmp4
		for(int n = 0; n < tmp2; n++)//�г���
		{
			
			for(int n = 0; n < tmp3; n++)//ǰ�ո���
			{
				cout<<" ";
			}//�ո�������

			cout<<character;
			for(int n = tmp4*2-1; n >0; n--)//�м�ո�
			{
				cout<<" ";

			}//�м�ո����
			cout<<character
				<<"\n";
			tmp4--;//�����м�ո�
			tmp3++;//����ǰ���ո�
		}
	}//����ͷ������
	//ͷ������
	//�ײ���ʼ
	if(evenodd == 0 )//ż���ײ�
	{
		int tmp2 = tmp1/2-1;//����
		int tmp3 = tmp2;//ǰ�ո�=����i
		int tmp4=tmp2-1;//���ݴ���-�м�ո�ʹ��
		int tmp5,tmp6 = tmp4;//���ݴ���-�м�ո�ʹ��
		for(int n = 0; n < tmp2; n++)//�г���
		{
			
			for(int n = tmp3; n > 0; n--)//ǰ�ո���
			{
				cout<<" ";
			}//�ո�������
			cout<<character;
			tmp5=tmp4*2-tmp6*2;//�����м�ո�
			for(int n = tmp5; n >0; n--)//�м�ո�
			{
				cout<<" ";

			}//�м�ո����
			cout<<character
				<<"\n";
			tmp6--;//���ٱ�����-�п�			
			tmp3--;//����ǰ���ո�
		}
	}
	else
	{
		int tmp2 = (tmp1-1)/2-1;//����
		int tmp3 = tmp2;//ǰ�ո�=����i
		int tmp4=tmp2;//���ݴ���-�м�ո�ʹ��
		int tmp5,tmp6 = tmp4;//���ݴ���-�м�ո�ʹ��
		for(int n = 0; n < tmp2+1; n++)
		{
			cout<<" ";
		}cout<<character
			<<"\n";
		for(int n = 0; n < tmp2; n++)//�г���
		{
			
			for(int n = tmp3; n > 0; n--)//ǰ�ո���
			{
				cout<<" ";
			}//�ո�������
			cout<<character;
			tmp5=tmp4*2-tmp6*2;//�����м�ո�
			for(int n = tmp5+1; n >0; n--)//�м�ո�
			{
				cout<<" ";

			}//�м�ո����
			cout<<character
				<<"\n";
			tmp6--;//���ٱ�����-�п�			
			tmp3--;//����ǰ���ո�
		}
	}




	while(tmp1>0)//�����
	{
		tmp1--;
		cout<<character;
	}cout<<"\n";
	//���һ�Ž���
	cout<<"\nDo you want to draw again?(y/n): ";
	cin>>onemore;
	if((onemore == 'y')||(onemore == 'Y'))//��һ��
	{ oneMore =1 ;}
	else{ oneMore = 0;}
	//��һ�ν���
}		