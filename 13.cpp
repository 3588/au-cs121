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
	int a,b;//aʮλ��,b��λ��
	a = number/10;//ȡֵ-ʮλ��
	b = number%10;//ȡֵ-��λ��

	//ת�����ֵ���ĸ
	if (number > 19)//20-99����
	{
	switch(a)//ʮλ��ת��
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

	}//ʮλ��ת������
	switch(b)//��λ��ת��
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

	}//��λ��ת������

	}//20-99�������
	else//0-20������ֵ
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
//0-9����
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
		//0-9�������
		}//0-20������ֵ����

	}
}