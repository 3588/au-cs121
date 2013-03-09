#include <iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
void startDuel  (int&, double);//
void shoot (bool&, double);
int main()
{
	int a=1;//shoot or not(1=shoot, 0=miss)
	int tw=0 , gw=0, dw=0;
	

	//t-g
	startDuel(a, 1/3.0);
	if(a)//t-g shoot
	{
		tw++;
		dw++;
	}
	//d-g
	else
	{
		dw++;
		//t-d
		startDuel(a, 1/3.0);
		if(a)//t-d shoot
		{
			tw++;
		}
	}
	cout<<a;
	return 0;
}
void startDuel (int& a, double b)
{
	srand(time(0));
	int x = rand()%100;
	double y = x/99.0;
	if(y<=b)
	{
		a=1;
	}
	else
	{
		a=0;
	}
	cout<<b<<"\n"<<y<<"\n";//test
}
