// your code works but just be careful with chinese characters in the code. It won't be able to compile on a pure-english based computer. It may be touble for other programming classes.
// 38 out of 40 for lab 3

/*CS121 Lab 3
 Junjun huang
 Sep 23, 2010
 */
#include <iostream>
using namespace std;
int main()
{
	const int DOLLAR = 100;
	const int QUARTER = 25;
	const int DIME = 10;
	double a, tem_a;//钱
	//tem_a = 1.63;//test 钱 = 1.63
	cout<<"How much ";
	cin>>tem_a;
	a = tem_a * 100;
	cout<<"Your change is: ";
	int dollar, quarter, dime, cent;
	if(a<1000)
	{
		dollar = a / DOLLAR;//dollar
		if(dollar>1)
		{
			cout<<dollar
			<<"dollars, ";//test
		}
		else
		{
			cout<<dollar
			<<"dollar, ";//test
		}
		
		
		quarter = (a-dollar*DOLLAR) / QUARTER;//quarter
		if(quarter>1)
		{
			cout<<quarter
			<<"quarters, ";//test
		}
		else
		{
			cout<<quarter
			<<"quarter, ";//test
		}
		
		
		dime = ((a-dollar*DOLLAR) - quarter*QUARTER)/DIME;//dime
		if(dime>1)
		{
			cout<<dime
			<<"dimes, ";//test
		}
		else
		{
			cout<<dime
			<<"dime, ";//test
		}
		
		
		cent = a - dollar*DOLLAR-quarter*QUARTER-dime*DIME;//cent
		if(cent>1)
		{
			cout<<cent
			<<"cents, ";//test
		}
		else
		{
			cout<<cent
			<<"cent, ";//test
		}
		
	}
	else//a>=1000
	{
		dollar = a / DOLLAR;//dollar
		cout<<dollar
		<<"dollars, ";
		
		
		quarter = (a-dollar*DOLLAR) / QUARTER;//quarter
		cout<<quarter
		<<"quarters, ";//test
		
		
		
		dime = ((a-dollar*DOLLAR) - quarter*QUARTER)/DIME;//dime
		cout<<dime
		<<"dimes, ";//test
		
		
		
		cent = a - dollar*DOLLAR-quarter*QUARTER-dime*DIME;//cent
		cout<<cent
		<<"cents, ";//test
		
	}
	
	
	return 0;
	
}
