#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d=1;
	char e;
	while(d)
	{
	cout<<"Please input an integer for varible a: ";
	cin>>a;
	cout<<"Please input an integer for varible b: ";
	cin>>b;
	cout<<"Please input an integer for varible c: ";
	cin>>c;
	cout<<"After sorting, the result is ";
	
		if((a>b)&&(b>c))
		{
			cout<<"a= "
				<<c
				<<" b= "
				<<b
				<<" c= "
				<<a;

		}
		if((a>c)&&(c>b))
		{	cout<<"a= "
				<<b
				<<" b= "
				<<c
				<<" c= "
				<<a;
		}
			if((b>a)&&(a>c))
		{	cout<<"a= "
				<<c
				<<" b= "
				<<a
				<<" c= "
				<<b;
		}
			if((b>c)&&(c>a))
		{	cout<<"a= "
				<<a
				<<" b= "
				<<c
				<<" c= "
				<<b;
		}
			if((c>a)&&(a>b))
		{	cout<<"a= "
				<<b
				<<" b= "
				<<a
				<<" c= "
				<<c;
		}
			if((c>b)&&(b>a))
		{	cout<<"a= "
				<<a
				<<" b= "
				<<b
				<<" c= "
				<<c;
		}



		
	
	
	cout<<"\nDo you want to continue? Y for yes and N for no; ";
	cin>>e;
	if((e == 'y')||(e == 'Y'))
	{
		d = 1;
	}
	else
	{
		d = 0;
	}

	}
	 

	return 0;
}