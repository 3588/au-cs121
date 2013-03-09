/*
Junjun huang
Lab 11
11/21/2010
User Management
Database (txt)
*/
/*v0.1
1.user login
2.user check
3.defending guess(hacker)
4.check root(menu)
*/
/*v0.2
1.Add admin and teacher(name.txt,list.txt)
2.Add student(name.txt,list.txt)
3.Del admin and teacher(name.txt)
4.Del student(name.txt)
*/
/*v0.3
1.Del admin, teacher and stuend(list.txt)
2.View student
*/
/*v0.4
1.debug
2.del test mode
3.100 database test
*/
#include <iostream>
#include <fstream>//open file
#include <cstdlib>//check file
#include <string>
#include <stdlib.h>//test
void test_self();
void safecheck();//check safe
void firstTimeRun ();//frist  time run, make A_name.txt, A_list.txt, T_list.txt, S_list.txt 
void welcomeUse();
void login_ats(int&);//1. login choose user
void login_u_p(int, int&);//2 login check user
void no_guess();//defending guess
void login_menu(int, int&);
void after_menu();
void adat1();
void as1();
void ds1();
void vs1();
using namespace std;
int main()
	{
	test_self();
	safecheck();
	welcomeUse();
	char oneMore1 ='y';//main menu
	int a_t_s = 0, u_p = 0;//user permissions
	int menu_c;//main menu 
	do
		{		
		login_ats(a_t_s);
		login_u_p(a_t_s, u_p);
		cout<<"get u_p"<<u_p;//test
		login_menu(u_p, menu_c);
		cout<<"Menu_c: "<<menu_c;//test
		after_menu();
		}while(oneMore1 == 'y' || oneMore1 == 'Y');
	return 0; 
	}
void test_self()
	{
	ofstream o_dat;
	o_dat.open("test.bat");
	o_dat<<"@echo off\n"
		<<"del A_admin.txt\n"
		<<"del T_admin.txt\n"
		<<"del S_admin.txt\n"
		<<"del conf1.dat\n"
		<<"del conf2.dat\n";
	o_dat.close();
	system("test.bat");
	cout<<"Test mode(1 for yes): ";
	int tt_tt;
	cin>>tt_tt;
	cin.ignore(200,'\n');
	if(tt_tt==1)
		{
		o_dat.open("test.bat");
	o_dat<<"@echo off\n"
		<<"del error.txt\n";
	o_dat.close();
	system("test.bat");



		o_dat.open("T_admin.txt");
		o_dat<<"admin\n"
			<<"12345\n";
	o_dat.close();
	o_dat.open("S_admin.txt");
		o_dat<<"admin\n"
			<<"12345\n";
	o_dat.close();
		o_dat.open("A_admin.txt");
		o_dat<<"admin\n"
			<<"12345\n";
	o_dat.close();
		}
	
	}
void safecheck()
{
	ifstream oo_1;
	oo_1.open("error.txt");
	if (oo_1.fail())
		{
		firstTimeRun();
		}
	else
		{
		cout<<"Sorry! The program is lock\n"
			<<"Please contact Jhuang@ashland.edu\n";
		exit(1);
		}
	}
void firstTimeRun ()
	{

	ofstream o_2;//a_list.txt
	ofstream o_3;//t_list.txt
	ofstream o_4;//s_list.txt
	o_2.open("A_list.txt", ios::app);
	if(o_2.fail())//can't open
		{
		cout<<"********************\n"
			<<"Ashland  Univerisity\n"
			<<"User Management V0.1\n"
			<<"Database open failed\n"
			<<"Please colse Program\n"
			<<"Please colse Notepad\n"
			<<"     Try again\n"
			<<"If still open failed\n"
			<<"Email to: Jhuang@\n"
			<<"********************\n";
		}
	o_3.open("T_list.txt", ios::app);
	if(o_3.fail())//can't open
		{
		cout<<"********************\n"
			<<"Ashland  Univerisity\n"
			<<"User Management V0.1\n"
			<<"Database open failed\n"
			<<"Please colse Program\n"
			<<"Please colse Notepad\n"
			<<"     Try again\n"
			<<"If still open failed\n"
			<<"Email to: Jhuang@\n"
			<<"********************\n";
		}
	o_4.open("S_list.txt", ios::app);
	if(o_4.fail())//can't open
		{
		cout<<"********************\n"
			<<"Ashland  Univerisity\n"
			<<"User Management V0.1\n"
			<<"Database open failed\n"
			<<"Please colse Program\n"
			<<"Please colse Notepad\n"
			<<"     Try again\n"
			<<"If still open failed\n"
			<<"Email to: Jhuang@\n"
			<<"********************\n";
		}
	o_2.close();//a_list.txt
	o_3.close();//t_list.txt
	o_4.close();//s_list.txt
	}
void welcomeUse()
	{
	cout<<"********************\n"
		<<"Ashland  Univerisity\n"
		<<"User Management (Demo v0.1)\n"
		<<"Code By:Junjun Huang\n"
		<<"Test Admin User:admin(lowercase)\n"
		<<"Test Admin Password:12345\n"
		<<"********************\n";
	}
void login_ats(int& ats)
	{
	cout<<"********************\n"
		<<"User Login\n"
		<<"Choose user type\n";
	int t_check;
	do//check choose
		{
	cout<<"1.Admin\n"
		<<"2.Teacher\n"
		<<"3.Student\n"
		<<"4.Exit\n"
		<<"Please enter: ";
	cin>>ats;
	cin.ignore(200,'\n');
	if(ats==1||ats==2||ats==3||ats==4)
		{
		if(ats==4)
			{
			exit(1);
			}
		char t_check2;
		cout<<"The program will lock, if you choose admin or teacher, but enter wrong password 5 times.\n"
			<<"If move on next step, you can't back choose user type again\n"
			<<"You choose :"<<ats<<"\n"
			<<"It is right?";
		cin>>t_check2;
		cin.ignore(200,'\n');
		if(t_check2 == 'y'||t_check2=='Y')
			{t_check = 0;}
		else
			{t_check = 1;}
		}
	else
		{
		cout<<"You choose wrong number\n"
			<<"Please choose again\n";
		t_check = 1;
		}
		}while(t_check == 1);
		
	}
void login_u_p(int ats, int& up)
	{
	string user_n, user_p, f_n1;
	string file_n = ".txt";//后缀
	string first1;//前缀
	int check_at = 4, t_c_at_u=0, t_c_at_p=0;//defending guess

	if(ats==1)//admin check
		{
		ifstream in_a;
		first1 = "A_";		
		do
		{
		cout<<"please enter your user name\n";
		cin>>user_n;
		cin.ignore(200,'\n');
		f_n1 = "";
		f_n1.append(first1);
		f_n1.append(user_n);
		f_n1.append(file_n);
		in_a.open(f_n1);		
		if(in_a.fail())//no user
			{
			if(check_at!=0)
			{
			cout<<"Sorry! this admin not in database\n"
				<<"You have "<<check_at<<"times to try\n";
			check_at--;
			t_c_at_u=1;
			}
			else
				{
				no_guess();
				}
			}
		else
			{
			t_c_at_u=0;
			}
		}while(t_c_at_u==1);
		string admin_u, admin_p;
		in_a>>admin_u>>admin_p;
		in_a.close();//close
		do
		{
		cout<<"please enter your password for "<<admin_u<<" ";
		cin>>user_p;
		cin.ignore(200,'\n');
		if(user_p!=admin_p)//no password
			{
			if(check_at!=0)
			{
			cout<<"Sorry! this password wrong\n"
				<<"You have "<<check_at<<" times to try\n";
			check_at--;
			t_c_at_p=1;
			}
			else
				{
				no_guess();
				}
			}
		else
			{
			t_c_at_p=0;
			}
		}while(t_c_at_p==1);
		up=1;
		}
	if(ats==2)//teacher check
		{
		ifstream in_a;
		first1 = "T_";		
		do
		{
		cout<<"please enter your user name\n";
		cin>>user_n;
		cin.ignore(200,'\n');
		f_n1 = "";
		f_n1.append(first1);
		f_n1.append(user_n);
		f_n1.append(file_n);
		in_a.open(f_n1);
		if(in_a.fail())//no user
			{
			if(check_at!=0)
			{
			cout<<"Sorry! this teacher not in database\n"
				<<"You have "<<check_at<<" times to try\n";
			check_at--;
			t_c_at_u=1;
			}
			else
				{
				no_guess();
				}
			}
		else
			{
			t_c_at_u=0;
			}
		}while(t_c_at_u==1);
		string teacher_u, teacher_p;
		in_a>>teacher_u>>teacher_p;
		in_a.close();//close
		do
			{
		cout<<"please enter your password for "<<teacher_u;
		cin>>user_p;
		cin.ignore(200,'\n');
		if(user_p!=teacher_p)//no password
			{
			if(check_at!=0)
			{
			cout<<"Sorry! this password wrong\n"
				<<"You have "<<check_at<<" times to try\n";
			check_at--;
			t_c_at_p=1;
			}
			else
				{
				no_guess();
				}
			}
		else
			{
			t_c_at_p=0;
			}
		}while(t_c_at_p==1);
		up=2;
		}
	if(ats==3)//student check
		{
		ifstream in_a;
		first1 = "S_";		
		do
		{
		cout<<"please enter your name\n";
		cin>>user_n;
		cin.ignore(200,'\n');
		f_n1 = "";
		f_n1.append(first1);
		f_n1.append(user_n);
		f_n1.append(file_n);
		in_a.open(f_n1);
		if(in_a.fail())//no user
			{
			cout<<"Sorry! you are not in database\n"
				<<"If you want to stop program, hold Ctrl+C\n";
			t_c_at_u=1;
			}
		else
			{
			t_c_at_u=0;
			}
		}while(t_c_at_u==1);
		string student_u, student_p;
		in_a>>student_u>>student_p;
		in_a.close();//close

		ofstream o_1;
		o_1.open("conf1.dat");
		o_1<<student_u;
		o_1.close();
		
		do
		{
		cout<<"please enter your password for "<<student_u;
		cin>>user_p;
		cin.ignore(200,'\n');
		if(user_p!=student_p)//no password
			{			
			cout<<"Sorry! this password wrong\n"
				<<"If you wan to stop program, hold Ctrl+C\n";
			t_c_at_p=1;			
			}
		else
			{
			t_c_at_p=0;
			}
		}while(t_c_at_p==1);
		up=3;


		
		}
	}
void no_guess()
	{
	ofstream t_t;
	t_t.open("error.txt");
	t_t<<"Sorry! We don't like hacker\n"
		<<"if you aren't please contact\n"
		<<"jhuang@ashland.edu";
	t_t.close();
	cout<<"Sorry! We don't like hacker\n"
		<<"if you aren't please contact\n"
		<<"jhuang@ashland.edu";
	exit(1);
	}
void login_menu(int user, int& menu)
	{
	int t_check;
	cout<<"********************\n"
		<<"Success login\n"
		<<"Main Menu:\n";

		if(user==1)//admin menu
			{			
			do{
			cout<<"1.Management admin and teachetr\n"
				<<"2.Add student\n"
				<<"3.Del student\n"
				<<"4.View student\n"
				<<"Please choose: ";
			cin>>menu;
			cin.ignore(200,'\n');
			if(menu== 1||menu==2||menu==3||menu==4)//check root
				{
				t_check=0;
				}
			else
				{
				cout<<"Enter wrong!!\n";
				t_check=1;
				}
				}while(t_check==1);
			}
		if(user==2)//teacher menu
			{			
			do{
			cout<<"1.Add student\n"
				<<"2.Del student\n"
				<<"3.View student\n"
				<<"Please choose: ";
			cin>>menu;
			cin.ignore(200,'\n');
			if(menu== 1||menu==2||menu==3)//check root
				{
				t_check=0;
				if(menu==1)
					{
					menu=2;
					}
				if(menu==2)
					{
					menu=3;
					}
				if(menu==3)
					{
					menu=4;
					}
				}
			else
				{
				cout<<"Enter wrong!!\n";
				t_check=1;
				}
				}while(t_check==1);
			}
		if(user==3)//teacher menu
			{			
			do{
			cout
				<<"1.View student\n"
				<<"Please choose: ";
			cin>>menu;
			cin.ignore(200,'\n');
			if(menu== 1)//check root
				{
				t_check=0;
				if(menu==1)
					{
					menu=4;
					}
				}
			else
				{
				cout<<"Enter wrong!!\n";
				t_check=1;
				}
				}while(t_check==1);
			}
		ofstream o_1;
		o_1.open("conf2.dat");
		o_1<<menu;
		o_1.close();
	}
void after_menu()
	{
	ifstream in_t;
	in_t.open("conf2.dat");
	if(in_t.fail())
		{
		cout<<"Sorry! Bug!!email to: jhuang@ashland.edu";
		exit(1);
		}
	int a_m;
	in_t>>a_m;//get menu No.
	in_t.close();
	if(a_m==1)
		{
		adat1();
		}
	if(a_m==2)
		{
		as1();
		}
	if(a_m==3)
		{
		ds1();
		}
	if(a_m==4)
		{
		vs1();
		}
	}
void adat1()
	{
	int t_1, s_t=1;
	string file_n = ".txt";//后缀
	string first1;//前缀
	
	do
	{cout<<"********************\n"
		<<"Management admin and teachetr\n"
		<<"1.Add admin\n"
		<<"2.Add teacher\n"
		<<"3.View admin adn teacher\n"
		//del admin
		//del teacher
		<<"4.Back to Main Menu\n"
		<<"Please chooose; ";
	cin>>t_1;
	cin.ignore(200,'\n');
	if(t_1==1)
		{
		string f_n;
		first1 = "A_";
		string a_name, a_pass;
		int self_check=0;
		do
		{
		cout<<"Please enter admin user name: ";
		cin>>a_name;
		cin.ignore(200,'\n');
		f_n="";
		f_n.append(first1);
		f_n.append(a_name);
		f_n.append(file_n);
		ifstream in_f;
		in_f.open(f_n);
		if(in_f.fail())
			{
		cout<<"Please enter admin password; ";
		cin>>a_pass;
		cin.ignore(200,'\n');
			ofstream out_f;
			out_f.open(f_n);
			out_f<<a_name<<"\n"
				<<a_pass;
			out_f.close();
			out_f.open("A_list.txt",ios::app);
			out_f<<a_name<<"\n";
			out_f.close();
			self_check=0;
			}
		else
			{
			cout<<"This admin already in database.\n"
				<<"Please change your user name\n";
			self_check=1;
			}
		in_f.close();
		}while(self_check==1);


		}
	if(t_1==2)
		{
		string f_n;
		first1 = "T_";
		string a_name, a_pass;
		int self_check=0;
		do
		{
		cout<<"Please enter teacher user name: ";
		cin>>a_name;
		cin.ignore(200,'\n');
		f_n="";
		f_n.append(first1);
		f_n.append(a_name);
		f_n.append(file_n);
		ifstream in_f;
		in_f.open(f_n);
		if(in_f.fail())
			{
		cout<<"Please enter teacher password; ";
		cin>>a_pass;
		cin.ignore(200,'\n');
			ofstream out_f;
			out_f.open(f_n);
			out_f<<a_name<<"\n"
				<<a_pass;
			out_f.close();
			out_f.open("T_list.txt",ios::app);
			out_f<<a_name<<"\n";
			out_f.close();
			self_check=0;
			}
		else
			{
			cout<<"This teacher already in database.\n"
				<<"Please change your user name\n";
			self_check=1;
			}
		in_f.close();
		}while(self_check==1);


		}
	if(t_1==3)
		{
		cout<<"Admin List:\n";
		ifstream in_f;
		in_f.open("A_list.txt");
		while(!in_f.eof())
			{
			string t_t1;
			in_f>>t_t1;
			cout<<t_t1<<"\n";
			}
		in_f.close();
		cout<<"Teacher List:\n";
		in_f.open("T_list.txt");
		while(!in_f.eof())
			{
			string t_t1;
			in_f>>t_t1;
			cout<<t_t1<<"\n";
			}
		in_f.close();
		}
	if(t_1==4)
		{
		s_t=0;
		}
	}while(s_t==1);		
	}
void as1()
	{
	int t_1, s_t=1;
	string file_n = ".txt";//后缀
	string first1;//前缀
	
	do
	{
	cout<<"********************\n"
		<<"Add student Menu\n"
		<<"1. Add student\n"
		<<"2. Back to Main Menu\n"
		<<"Please chooose; ";
	cin>>t_1;
	cin.ignore(200,'\n');
		string f_n;
		first1 = "S_";
		string a_name_f, a_name_l, a_pass;

		int self_check=0;
		if(t_1==1)
			{
		do
		{
		cout<<"Please enter student name(Frist name and Last name): ";
		cin>>a_name_f>>a_name_l;
		cin.ignore(200,'\n');
		f_n="";
		f_n.append(first1);
		f_n.append(a_name_f);
		f_n.append(a_name_l);
		f_n.append(file_n);
		ifstream in_f;
		in_f.open(f_n);
		if(in_f.fail())
			{
		cout<<"Please enter student password; ";
		cin>>a_pass;
		cin.ignore(200,'\n');
			ofstream out_f;
			out_f.open(f_n);
			out_f<<a_name_f<<a_name_l<<"\n"<<a_pass;
			out_f.close();
			out_f.open("S_list.txt",ios::app);
			out_f<<a_name_f<<" "<<a_name_l<<"\n";
			out_f.close();
			self_check=0;
			}
		else
			{
			cout<<"This student already in database.\n"
				<<"Please change your student name\n";
			self_check=1;
			}
		in_f.close();
		}while(self_check==1);
			}
	if(t_1==2)
		{
		s_t=0;
		}
	}while(s_t==1);		
	}
void ds1()
	{
	cout<<"No, we do not have this feature. ";
	}
void vs1()
	{
	string file_n = ".txt";//后缀
	string first1;//前缀
	cout<<"Student List:\n";
		ifstream in_f;
		in_f.open("S_list.txt");
		while(!in_f.eof())
			{
			string t_t1, t_t2;
			char t_t;
			in_f>>t_t1>>t_t>>t_t2;
			cout<<t_t1<<t_t<<t_t2<<"\n";
			}
		in_f.close();
	}