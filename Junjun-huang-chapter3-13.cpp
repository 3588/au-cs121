#include <iostream>
using namespace std;
int main()
{
 int a,b,c=1;
 for(a=3;a<=100;a++)//ȡֵ
 {

  for(b=2;b<=a-1;b++)//�ж�����
   if(a%b==0) //����
   {
    c=0;break;
   } 
   if(c) //��
   {
    cout<<a
		<<"  "; 
   } 
   c=1; 
} 
} 