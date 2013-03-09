#include <iostream>
using namespace std;
int main()
{
	char one_more = 'y';
	int d, m;
	cout<<"Welcome the game\n";
	while ((one_more == 'y')||(one_more == 'Y'))
	{
		cout<<"Enter the month";
		cin>>m;
		cout<<"Enter the day";
		cin>>d;
		if((m > 12)||(m < 1)||(d >31)||(d < 1))
		{
			cout<<"Error!\n"
				<<"one more?(y/n)";
			cin>>one_more;
			if ((one_more != 'y')|(one_more != 'Y'))
			{
				cout<<"Bye Bye!\n";
				break;
			}
		}


//sign
		if ((m == 3)&&(d >= 21)||(m == 4)&&(d <= 19))
		{
			if((m == 4)&&(20-d<=2))
			{
				cout<<"The birthday is on cusp\n"
					<<"The birehday is Aries\n"
					<<"the nearst adjacent sign is Taurus";
			}
			else 
			{
				cout<<"The birehday is Aries\n";
			}
		}

		if ((m == 4)&&(d >= 20)||(m == 5)&&(d <= 20))
		{
			if((m == 5)&&(21-d<=2))
			{
				cout<<"The birthday is on cusp\n"
					<<"The birehday is Taurus\n"
					<<"the nearst adjacent sign is Cemini";
			}
			else
			{
				cout<<"The birehday is Taurus\n";
			}
		}

		if ((m == 5)&&(d >= 21)||(m == 6)&&(d <= 21))
		{
			if((m == 6)&&(22-d<=2))
			{
				cout<<"The birthday is on cusp\n"
					<<"The birehday is Cemini\n"
					<<"the nearst adjacent sign is Cancer";
			}
			else
			{
				cout<<"The birehday is Cemini\n";
			}
		}
		if ((m == 6)&&(d >= 22)||(m == 7)&&(d <= 22))
		{
			if((m == 7)&&(23-d<=2))
			{
				cout<<"The birthday is on cusp\n"
					<<"The birehday is Cancer\n"
					<<"the nearst adjacent sign is Leo";
			}
			else
			{
				cout<<"The birehday is Cancer\n";
			}
		}

		if ((m == 7)&&(d >= 23)||(m == 8)&&(d <= 22))
		{
			if((m == 8)&&(23-d<=2))
			{
				cout<<"The birthday is on cusp\n"
					<<"The birehday is Leo\n"
					<<"the nearst adjacent sign is Virgo";
			}
			else
			{
				cout<<"The birehday is Leo\n";
			}
		}
		if ((m == 8)&&(d >= 23)||(m == 9)&&(d <= 22))
		{
			if((m == 9)&&(23-d<=2))
			{
				cout<<"The birthday is on cusp\n"
					<<"The birehday is Virgo\n"
					<<"the nearst adjacent sign is Libra";
			}
			else
			{
				cout<<"The birehday is Virgo\n";
			}
		}
		if ((m == 9)&&(d >= 23)||(m == 10)&&(d <= 22))
		{
			if((m == 10)&&(23-d<=2))
			{
				cout<<"The birthday is on cusp\n"
					<<"The birehday is Libra\n"
					<<"the nearst adjacent sign is Scorpio";
			}
			else
			{
				cout<<"The birehday is Libra\n";
			}
		}
		if ((m == 10)&&(d >= 23)||(m == 11)&&(d <= 21))
		{
			if((m == 11)&&(22-d<=2))
			{
				cout<<"The birthday is on cusp\n"
					<<"The birehday is Scorpio\n"
					<<"the nearst adjacent sign is Sagittarius";
			}
			else
			{
				cout<<"The birehday is Scorpio\n";
			}
		}
		if ((m == 11)&&(d >= 22)||(m == 12)&&(d <= 21))
		{
			if((m == 12)&&(22-d<=2))
			{
				cout<<"The birthday is on cusp\n"
					<<"The birehday is Sagittarius\n"
					<<"the nearst adjacent sign is Capricorn";
			}
			else
			{
				cout<<"The birehday is Sagittarius\n";
			}
		}
		if ((m == 12)&&(d >= 22)||(m == 1)&&(d <= 19))
		{
			if((m == 1)&&(20-d<=2))
			{
				cout<<"The birthday is on cusp\n"
					<<"The birehday is Capricorn\n"
					<<"the nearst adjacent sign is Aquarius";
			}
			else
			{
				cout<<"The birehday is Capricorn\n";
			}
		}
		if ((m == 1)&&(d >= 20)||(m == 2)&&(d <= 18))
		{
			if((m == 2)&&(19-d<=2))
			{
				cout<<"The birthday is on cusp\n"
					<<"The birehday is Aquarius\n"
					<<"the nearst adjacent sign is Pieces";
			}
			else
			{
				cout<<"The birehday is Aquarius\n";
			}
		}
		if ((m == 2)&&(d >= 19)||(m == 3)&&(d <= 20))
		{
			if((m == 3)&&(21-d<=2))
			{
				cout<<"The birthday is on cusp\n"
					<<"The birehday is Pieces\n"
					<<"the nearst adjacent sign is Aries";
			}
			else
			{
				cout<<"The birehday is Pieces\n";
			}
		}

		cout<<"\nOne more?(Y/N)";
		cin>>one_more;
	}
	cout<<"Bye Bye!\n";
	return 0;
}