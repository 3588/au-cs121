#include<iostream>
using namespace std;
int main() 
{
	int days = 30,sdays,week1 = 2, week2, sweek, tmpweek, stmpweek;
	sweek = week1;
	week2=week1-1;
	while(sweek > 1)
	{
		cout<<"S ";
		sweek=sweek--;
	}
	for(sdays=1; sdays<=days; sdays++)
	{
		
		week2++;
		if(week2 == 8)//»»ÐÐ
		{
			cout<<"N\n";
			week2 = 0;
			sdays--;
		}
		else
		{
			cout<<sdays
				<<" ";
		}

				
	}

return 0; 
}
