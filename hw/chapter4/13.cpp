#include <iostream>
using namespace std;
void number2word (void);
int number = 99;
int main()
{	
	while(number)
	{
		number2word();
		cout<<" "
			<<"bottles of beer on the wall,\n";
		number2word();
		cout<<" "
			<<"bottles of beer,\n"
			<<"Take one down, pass it around,\n";
		number--;
	}
	cout<<"Zero bottles of beer on the wall.\n";
	return 0;
}
void number2word (void)
{
	int a,b;//a十位数,b个位数
	a = number/10;//取值-十位数
	b = number%10;//取值-个位数

	//转换数字到字母
	if (number > 19)//20-99处理
	{
	switch(a)//十位数转换
	{
		case 9:
		cout<<"Ninety";
		break;
		case 8:
		cout<<"Eighty";
		break;
		case 7:
		cout<<"Seventy";
		break;
		case 6:
		cout<<"Sixty";
		break;
		case 5:
		cout<<"Fifty";
		break;
		case 4:
		cout<<"Forty";
		break;
		case 3:
		cout<<"Thirty";
		break;
		case 2:
		cout<<"Twenty";
		break;
	default:
		break;

	}//十位数转换结束
	switch(b)//个位数转换
	{
		case 9:
		cout<<"-nine";
		break;
		case 8:
		cout<<"-eight";
		break;
		case 7:
		cout<<"-seven";
		break;
		case 6:
		cout<<"-six";
		break;
		case 5:
		cout<<"-five";
		break;
		case 4:
		cout<<"-four";
		break;
		case 3:
		cout<<"-three";
		break;
		case 2:
		cout<<"-two";
		break;
		case 1:
		cout<<"-one";
		break;
	default:
		break;

	}//个位数转换结束

	}//20-99处理结束
	else//0-20特殊数值
	{
		switch(number)
		{
		case 10:
			cout<<"Ten";
			break;
			case 11:
			cout<<"Eleven";
			break;
			case 12:
			cout<<"Twleve";
			break;
			case 13:
			cout<<"Thirteen";
			break;
			case 14:
			cout<<"Forteen";
			break;
			case 15:
			cout<<"Fifteen";
			break;
			case 16:
			cout<<"Sixteen";
			break;
			case 17:
			cout<<"Seventeen";
			break;
			case 18:
			cout<<"Eighteen";
			break;
			case 19:
			cout<<"Nineteen";
			break;
//0-9处理
			case 9:
		cout<<"nine";
		break;
		case 8:
		cout<<"eight";
		break;
		case 7:
		cout<<"seven";
		break;
		case 6:
		cout<<"six";
		break;
		case 5:
		cout<<"five";
		break;
		case 4:
		cout<<"four";
		break;
		case 3:
		cout<<"three";
		break;
		case 2:
		cout<<"two";
		break;
		case 1:
		cout<<"one";
		break;
		//0-9处理结束
		}//0-20特殊数值结束

	}
}