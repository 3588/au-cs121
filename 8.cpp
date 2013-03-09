#include <iostream>
#include <fstream>//open file
#include <cstdlib>//check file
#include <string>
using namespace std;
void welcomeUser ();
void checkFile (int&);
void changeName(int);
void change_N(ifstream& , ofstream&, int);
int main()
	{
	int f_p_version;//1.free,2.pro
	char one_more='a';
	welcomeUser ();
	do{
	checkFile (f_p_version);
	changeName(f_p_version);
	if(f_p_version==2)
		{
		cout<<"Do you want generate again?\n";
		cin>>one_more;
		cin.ignore(200,'\n');
		if(one_more=='y'||one_more=='Y')
			{
			cout<<"Please save\nPro_Junk_mail1.txt\nPro_Junk_mail2.txt\nPro_Junk_mail3.txt\n"
				<<"The new file will overwrite the original file\n"
				<<"Are you sure you have saved them?\n";
			cin>>one_more;
			cin.ignore(200,'\n');		

			}
		}
		}while(one_more=='y'||one_more=='Y');
	}
void welcomeUser ()
	{
	cout<<"Welcome to use generate personalized junk mail.\n"
		<<"PS:Nobody like junk mail.\n";
	cout<<"************************************************************\n"
		<<"The free version only can use one email model\n"
		<<"The Pro version you can have 3 kinds of email model\n"
		<<"************************************************************\n";
	}
void checkFile (int& f_p_version)
	{
	int check_c_version=1;//check user enter
	do
	{
	cout<<"please enter which version you want to ues(free or pro)\n";
	char c_version;
	cin>>c_version;
	cin.ignore(200,'\n');
	if(c_version=='f'||c_version=='F')
		{
		cout<<"You choose free version. You only can use one email model\n";
		check_c_version=0;//enter ok
		f_p_version=1;//change the version to free
		}
	if(c_version=='p'||c_version=='P')
		{
		cout<<"You choose Pro version. You can have 3 email model\n"
			<<"Please enter the active code(test:123456)\n";
		int a_code=0;
		cin>>a_code;
		if(a_code==123456)
			{
		check_c_version=0;//enter ok
		f_p_version=2;//change the version to peo
			}
		}
	if(check_c_version==1)//enter wrong
		{
		cout<<"Sorry you enter wrong. please try again.\n";
		}
	}while(check_c_version);
	if(f_p_version==1)//free version
		{
		ofstream o_v_free;
		o_v_free.open("free.dat");		
			o_v_free<<"Re: McDonald's Meals for #N# \n"
				<<"--------------------------------------------------\n"
				<<"What's your favorite McDonald's menu item?\n"
				<<"We're inviting you to take our brief McDonald's Menu survey for $100 in McDonald's Arch Cards. (Participation required. See below for details.)\n"
				<<"We just need a few minutes of your time, simply click here to start.\n"
				<<"Your participation is greatly appreciated!\n"
				<<"Sincerely \n"
				<<"Free version\n";			
		o_v_free.close();
		}
	if(f_p_version==2)//pro version
		{
		ofstream o_v_pro;
		o_v_pro.open("pro_1.dat");
			o_v_pro<<"Dear #N#\n"
				<<"Shop for the HOLIDAYS!\n"
				<<"Get extra cash for Christmas! $1000\n"
				<<"Thank you #N#\n"
				<<"Please visit:";
				
		
		o_v_pro.close();
		o_v_pro.open("pro_2.dat");
		
			o_v_pro<<"Dear #N#\n"
				<<"Cash in as little as 1 Hour!\n"
				<<"Quick, Easy And Secure Online Application\n"
				<<"Thank you #N#\n"
				<<"Get Cash Now:";
				
			
		o_v_pro.close();
		o_v_pro.open("pro_3.dat");
		
			o_v_pro<<"Dear #N#\n"
				<<"Get a 720 Credit Score\n"
				<<"Industry Leader in Credit Repair.\n"
				<<"Guaranteed Results. Call Us Now!\n"
				<<"Thank you #N#\n"
				<<"Please visit:";
				
			
		o_v_pro.close();
		}
	}
void changeName(int v_v)
	{
	if(v_v==1)
		{ofstream o_f;
		ifstream i_f;
		o_f.open("Free_Junk_mail.txt");
		if(o_f.fail())
			{
			cout<<"Bug!1";
			exit(1);
			}
		i_f.open("free.dat");
		if(o_f.fail())
			{
			cout<<"Bug!2";
			exit(2);
			}
		change_N(i_f, o_f, v_v);	
		o_f.close();
		i_f.close();
		}
	if(v_v==2)
		{
		ofstream o_f;
		ifstream i_f;
		char show_mode;
		o_f.open("Pro_Junk_mail1.txt");
		if(o_f.fail())
			{
			cout<<"Bug!1";
			exit(1);
			}
		i_f.open("pro_1.dat");
		if(o_f.fail())
			{
			cout<<"Bug!2";
			exit(2);
			}
		cout<<"***********************************************\n"
			<<"The frist emil mode is(#N# is recipient name):\n";
		do{i_f.get(show_mode);
			cout.put(show_mode);}while(!i_f.eof());
			i_f.close();//the last line, close it
			i_f.open("pro_1.dat");//open for change_N
		change_N(i_f, o_f, v_v);	
		o_f.close();
		i_f.close();
		o_f.open("Pro_Junk_mail2.txt");
		if(o_f.fail())
			{
			cout<<"Bug!1";
			exit(1);
			}
		i_f.open("pro_2.dat");
		if(o_f.fail())
			{
			cout<<"Bug!2";
			exit(2);
			}
		cout<<"***********************************************\n"
			<<"The second  emil mode is(#N# is recipient name):\n";
		do{
			i_f.get(show_mode);
			cout.put(show_mode);}while(!i_f.eof());
			i_f.close();//the last line, close it
			i_f.open("pro_2.dat");//open for change_N
		change_N(i_f, o_f, v_v);	
		o_f.close();
		i_f.close();
		o_f.open("Pro_Junk_mail3.txt");
		if(o_f.fail())
			{
			cout<<"Bug!1";
			exit(1);
			}
		i_f.open("pro_3.dat");
		if(o_f.fail())
			{
			cout<<"Bug!2";
			exit(2);
			}
		cout<<"***********************************************\n"
			<<"The third emil mode is(#N# is recipient name):\n";
		do{
			i_f.get(show_mode);
			cout.put(show_mode);}while(!i_f.eof());
			i_f.close();//the last line, close it
			i_f.open("pro_3.dat");//open for change_N
		change_N(i_f, o_f, v_v);	
		o_f.close();
		i_f.close();
		}
	}

void change_N(ifstream& i_f, ofstream& o_f, int v_v)
	{
	string web_s;
	if(v_v==1)
		{
		cout<<"*************************************************\n"
			<<"This is free version.You can only change the name\n";
		}
	if(v_v==2)
		{
		cout<<"\n******************************************************************\n"
			<<"This is Pro version.You can change the name, and add you website\n";
		cout<<"Plese enter you website:\n";
		cin>>web_s;
		}
	cout<<"please enter recipient name(Frist name and Last name)\n";
				string t_name, t_name2;
				char t_t_t;
				cin>>t_name;//handle first name
				cin.get(t_t_t);//sapce
				cin>>t_name2;//handle last name

	char tmp1;//get word from file
	i_f.get(tmp1);
		int tmp_1=0;//check 1=first #, 2=after N, 3=after last # 
		while (!i_f.eof())
			{		
			if(tmp_1==1)//change N
				{
				o_f<<t_name;
				o_f.put(t_t_t);
				o_f<<t_name2;
				tmp_1=2;//change N done
				}
			if(tmp1=='#')//get #
				{				
				if(tmp_1==2)//the # after N, last #
					{
					o_f<<"";//del
					tmp_1=3;//last #
					}
				else//frist #
					{
				o_f<<"";//del
				tmp_1=1;//active change N
					}
				}
			if(tmp_1==0||tmp_1==3)//0=no #, 3=after last#
				{
				if(tmp_1==3)
					{
					tmp_1=0;//change to no #
					}
				else
					{
				o_f<<tmp1;//no change
					}
				}
			i_f.get(tmp1);
			}

		if(v_v==2)
		{
		o_f<<web_s;
		}
	}