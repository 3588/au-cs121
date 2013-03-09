/*CS121 Lab 3_1
Junjun huang
Sep 23, 2010
*/

#include <iostream>
using namespace std;
int main()
{
	cout<<"Enter X";
	double x;
	cin>>x;
	double y;
	y = 3*(x*x)-8*x+4;
	cout<<"Answer is "
		<<y
		<<"\n\n";
	//y = (3*x-2)*(x-2)
	//x=2/3 or 2
	cout<<"\n\n\n\n"
		<<"Set y = 0 "
		<<"\n The x is 2 or 2/3";
	
	//test 2/3
	cout<<"Test X = 2/3";
	double x_1 = 2/3;// this line gives x_1 as 0 because 2/3 is integer division. 
	double y_1 = 3*(x_1*x_1)-8*x_1+4;
	cout<<"\n"
		<<"In the C++ the X not 2/3 is "
		<<x_1
		<<" now"//the x = 0
		<<"\n\n x=2/3  in C++ Y = "
		<<y_1; //so the y = 0
	double x_2 = 2;
	double y_2 = 3*(x_2*x_2)-8*x_2+4;
	cout<<"\n\n"
		<<"Test x = 2"
		<<"\n"
		<<"Y = "
		<<y_2;
	return 0;
}
// your testing of x=2/3 isn't correct. see my comment. -2 points
// 18 out of 20
