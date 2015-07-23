#include <iostream>
using namespace std;
int main()
{
 int a,b,c=1;
 for(a=3;a<=100;a++)//取值
 {

  for(b=2;b<=a-1;b++)//判断质数
   if(a%b==0) //不是
   {
    c=0;break;
   } 
   if(c) //是
   {
    cout<<a
		<<"  "; 
   } 
   c=1; 
} 
} 