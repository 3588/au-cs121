#include <iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
int drawRandomCard ();
void humanPlay(int&, int&);//��
void humanPlayFrist(int&, int&);//�˵�һ��
void humanPlayMore(int&, int&);//�˵ڶ�������
void computerPlay(int&, int&);//����
void computerPlayFrist(int&);//���Ե�һ��
void computerPlayMore(int&, int&);//���Եڶ�������
void computerStratrgy(int, int&);//���Բ���
void checkwiner(int, int);//21����˭Ӯ
void endc(char&);
int main()
	{
	srand(time(0));
	//��ʼѭ��
	int humanBJ = 0, computerBJ = 0;//��ʼ������
	int humanMore = 1, computerMore = 1;//��ʼ���Ƿ�Ҫ��
	char oneMore;
	do{
	humanPlay(humanBJ, humanMore);//��ȡ��,����=����,�Ƿ�Ҫ��
	computerPlay(computerBJ, computerMore);//����ȡ��,����=����,�Ƿ�Ҫ��
	//�ڶ��ο�ʼѭ��
	while(humanMore == 1|| computerMore==1)
		{
	if(humanMore == 1 && humanBJ<=21)//��Ҫ��
			{
		humanPlay(humanBJ, humanMore);//��ȡ��
			}
		if(computerMore==1&&computerBJ<=21)//����Ҫ��
		{
		computerPlay(computerBJ, computerMore);//����ȡ��
		}
		}
	//�ڶ��ο�ʼѭ������
	
	//����Ҫ��
	
	checkwiner(humanBJ, computerBJ);//������,���Ե���.

	//����ѡ��
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
//��ȡ��
int drawRandomCard ()
	{
	int card;
	card = rand()%10+1;
	return card;
	}
//��ȡ�ƽ���
//��ȡ��
void humanPlay(int& h, int& hm)//���ݽ�������&,�Ƿ�&
	{

	if(h==0)//�˵�һ��
		{
		humanPlayFrist(h, hm);
		}
	else//�˵�һ�κ�
		{
		humanPlayMore(h, hm);
		}
	}
//��ȡ�ƽ���
//�˵�һ��
void humanPlayFrist(int& h, int& hm)//�˵�һ��
	{
	h = drawRandomCard();//��ÿ�
	cout<<"You card is: "
		<<h<<"\n";
	char om;
	cout<<"One mroe? Y or N:";
	cin>>om;
	if(om == 'y' || om == 'Y')//����һ��
		{
		hm = 1;
		}
	else//����,ֻҪһ��,��ʼcomputer
		{
		hm = 0;
		}
	
	}
//�˵�һ�ν���
//�˵�һ�κ�
void humanPlayMore(int& h, int& hm)//�˵ڶ�������
	{

	h = h+drawRandomCard();//�����
	cout<<"You card sum is: "
		<<h<<"\n";
	if(h>21)//����21
		{
		h=0;
		hm=0;
		}
	else
		{
	char om;
	cout<<"One mroe? Y or N:";
	cin>>om;
	if(om=='y'||om == 'Y')//����һ��
		{
		hm=1;
		}
	else//����,��ʼcomputer
		{
		hm=0;
		}
		}

	}
//�˵�һ�κ����
//����ȡ��
void computerPlay(int& c, int& cm)
	{
	if(c==0)//���Ե�һ��
		{
		computerPlayFrist(c);
		}
	else//���Ե�һ�κ�
		{
		computerPlayMore(c, cm);
		}
	}
//����ȡ�ƽ���
//���Ե�һ��
void computerPlayFrist(int& c)//���Ե�һ��
	{
	c = drawRandomCard();//�����
		int cm=1;//����Ҫ��
	}
//���Ե�һ�ν���
//���Ե�һ�κ�
void computerPlayMore(int& c, int& cm)//���Ե�һ�κ�
	{
	c = c+drawRandomCard();//�����
	if(c>21)//����21
		{
		c=0;
		cm=0;
		}
	else
		{	
	//���Բ���
		computerStratrgy(c, cm);
		}
	}
//���Ե�һ�κ����
//���Բ���
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
//���Բ��Խ���
//��Ӯ
void checkwiner(int h, int c)//21����˭Ӯ
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