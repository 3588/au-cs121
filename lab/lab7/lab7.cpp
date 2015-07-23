#include <iostream>
#include <string>
using namespace std;
void firstLine (void);
void drawHourglass (void);
int Height, oneMore = 1 , evenodd;
char onemore;
string character;
int main(){
	while(oneMore)
	{
		firstLine();
		drawHourglass();
	

	}

	return 0;
}
void firstline (void)
{
	cout<<"This code will display an hourglass shape on the screen. \n"
		<<"Please input the height of the hourglass (an integer greater than 3): ";
	cin>>Height;
	cout<<"Please input a paint character: ";
	cin>>character;
}
void drawHourglass (void)
{
	int tmp1=Height;//传递高度到tmp1
	while(Height>0)//第一排
	{
		Height--;
		cout<<character;
	}cout<<"\n";

	//第一排结束
	evenodd = tmp1%2;//奇偶判断
//头部开始
	if(evenodd == 0 )//偶数头部
	{
		int tmp2 = tmp1/2-1;//行数
		int tmp3 = 1;//前空格
		int tmp4 = tmp2-1;//行数传递到tmp4
		for(int n = 0; n < tmp2; n++)//列出行
		{
			
			for(int n = 0; n < tmp3; n++)//前空格数
			{
				cout<<" ";
			}//空格数结束

			cout<<character;
			for(int n = tmp4*2; n >0; n--)//中间空格
			{
				cout<<" ";

			}//中间空格结束
			cout<<character
				<<"\n";
			tmp4--;//减少中间空格
			tmp3++;//增加前方空格
		}
	}//偶数头部结束

	else//基数头部
	{
		int tmp2 = (tmp1-1)/2-1;//行数
		int tmp3 = 1;//前空格
		int tmp4 = tmp2;//行数传递到tmp4
		for(int n = 0; n < tmp2; n++)//列出行
		{
			
			for(int n = 0; n < tmp3; n++)//前空格数
			{
				cout<<" ";
			}//空格数结束

			cout<<character;
			for(int n = tmp4*2-1; n >0; n--)//中间空格
			{
				cout<<" ";

			}//中间空格结束
			cout<<character
				<<"\n";
			tmp4--;//减少中间空格
			tmp3++;//增加前方空格
		}
	}//基数头部结束
	//头部结束
	//底部开始
	if(evenodd == 0 )//偶数底部
	{
		int tmp2 = tmp1/2-1;//行数
		int tmp3 = tmp2;//前空格=行数i
		int tmp4=tmp2-1;//数据传递-中间空格使用
		int tmp5,tmp6 = tmp4;//数据传递-中间空格使用
		for(int n = 0; n < tmp2; n++)//列出行
		{
			
			for(int n = tmp3; n > 0; n--)//前空格数
			{
				cout<<" ";
			}//空格数结束
			cout<<character;
			tmp5=tmp4*2-tmp6*2;//计算中间空格
			for(int n = tmp5; n >0; n--)//中间空格
			{
				cout<<" ";

			}//中间空格结束
			cout<<character
				<<"\n";
			tmp6--;//减少被减数-中空			
			tmp3--;//减少前方空格
		}
	}
	else
	{
		int tmp2 = (tmp1-1)/2-1;//行数
		int tmp3 = tmp2;//前空格=行数i
		int tmp4=tmp2;//数据传递-中间空格使用
		int tmp5,tmp6 = tmp4;//数据传递-中间空格使用
		for(int n = 0; n < tmp2+1; n++)
		{
			cout<<" ";
		}cout<<character
			<<"\n";
		for(int n = 0; n < tmp2; n++)//列出行
		{
			
			for(int n = tmp3; n > 0; n--)//前空格数
			{
				cout<<" ";
			}//空格数结束
			cout<<character;
			tmp5=tmp4*2-tmp6*2;//计算中间空格
			for(int n = tmp5+1; n >0; n--)//中间空格
			{
				cout<<" ";

			}//中间空格结束
			cout<<character
				<<"\n";
			tmp6--;//减少被减数-中空			
			tmp3--;//减少前方空格
		}
	}




	while(tmp1>0)//最后排
	{
		tmp1--;
		cout<<character;
	}cout<<"\n";
	//最后一排结束
	cout<<"\nDo you want to draw again?(y/n): ";
	cin>>onemore;
	if((onemore == 'y')||(onemore == 'Y'))//再一次
	{ oneMore =1 ;}
	else{ oneMore = 0;}
	//再一次结束
}		