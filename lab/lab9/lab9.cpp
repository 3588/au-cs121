#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
void startDuel  (int&, double);//�ж��Ƿ����
void tG();//���ӷ���t-g,tʧ��.��ʼg-d//ok
//����Gd,gw++
//Gd��t-g:Tg,(�򵥷���,tw++,),��Tg(���ӷ���)
void Gd();//g-d,gӮ//ok
void Tg();//�򵥷���t-g,tӮ
void tG2();//t-g,tʧ��.��ʼg-t.
//�򵥷���g-t,gӮ.
//g-t,gʧ��,�ص�Gd
void gD();//g-d,gʧ��
//֮���һ��dw++
//�ڶ���g-d,g��,gw++,gʧ��,dw++
const double t_s=1/3.0, g_s=1/2.0;//t��g��׼ȷ��ok
const int d_s=1.0;//d��׼ȷ��ok
int tw=0, gw=0, dw=0;//ȫ��,ÿ��Ӯ�ô���ok
int Shoot = 1;//�ж��Ƿ����,1=����,0ʧ��.ok
int main()
	{
	srand (time(0));	
	
	//�����ʼ
for(int i=1;i<=1000000.0;i++)//ok
		{
		//��һ�����T-G
	startDuel(Shoot, t_s);
	if(Shoot == 1)//����,�򵥷���
		{
		tw++;
	dw++;
	//ok
		}
	else//ʧ��,���ӷ���
		{
		tG();
		}
		}//�������
double ftw=tw/1000000.0, fgw=gw/1000000.0, fdw=dw/1000000.0;
cout<<"Tom: "<<ftw<<" Gordon: "<<fgw<<" Darren: "<<fdw;
	}
void startDuel  (int& Shoot, double tgd_s)//�ж��Ƿ����
	{
	int x=rand()%100;
	double y=x/99.0;
	if(y<=tgd_s)//����
		{
		Shoot = 1;
		}
	else//ʧ��
		{
		Shoot = 0;
		}
	}


void tG()//���ӷ���t-g,tʧ��.
	{
	//test
	//cout<<"���ӷ���tG,g-d "<<endl;
	//�ڶ������G-D
	startDuel(Shoot, g_s);
	if(Shoot == 1)//G����
		{
		gw++;
		Gd();
		}
	else
		{
		gD();
		}
	
	}
void Gd()//g-d,gӮ
	{
	//test
	//cout<<"���ӷ���gD,t-g "<<endl;
	//���t-g
	startDuel(Shoot, t_s);
	if(Shoot == 1)//t����
		{
		tw++;
		}
	else
		{
		tG2();
		}
	}
void tG2()//t-g,tʧ��.��ʼg-t.
//�򵥷���g-t,gӮ.
//g-t,gʧ��,�ص�Gd
	{
	//test
	//cout<<"���ӷ���tG,g-t "<<endl;
	//���g-t
	startDuel(Shoot, g_s);
	if(Shoot == 1)//g����
		{
		gw++;
		}
	else
		{
		Gd();//�ص�Gd,��ʼt-g
		}
	}
void gD()//g-d,gʧ��
//֮���һ��dw++
//�ڶ���g-d,g��,gw++,gʧ��,dw++
	{
	dw++;
		//test
	//cout<<"���ӷ���gD,Dt,g-d"<<endl;
	//���g-d
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
