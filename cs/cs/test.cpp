#include <iostream>
#include <fstream>//open file
#include <cstdlib>//check file
#include <string>
using namespace std;
int main()
	{
	ifstream in_t;
	in_t.open("conf1.dat");
	if(in_t.fail())//can't get uesr choose menu
		{
		cout<<"Sorry! Bug!!email to: jhuang@ashland.edu";
		exit(1);
		}
	int a_m;
	in_t>>a_m;//get user root.
	in_t.close();
	string file_n = ".txt";//ºó×º
	string first1;//Ç°×º
	string f_n;//full file name
	if(a_m==1)//admin
		{
		int a_t, c_a_t=0;//which user to del
		do{
		cout<<"What do you want to delete?\n"
			<<"1.Admin\n"
			<<"2.Teacher\n"
			<<"Please choose: ";
		cin>>a_t;
		cin.ignore(200,'\n');
		if(a_t==1||a_t==2)
			{
			c_a_t=0;
			}
		else
			{
			cout<<"Wrong choose!\n";
				c_a_t=1;
			}
			}while(c_a_t==1);
		if(a_t==1)
			{
			first1="A_";
			string u_name;
			cout<<"Enter admin user: ";
			cin>>u_name;//get user name
		f_n="";
		f_n.append(first1);
		f_n.append(u_name);
		f_n.append(file_n);
		ofstream o_dat;
		/*del a_user.txt*/
		o_dat.open("test.bat");
		o_dat<<"@echo off\n"
			<<"del "
			<<f_n<<endl;
		o_dat.close();
		system("test.bat");
		/*del a_user.txt*/
		/*del user in a_list.txt*/
		in_t.open("A_list.txt");
		o_dat.open("A_listtt.txt");
		string tmp_a;//get name from a_list.txt
		while(!in_t.eof())
			{
			in_t>>tmp_a;
			if(tmp_a==u_name)
				{
				o_dat<<"";
				}
			else
				{
				o_dat<<tmp_a<<"\n";
				}
			}
		in_t.close();
		o_dat.close();
		o_dat.open("test.bat");
		o_dat<<"@echo off\n"
			<<"copy A_listtt.txt A_list.txt /Y\n"
			<<"del A_list_t.txt\n";
		o_dat.close();
	//	system("test.bat");

		}
		else
			{}
		}
	}