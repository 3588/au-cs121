#include <iostream>
#include <cmath>
using namespace std;
void introduction ();
void input (double&, double&);
void getW (double, double, double&);
void output (double);
void End(char&);
int main()
	{
	double vv, tt, ww;
	char oneMore;
	do
		{
		introduction();
		input (vv, tt);
		getW (vv, tt, ww);
		output(ww);
		End(oneMore);		
		}while(oneMore == 'y' || oneMore== 'Y');

	return 0;
	}
void introduction ()
	{
	cout<<"This program will approxima windchill factor\n";
	}
void input (double& vv, double& tt)
	{
	cout<<"Please enter the wind speed(m/sec): ";
	cin>>vv;
	do
	{
	cout<<"Please enter the temperature in degrees(Celsius and temperature<=10): ";
	cin>>tt;}while(tt>10);
	//ttÐèÒª<=10
	}
void getW (double vv, double tt, double& ww)
	{
	double vv1=pow(vv, 0.16);
	double vv2=pow(vv, 0.016);
	ww = 13.12+0.6215*tt-11.37*vv1+0.3965*tt*vv2;
	}
void output (double ww)
	{
	cout<<"The windchill factor is: "<<ww;
	}
void End(char& oneMore)
{
cout<<"\nDo you want approxima again?(Y for YES, N for NO): ";
		cin>>oneMore;
}