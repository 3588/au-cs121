#include <iostream>
#include <string>
using namespace std;
void drawTriangle (string, int);
void drawSquare (string, int);
int typeDraw;//图像风格-1三角,2正方形,3退出
string typeBrush;
int typeHeight;
int main()
{
	while(1)
	{
		cout<<"Welcome to the drawing program!\n\n"
			<<"Please select from the following menu:\n"
			<<"1. Draw a triangle\n2. Draw a square\n3. Exit the program\n\n"
			<<"Please input your selection: ";
		cin>>typeDraw;
		if((typeDraw != 1)&&(typeDraw != 2))//退出
		{
			break;
		}
		cout<<"Please input a character for you brush: ";
		cin>>typeBrush;
		cout<<"Plese enter the height of your triangle: ";
		cin>>typeHeight;
		if(typeHeight == 0)//行数出错
		{
			break;
		}
		if(typeDraw == 1)//三角形
		{
			drawTriangle(typeBrush, typeHeight);
		}
		if(typeDraw == 2)//正方形
		{
			drawSquare(typeBrush, typeHeight);
		}
		
	}
	cout<<"Bye!";
	return 0;
}
void drawTriangle (string typeBrush, int typeHeight)
{
	if (typeHeight == 1)//一行处理
	{
		cout<<typeBrush
			<<"\n\n";
	}//一行处理结束
	else//多于一行
	{
		for (int n=1; n < typeHeight; n++)//第一行
		{
			cout<<" ";
		}cout<<typeBrush
			<<"\n";//第一行结束
		int konGe = 1;//中间空格
		int tmp3 = typeHeight-2;//传递数值-前空格数
		for(int n = 0; n < typeHeight - 2; n++)//列出行
		{
			
			for(int n = tmp3; n > 0; n--)//前空格数
			{
				cout<<" ";
			}//空格数结束
			cout<<typeBrush;//通过		
			for(int n = 0; n < konGe; n++)//中间空格
			{
				cout<<" ";				

			}//中间空格结束
			cout<<typeBrush
				<<"\n";
			//减少被减数-中空
			konGe = konGe + 2;//增加中间空格
			tmp3--;//减少前方空格
		}//列出行结束
		for(int n = 0; n < typeHeight*2-1; n++)
		{
			cout<<typeBrush;
		}cout<<"\n";//底部
	}//多于一行结束
	
}//处理三角形结束

void drawSquare(string typeBrush, int typeHeight)
{
	if (typeHeight == 1)//一行处理
	{
		cout<<typeBrush
			<<"\n\n";
	}//一行处理结束
	else{
	int konGe = 1;//中间空格
	for (int n=0; n<typeHeight-2; n++)
		{
			konGe = konGe + 2;
		}//中间空格结束
	for(int n = 0; n<typeHeight; n++)//第一排
	{
		cout<<typeBrush<<" ";
	}cout<<"\n";//第一排结束
	for(int n=0; n<typeHeight-2; n++)//列出行
	{
		cout<<typeBrush;
		
		for(int n = 0; n < konGe; n++)//中间空格
			{
				cout<<" ";				

			}//中间空格结束
		cout<<typeBrush
			<<"\n";
		//增加中间空格
	}//列出行结束
	for(int n = 0; n<typeHeight; n++)//最后排
	{
		cout<<typeBrush<<" ";
	}cout<<"\n";//最后排结束
	}
}
