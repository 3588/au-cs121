#include <iostream>
using namespace std;
int main()
{
	int a,b=0,c=0,d=1;
	while(d)
	{
	cout<<"Please input an integer (enter 0 to stop): ";
	cin>>a;
	if(a!=0)
	{
		if(a>0)
		{
			b++;
		}
		else
		{
			c++;
		}
	}
	else
	{
		d=0;
	}
	}
	cout<<"Total positive numbers: "
		<<b
		<<"\n";
	cout<<"Total negative numbers: "
		<<c;

	return 0;
}