#include <iostream>
#include <string>
using namespace std;
void drawTriangle (string, int);
void drawSquare (string, int);
int typeDraw;//ͼ����-1����,2������,3�˳�
string typeBrush;
int typeHeight;
int main()
{
	while(1)
	{
		cout<<"Welcome to the drawing program!\n\n"
			<<"Please select from the following menu:\n"
			<<"1. Draw a triangle\n2. Draw a square\n3. Exit the program\n\n"
			<<"Please input your selection: ";
		cin>>typeDraw;
		if((typeDraw != 1)&&(typeDraw != 2))//�˳�
		{
			break;
		}
		cout<<"Please input a character for you brush: ";
		cin>>typeBrush;
		cout<<"Plese enter the height of your triangle: ";
		cin>>typeHeight;
		if(typeHeight == 0)//��������
		{
			break;
		}
		if(typeDraw == 1)//������
		{
			drawTriangle(typeBrush, typeHeight);
		}
		if(typeDraw == 2)//������
		{
			drawSquare(typeBrush, typeHeight);
		}
		
	}
	cout<<"Bye!";
	return 0;
}
void drawTriangle (string typeBrush, int typeHeight)
{
	if (typeHeight == 1)//һ�д���
	{
		cout<<typeBrush
			<<"\n\n";
	}//һ�д������
	else//����һ��
	{
		for (int n=1; n < typeHeight; n++)//��һ��
		{
			cout<<" ";
		}cout<<typeBrush
			<<"\n";//��һ�н���
		int konGe = 1;//�м�ո�
		int tmp3 = typeHeight-2;//������ֵ-ǰ�ո���
		for(int n = 0; n < typeHeight - 2; n++)//�г���
		{
			
			for(int n = tmp3; n > 0; n--)//ǰ�ո���
			{
				cout<<" ";
			}//�ո�������
			cout<<typeBrush;//ͨ��		
			for(int n = 0; n < konGe; n++)//�м�ո�
			{
				cout<<" ";				

			}//�м�ո����
			cout<<typeBrush
				<<"\n";
			//���ٱ�����-�п�
			konGe = konGe + 2;//�����м�ո�
			tmp3--;//����ǰ���ո�
		}//�г��н���
		for(int n = 0; n < typeHeight*2-1; n++)
		{
			cout<<typeBrush;
		}cout<<"\n";//�ײ�
	}//����һ�н���
	
}//���������ν���

void drawSquare(string typeBrush, int typeHeight)
{
	if (typeHeight == 1)//һ�д���
	{
		cout<<typeBrush
			<<"\n\n";
	}//һ�д������
	else{
	int konGe = 1;//�м�ո�
	for (int n=0; n<typeHeight-2; n++)
		{
			konGe = konGe + 2;
		}//�м�ո����
	for(int n = 0; n<typeHeight; n++)//��һ��
	{
		cout<<typeBrush<<" ";
	}cout<<"\n";//��һ�Ž���
	for(int n=0; n<typeHeight-2; n++)//�г���
	{
		cout<<typeBrush;
		
		for(int n = 0; n < konGe; n++)//�м�ո�
			{
				cout<<" ";				

			}//�м�ո����
		cout<<typeBrush
			<<"\n";
		//�����м�ո�
	}//�г��н���
	for(int n = 0; n<typeHeight; n++)//�����
	{
		cout<<typeBrush<<" ";
	}cout<<"\n";//����Ž���
	}
}
