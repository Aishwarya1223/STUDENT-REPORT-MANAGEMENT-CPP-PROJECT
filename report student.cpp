#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<string>
#include <windows.h>
#include <iomanip>
#define setw 25
#define max 20
using namespace std;

class student_details {
	public:
		int i,n,o,j,s[10],n1,n2,num;
		struct student {
			string name;
			string usn;
			string course;
			int marks[10];
			string result;
			float percentage;
			int sum;
		} stud[max],stud2;
	private:
		int dm,dunc,res;
		string nusn,nname,ncourse,usnno;
		int no,stdno,count,count2,p,u,m;
		int pos,c,h,f;
		string password,adpassword,spassword,spassword1,fpassword,fpassword1,adpassword1;
		char cpasscode[10],cpcode[10];
		string pass,pass1,password2,pass2;
		char ch,match[20];
		string user,user1,admin,faculty;
		string key1;
		string input,temp;
		int choice;


	public:
		void admin_signup();
		void admin_login();
		void faculty_login();
		void student_login(int);
		void password_user();
		void getdata(int);
		void insert(int);
		void modification(int);
		void search(int);
		void replace(int);
		void delete_rec(int);
		void display(int);
		void password_change(int);
};
void student_details::admin_signup()
{
	HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
	int ch1;
	cout<<"\n\n\n";
	cout<<"\t\t\t\t\t\t-------------\n";
	cout<<"\t\t\t\t\t\t|ADMIN SIGNUP PAGE|\n";
	cout<<"\t\t\t\t\t\t-------------\n";
	cout<<"\n\n";
	cout<<"\t\t\t\t|USERNAME|\n\t\t\t\t: ";
	cin>>admin;
	cout<<"\t\t\t\t|PASSWORD|\n\t\t\t\t: ";
	while(true)
	{
		ch=getch();
		if(ch==8)
		{
			adpassword.erase(adpassword.size() - 1);
			cout<<"\b \b";
		}
		else if(ch=='\r')
		{
			goto confirm4;
		}
		else
		{
		adpassword.push_back(ch);
		cout<<"*";
		}
	}
	confirm4:
	cout<<"\n\t\t\t\t|Confirm new password|\n\t\t\t\t: ";
	while(true)
	{
		ch=getch();
		if(ch=='\r')
		{
			break;
		}
		else if(ch==8)
		{
			pass1.erase(pass1.size() - 1);
			cout<<"\b \b";
		}
		else 
		{
			pass1.push_back(ch);
			cout<<"*";
		}
	}
	if(pass1==adpassword)
	{
		goto signup;
	}
	else {
		system("cls");
		adpassword.clear();
		pass1.clear();
		SetConsoleTextAttribute(h,15);
		cout<<"\n\n\n";
		cout<<"\t\t\t\t\t\t-------------\n";
		cout<<"\t\t\t\t\t\t|ADMIN SIGNUP PAGE|\n";
		cout<<"\t\t\t\t\t\t-------------\n";
		cout<<"\n\n";
		SetConsoleTextAttribute(h,4);//red
		cout<<"\t\t\t\t!Passwords are not matching\n\n";
		SetConsoleTextAttribute(h,15);
		cout<<"\t\t\t\t|Enter new user|\n\t\t\t\t: ";
		cout<<admin;
	cout<<"\n\t\t\t\t|Enter a new password|\n\t\t\t\t: ";
	while(true)
	{
		ch=getch();
		if(ch==8)
		{
			adpassword.erase(adpassword.size() - 1);
			cout<<"\b \b";
		}
		else if(ch=='\r')
		{
			goto confirm8;
		}
		else
		{
		adpassword.push_back(ch);
		cout<<"*";
		}
	}
	confirm8:
	cout<<"\n\t\t\t\t|Confirm new password|\n\t\t\t\t: ";
	while(true)
	{
		ch=getch();
		if(ch=='\r')
		{
			goto signup;
		}
		else if(ch==8)
		{
			pass1.erase(pass.size() - 1);
			cout<<"\b \b";
		}
		else 
		{
			pass1.push_back(ch);
			cout<<"*";
		}
	}
	}
			signup:
			while(1)
			{
				system("cls");
				cout<<"\n\n\n";
				cout<<"\t\t\t\t-----------------------------------------\n";
				if(!fpassword.empty())
				{
					SetConsoleTextAttribute(h,2);
				cout<<"\t\t\t\t|1.FACULTY SIGN UP\t\t\t|\n";
				SetConsoleTextAttribute(h,15);
				}
				else
				{
					cout<<"\t\t\t\t|1.FACULTY SIGN UP\t\t\t|\n";
				}
				if(!spassword.empty())
				{
					SetConsoleTextAttribute(h,2);
				cout<<"\t\t\t\t|2.STUDENT SIGN UP\t\t\t|\n";
				SetConsoleTextAttribute(h,15);
				}
				else
				cout<<"\t\t\t\t|2.STUDENT SIGN UP\t\t\t|\n";
				cout<<"\t\t\t\t|3.NEXT->\t\t\t\t|\n";
				cout<<"\t\t\t\t-----------------------------------------\n";
				cout<<"\t\t\t\t|Enter your choice(1/2/3)|: ";
				cin>>ch1;
				switch(ch1)
				{
					case 1:system("cls");
					cin.ignore();
					       cout.flush();
					       fpassword.clear();
								pass1.clear();
							cout<<"\n\n\n";
							cout<<"\t\t\t\t\t\t-----------------------\n";
							cout<<"\t\t\t\t\t\t|FACULTY SIGNUP PAGE|\n";
							cout<<"\t\t\t\t\t\t-----------------------\n";
							cout<<"\n\n";
							cout<<"\t\t\t\t|USERNAME|\n\t\t\t\t: ";
							cin>>faculty;
							cout<<"\t\t\t\t|PASSWORD|\n\t\t\t\t: ";
							while(true)
							{
							ch=getch();
							if(ch==8)
							{
							 fpassword.erase(fpassword.size() - 1);
							 cout<<"\b \b";
							 }
							  else if(ch=='\r')
							  {
							  goto f1confirm;
							  }
							  else
							  {
							  fpassword.push_back(ch);
							  cout<<"*";
							  }
							  }
							  f1confirm:
							  cout<<"\n\t\t\t\t|Confirm new password|\n\t\t\t\t: ";
							  while(true)
							  {
							  ch=getch();
							  if(ch=='\r')
							  {
		   				         break;
							  }
							  else if(ch==8)
							  {
							   pass1.erase(pass1.size() - 1);
							   cout<<"\b \b";
							   }
							   else 
							   {
							   pass1.push_back(ch);
							   cout<<"*";
							   }
							   }
							   if(pass1==fpassword)
							   {
  					                goto signup;
								}
							else{
								fpassword.clear();
								pass1.clear();
								system("cls");
								cout<<"\n\n\n";
							cout<<"\t\t\t\t\t\t-----------------------\n";
							cout<<"\t\t\t\t\t\t|FACULTY SIGNUP PAGE|\n";
							cout<<"\t\t\t\t\t\t-----------------------\n";
							cout<<"\n\n";
							SetConsoleTextAttribute(h,4);//red
							cout<<"\t\t\t\t!Passwords are not matching\n\n";
							SetConsoleTextAttribute(h,15);
							cout<<"\t\t\t\t|PASSWORD|\n\t\t\t\t: ";
							while(true)
							{
							ch=getch();
							if(ch==8)
							{
							 fpassword.erase(fpassword.size() - 1);
							 cout<<"\b \b";
							 }
							  else if(ch=='\r')
							  {
							  goto f2confirm;
							  }
							  else
							  {
							  fpassword.push_back(ch);
							  cout<<"*";
							  }
							  }
							  f2confirm:
							  cout<<"\n\t\t\t\t|Confirm new password|\n\t\t\t\t: ";
							  while(true)
							  {
							  ch=getch();
							  if(ch=='\r')
							  {
		   				         break;
							  }
							  else if(ch==8)
							  {
							   pass1.erase(pass1.size() - 1);
							   cout<<"\b \b";
							   }
							   else 
							   {
							   pass1.push_back(ch);
							   cout<<"*";
							   }
							   }
							   if(pass1==fpassword)
							   {
							   	goto signup;
								}
							}
							break;
		            case 2:system("cls");
							cout<<"\n\n\n";
							cout<<"\t\t\t\t\t\t-------------\n";
							cout<<"\t\t\t\t\t\t|STUDENT LOGIN PAGE|\n";
							cout<<"\t\t\t\t\t\t-------------\n";
							cout<<"\n\n";
							cout<<"\t\t\t\t|ENTER THE PASSWORD FOR STUDENT|\n\t\t\t\t: ";
							while(true)
							{
							ch=getch();
							if(ch==8)
							{
							 spassword.erase(spassword.size() - 1);
							 cout<<"\b \b";
							 }
							  else if(ch=='\r')
							  {
							  goto sconfirm;
							  }
							  else
							  {
							  spassword.push_back(ch);
							  cout<<"*";
							  }
							  }
							  sconfirm:
							  cout<<"\n\t\t\t\t|Confirm new password|\n\t\t\t\t: ";
							  while(true)
							  {
							  ch=getch();
							  if(ch=='\r')
							  {
		   				         break;
							  }
							  else if(ch==8)
							  {
							   pass2.erase(pass2.size() - 1);
							   cout<<"\b \b";
							   }
							   else 
							   {
							   pass2.push_back(ch);
							   cout<<"*";
							   }
							   }
							   if(pass2==spassword)
							   {
							   	goto signup;
								}
							if(pass2!=spassword)
							{
								cout<<"\n\n\n";
							cout<<"\t\t\t\t\t\t-------------\n";
							cout<<"\t\t\t\t\t\t|NEW STUDENT LOGIN PAGE|\n";
							cout<<"\t\t\t\t\t\t-------------\n";
							cout<<"\n\n";
							SetConsoleTextAttribute(h,4);//red
							cout<<"\t\t\t\t!Passwords are not matching\n\n";
							SetConsoleTextAttribute(h,15);
							cout<<"\t\t\t\t|ENTER THE PASSWORD FOR STUDENT|\n\t\t\t\t: ";
							while(true)
							{
							ch=getch();
							if(ch==8)
							{
							 spassword.erase(spassword.size() - 1);
							 cout<<"\b \b";
							 }
							  else if(ch=='\r')
							  {
							  goto confirm;
							  }
							  else
							  {
							  spassword.push_back(ch);
							  cout<<"*";
							  }
							  }
							  confirm:
							  cout<<"\n\t\t\t\t|Confirm new password|\n\t\t\t\t: ";
							  while(true)
							  {
							  ch=getch();
							  if(ch=='\r')
							  {
		   				         break;
							  }
							  else if(ch==8)
							  {
							   pass2.erase(pass2.size() - 1);
							   cout<<"\b \b";
							   }
							   else 
							   {
							   pass2.push_back(ch);
							   cout<<"*";
							   }
							   }
							   if(pass2==spassword)
							   {
							   	goto signup;
								}
							}
		            	   break;
   	                case 3:if(fpassword.empty() || spassword.empty())
 						   {
   	                	 	 SetConsoleTextAttribute(h,4);
   	                	     cout<<"\t\t\t\tSET BOTH THE PASSWORDS\n";
   	                	     SetConsoleTextAttribute(h,15);
   	                	     system("pause");
   	                	     goto signup;
				   		   }
				   		   else return;
   	                	   break;
              	   default:SetConsoleTextAttribute(h,4);
					 cout<<"\t\t\t\tInvalid choice\n";
					 SetConsoleTextAttribute(h,15);
				}
		}
	
}
void student_details::admin_login()
{
	HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
	int ch1;
	cout<<"\n\n\n";
	cout<<"\t\t\t\t\t\t-------------\n";
	cout<<"\t\t\t\t\t\t|ADMIN LOGIN PAGE|\n";
	cout<<"\t\t\t\t\t\t-------------\n";
	cout<<"\n\n";
	cout<<"\t\t\t\t|USERNAME|\n\t\t\t\t: ";
	cin>>admin;
	cout<<"\t\t\t\t|PASSWORD|\n\t\t\t\t: ";
	while(true)
	{
		ch=getch();
		if(ch==8)
		{
			adpassword1.erase(adpassword1.size() - 1);
			cout<<"\b \b";
		}
		else if(ch=='\r')
		{
			break;
		}
		else
		{
		adpassword1.push_back(ch);
		cout<<"*";
		}
	}
	if(adpassword1==adpassword)
	{
		return;
	}
	else {
		system("cls");
		adpassword1.clear();
		SetConsoleTextAttribute(h,15);
		cout<<"\n\n\n";
		cout<<"\t\t\t\t\t\t-------------\n";
		cout<<"\t\t\t\t\t\t|ADMIN LOGIN PAGE|\n";
		cout<<"\t\t\t\t\t\t-------------\n";
		cout<<"\n\n";
		SetConsoleTextAttribute(h,4);//red
		cout<<"\t\t\t\t!Passwords are not matching\n\n";
		SetConsoleTextAttribute(h,15);
		cout<<"\t\t\t\t|Enter new user|\n\t\t\t\t: ";
		cout<<admin;
	cout<<"\n\t\t\t\t|Enter a new password|\n\t\t\t\t: ";
	while(true)
	{
		ch=getch();
		if(ch==8)
		{
			adpassword1.erase(adpassword1.size() - 1);
			cout<<"\b \b";
		}
		else if(ch=='\r')
		{
			break;
		}
		else
		{
		adpassword1.push_back(ch);
		cout<<"*";
		}
		if(adpassword1==adpassword)
		{
		return;
		}
	}
}
}
void student_details::faculty_login()
{
	HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
 	fpassword1.clear();
	cout<<"\n\n\n";
	cout<<"\t\t\t\t\t\t-------------\n";
	cout<<"\t\t\t\t\t\t|FACULTY LOGIN PAGE|\n";
	cout<<"\t\t\t\t\t\t-------------\n";
	cout<<"\n\n";
	cout<<"\t\t\t\t|USERNAME|\n\t\t\t\t: ";
	cin>>user1;
	cout<<"\t\t\t\t|PASSWORD|\n\t\t\t\t: ";
	while(true)
							{
							ch=getch();
							if(ch==8)
							{
							 fpassword1.erase(fpassword1.size() - 1);
							 cout<<"\b \b";
							 }
							  else if(ch=='\r')
							  {
							  break;
							  }
							  else
							  {
							  fpassword1.push_back(ch);
							  cout<<"*";
							  }
							  }
	if(fpassword1==fpassword && user1==faculty )
	{
		return;
	}
		else {
		elsepart:
		system("cls");
		SetConsoleTextAttribute(h,15);
		cout<<"\n\n\n";
		cout<<"\t\t\t\t\t\t-------------\n";
		cout<<"\t\t\t\t\t\t|FACULTY LOGIN PAGE|\n";
		cout<<"\t\t\t\t\t\t-------------\n";
		cout<<"\n\n";
		SetConsoleTextAttribute(h,4);//red
		cout<<"\t\t\t\t!WRONG PASSWORD\n\n";
		SetConsoleTextAttribute(h,15);
		cout<<"\t\t\t\t|USERNAME|\n\t\t\t\t: ";
		cout<<user1;
		fpassword1.clear();
		cout<<"\n\t\t\t\t|PASSWORD|\n\t\t\t\t: ";
		while(true)
		{
		ch=getch();
		if(ch==8)
		{
	 fpassword1.erase(fpassword1.size() - 1);
	 cout<<"\b \b";
	 }
  else if(ch=='\r')
  {
  break;
  }
  else
  {
  fpassword1.push_back(ch);
  cout<<"*";
  }
  }
	if(fpassword1==fpassword)
	{
	    return;
	}
}
}
void student_details::student_login(int ch1)
{
	HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
	usnno.clear();
	cout.flush();
	cin.ignore();
	if(ch1==3)
	{
	elogin:
	system("cls");
	cout<<"\n\n\n";
		cout<<"\t\t\t\t\t\t-------------------\n";
		cout<<"\t\t\t\t\t\t    |RESULTS|\n";
		cout<<"\t\t\t\t\t\t-------------------\n";
		cout<<"\n\n";
		cout<<"\t\t\t\t|USN NO|: ";
		cin>>usnno;
		
		if(usnno.length()!=stud[i].usn.length())
		{
	        SetConsoleTextAttribute(h,4);
			cout<<"\t\t\t\tInvalid Student USN NO\n\t\t\t\tNote: (USN NUMBER contains 10 characters)\n";
			SetConsoleTextAttribute(h,15);
			goto elogin;
		}
				passwordask:
	         cout<<"\t\t\t\t|PASSWORD|: ";
			 cin>>pass;
			 if(pass!=spassword)
			 {
			SetConsoleTextAttribute(h,4);
			cout<<"\t\t\t\t!WRONG PASSWORD\n";
			SetConsoleTextAttribute(h,15);
			goto elogin;
		 }
			  if(usnno<=stud[num].usn){
				cout<<"\n";
				for(i=1;i<=num;i++)
				{
					if(usnno==stud[i].usn)
					{
				cout<<"\t\t--------------------------------------------------\n";
				cout<<"\t\tStudent usn\t\t:\t"<<stud[i].usn<<"\n";
				cout<<"\n\t\tStudent name\t\t:\t"<<stud[i].name<<"\n";
				cout<<"\n\t\tStudent course\t\t:\t"<<stud[i].course<<"\n";
				for(j=1; j<=n; j++) {
					cout<<"\n\t\tMarks in subject "<<j<<"\t:\t"<<stud[i].marks[j]<<"\n";
				}
				cout<<"\n\t\tTotal Marks\t\t:\t"<<stud[i].sum<<"\n";
				cout<<"\n\t\tPercentage\t\t:\t"<<stud[i].percentage<<"%"<<"\n";
				cout<<"\t\t--------------------------------------------------";
				if(stud[i].result=="FAIL")
			    {
				
				SetConsoleTextAttribute(h,4);
				cout<<"\n\t\tResult\t\t\t:\t"<<stud[i].result<<"\n";
				SetConsoleTextAttribute(h,15);
			    }
			    else if(stud[i].result=="PASS")
			   {
				SetConsoleTextAttribute(h,2);
				cout<<"\n\t\tResult\t\t\t:\t"<<stud[i].result<<"\n";
				SetConsoleTextAttribute(h,15);
			   }
				cout<<"\t\t--------------------------------------------------\n";
				cout<<"\n";
			}
			}
}
else {
				SetConsoleTextAttribute(h,4);
				cout<<"\nSorry could not search!....."<<"USN NO: "<<usnno<<" RECORDS DOES NOT EXIST\n\n";
				SetConsoleTextAttribute(h,15);
				return;
				}	
}
system("pause");
}
void student_details::password_user() {
	HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
	cout<<"\n\n\n";
	cout<<"\t\t\t\t\t\t-------------\n";
	cout<<"\t\t\t\t\t\t|SIGN UP PAGE|\n";
	cout<<"\t\t\t\t\t\t-------------\n";
	cout<<"\n\n";
	cout<<"\t\t\t\t|Enter new user|\n\t\t\t\t: ";
	cin>>user;
	password.clear();
	pass.clear();
	cin.ignore();
	cout.flush();
	cout<<"\t\t\t\t|Enter a new password|\n\t\t\t\t: ";
	while(true)
	{
		ch=getch();
		if(ch==8)
		{
			password.erase(password.size() - 1);
			cout<<"\b \b";
		}
		else if(ch=='\r')
		{
			goto confirm;
		}
		else
		{
		password.push_back(ch);
		cout<<"*";
		}
	}
	confirm:
	cout<<"\n\t\t\t\t|Confirm new password|\n\t\t\t\t: ";
	while(true)
	{
		ch=getch();
		if(ch=='\r')
		{
			break;
		}
		else if(ch==8)
		{
			pass.erase(pass.size() - 1);
			cout<<"\b \b";
		}
		else 
		{
			pass.push_back(ch);
			cout<<"*";
		}
	}
	
	
	check1:
	if(pass==password) {
		SetConsoleTextAttribute(h,15);
		return;
	}
	else {
		system("cls");
		SetConsoleTextAttribute(h,15);
		cout<<"\n\n\n";
		cout<<"\t\t\t\t\t\t-------------\n";
		cout<<"\t\t\t\t\t\t|SIGN UP PAGE|\n";
		cout<<"\t\t\t\t\t\t-------------\n";
		cout<<"\n\n";
		SetConsoleTextAttribute(h,4);//red
		cout<<"\t\t\t\t!Passwords are not matching\n\n";
		SetConsoleTextAttribute(h,15);
		cout<<"\t\t\t\t|Enter new user|\n\t\t\t\t: ";
		cout<<user;
	password.clear();
	pass.clear();
	cout<<"\n\t\t\t\t|Enter a new password|\n\t\t\t\t: ";
	while(true)
	{
		ch=getch();
		if(ch==8)
		{
			password.erase(password.size() - 1);
			cout<<"\b \b";
		}
		else if(ch=='\r')
		{
			goto confirm2;
		}
		else
		{
		password.push_back(ch);
		cout<<"*";
		}
	}
	confirm2:
	cout<<"\n\t\t\t\t|Confirm new password|\n\t\t\t\t: ";
	while(true)
	{
		ch=getch();
		if(ch=='\r')
		{
			break;
		}
		else if(ch==8)
		{
			pass.erase(pass.size() - 1);
			cout<<"\b \b";
		}
		else 
		{
			pass.push_back(ch);
			cout<<"*";
		}
	}
	 	goto check1;
	}
	}
void student_details::getdata(int ch) {
	HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
	cin.ignore();
	cout<<"Enter the password: ";
	cin>>pass;
	
		if(ch == 1)
		{
		if(pass==adpassword)
		{
			goto enterdata;
		}
		else
		{
			SetConsoleTextAttribute(h,4);
			cout<<"\nYOU ARE LOGGED IN AS ADMIN\nENTER THE CORRECT PASSWORD\n\n";
			SetConsoleTextAttribute(h,15);
		}
	 }
	else if(ch == 2)
	{
		if(pass==fpassword)
		{
			goto enterdata;
		}
		else
		{
			SetConsoleTextAttribute(h,4);
			cout<<"\nYOU ARE LOGGED IN AS FACULTY\nENTER THE CORRECT PASSWORD\n\n";
			SetConsoleTextAttribute(h,15);
		}
	 }	
 	 if(count>3) {
			SetConsoleTextAttribute(h,4);
				cout<<"\nYou have entred incorrect password too many times TRY AGAIN LATER...\n\n";
				SetConsoleTextAttribute(h,15);
				return;
			}
	enterdata:
		cout<<"Enter the no of students: ";
		cin>>num;
		if(num>10)
		{
			SetConsoleTextAttribute(h,4);
			cout<<"\nAPPLICATION CAN TAKE UPTO 10 STUDENTS ONLY\n\n";
			SetConsoleTextAttribute(h,15);
			goto enterdata;
		}
		for(i=1; i<=num; i++) {
			SetConsoleTextAttribute(h,14);
			cout<<"\n\nEnter the student "<<i<<" Information:\n\n";
			SetConsoleTextAttribute(h,15);
			cout<<"NOTE: Enter the 10 characters USN NO\n\n";
		usn:
			cout<<"Student usn no\t:\t";
			cin>>stud[i].usn;
			if(stud[i].usn.length()==10) {
				goto studdetails;
			} else {
				SetConsoleTextAttribute(h,4);
				cout<<"USN NO is not equal to 10 characters(Enter again).....\n";
				SetConsoleTextAttribute(h,15);
				goto usn;
			}
		studdetails:
			cout<<"\nStudent name\t:\t";
			cin.ignore();
			getline(cin,stud[i].name);
			cout<<"\nStudent course\t:\t";
			cin>>stud[i].course;
		

		n=6;
		cout<<"\nEnter the student marks in all the 6 subjects\n";
			cout<<"Enter the marks of Student "<<stud[i].usn<<"\n";
			for(j=1; j<=n; j++) {
				cout<<"\nEnter the marks in sub "<<j<<" : ";
				cin>>stud[i].marks[j];
			}
			for(j=1; j<=n; j++) {
			if(stud[i].marks[j]>=35  || stud[i].sum>=210 )
				   {
							stud[i].result="PASS";
				   }
				   else if(stud[i].marks[j]<35)
				   {
						stud[i].result="FAIL";
						break;
				   }

		}
	}
		cin.ignore();
		cout.flush();
			for(i=1;i<=num;i++)
			{
			for(j=1;j<=n;j++)
			{
				stud[i].sum+=stud[i].marks[j];
			}
				}
				for(i=1;i<=num;i++)
				{
					stud[i].percentage=((float)stud[i].sum*100)/600;
				}			
}
	 
void student_details::insert(int ch) {
	HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);	
	for(count=1; count<=3; count++) {
		cout<<"Enter the password: ";
		cin>>pass;
	if(ch == 1)
	{
		if(pass==adpassword)
		{
			goto enterdata;
		}
		else
		{
			SetConsoleTextAttribute(h,4);
			cout<<"\nYOU ARE LOGGED IN AS ADMIN\nENTER THE CORRECT PASSWORD\n\n";
			SetConsoleTextAttribute(h,15);
		}
	 }
	else if(ch == 2)
	{
		if(pass==fpassword)
		{
			goto enterdata;
		}
		else
		{
			SetConsoleTextAttribute(h,4);
			cout<<"\nYOU ARE LOGGED IN AS FACULTY\nENTER THE CORRECT PASSWORD\n\n";
			SetConsoleTextAttribute(h,15);
		}
	 }	
}
 	 if(count>3) {
			SetConsoleTextAttribute(h,4);
				cout<<"\nYou have entred incorrect password too many times TRY AGAIN LATER...\n\n";
				SetConsoleTextAttribute(h,15);
				return;
			}
	enterdata:
		cout<<"Enter the New student Information:\n\n";
		cout<<"NOTE: Enter the 10 characters USN NO\n\n";
		
	usn1:
		cout<<"Student usn no\t:\t";
		cin>>stud2.usn;
		if(stud2.usn.length()==10) {
			goto studdetails1;
		} else {
			SetConsoleTextAttribute(h,4);
			cout<<"USN NO is not equal to 10 characters(Enter again).....\n";
			SetConsoleTextAttribute(h,15);
			goto usn1;
		}
	studdetails1:
		cout<<"\nStudent name\t:\t";
		cin.ignore();
		getline(cin,stud2.name);
		cout<<"\nStudent course\t:\t";
		cin>>stud2.course;

	
		n=6;
		cout.flush();
		cin.ignore();
		cout<<"\nEnter the student marks in all the 6 subjects\n";

		cout<<"Enter the marks of Student "<<stud2.usn<<"\n";
		for(j=1; j<=n; j++) 
		{
			cout<<"\nEnter the marks in sub "<<j<<" : ";
			cin>>stud2.marks[j];
		}
		for(j=1; j<=n; j++) 
		{
		if(stud2.marks[j]>=35 || stud2.sum>=210)
				{
					stud2.result="PASS";
				}
				else if(stud2.marks[j]<35 || stud2.sum<210)
				{
					stud2.result="FAIL";
					
			    }
		}
		cin.ignore();
		stud2.sum=0;
		stud2.percentage=0;
			for(j=1;j<=n;j++)
			{
				stud2.sum+=stud2.marks[j];
			}
			stud2.percentage=((float)stud2.sum*100)/600;
			
			
		pos=0;
		cout<<"Existing Records\n";
		for(i=1;i<=num;i++)
		{
			cout<<i<<". "<<stud[i].usn<<"\n";
		}
		again11:
		cout<<"Enter the position to insert the data\n";
		cin>>pos;
		
		if(pos<=num+1 && pos>0)
		{
			num++;

		for (i = num; i >= pos; i--) {
			stud[i]= stud[i - 1];
		}
		stud[pos]=stud2;
		SetConsoleTextAttribute(h,2);
		cout<<"\nStudent "<<stud2.usn<<" record has been successfully added at position "<<pos<<" in the existing records\n\n";
		SetConsoleTextAttribute(h,15);
		return;
	}
	else
	{
		SetConsoleTextAttribute(h,4);
		cout<<"Invalid Position number\nEnter again....\n";
		SetConsoleTextAttribute(h,15);
		goto again11;
		
	}	
	system("pause");
	}
void student_details::modification(int ch) {
	HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
	for(count=1; count<=3; count++) {
		cout<<"Enter the password: ";
		cin>>pass;
	if(ch == 1)
	{
		if(pass==adpassword)
		{
			break;
		}
		else
		{
			SetConsoleTextAttribute(h,4);
			cout<<"\nYOU ARE LOGGED IN AS ADMIN\nENTER THE CORRECT PASSWORD\n";
			SetConsoleTextAttribute(h,15);
		}
	 }
	else if(ch == 2)
	{
		if(pass==fpassword)
		{
			break;
		}
		else
		{
			SetConsoleTextAttribute(h,4);
			cout<<"\nYOU ARE LOGGED IN AS FACULTY\nENTER THE CORRECT PASSWORD\n";
			SetConsoleTextAttribute(h,15);
		}
	 }	
}
 if(count>3) {
			SetConsoleTextAttribute(h,4);
				cout<<"\nYou have entred incorrect password too many times TRY AGAIN LATER...\n\n";
				SetConsoleTextAttribute(h,15);
				return;
			}
	mainmodify:
		cout<<"\nWhat do you want to modify?\n";
		while(1) {
			cout<<"1.Basic Details(usn,name,course)\n2.marks(sub1,sub2....subn)\n3.<-Back\nEnter your option (1/2/3): ";
			cin>>dm;
			switch(dm) {
				case 1:
					cout<<"Basic Details\n";

					cout.flush();
					cin.ignore();
					cout<<"1.Select usn numbers\n2.<-Back\nEnter your choice(1/2): ";
					cin>>choice;
					switch(choice) {
						case 1:cout.flush();
							for(i=1; i<=num; i++)
								if(usnno.length()!=stud[i].usn.length() || usnno!=stud[i].usn) {

									for(i=1; i<=num; i++) {
										cout<<i<<". "<<stud[i].usn<<endl;
									}
								}

								enter:cout.flush();
								cout<<"Enter the Index no: ";
								cin>>u;
									for(i=1; i<=num; i++) {
										if(u==i) {
											cout<<"USN NO: "<<stud[u].usn<<" is selected\n";
											goto optionenter;
											break;
												}
									}
							if(i>num) {
								cout<<"Index no does not exist\n";
								goto enter;
							}


						case 2:
								return;
								break;
						default:SetConsoleTextAttribute(h,4);
							cout<<"Invalid Choice\n";
							SetConsoleTextAttribute(h,15);
					}




				optionenter:
					while(1) {
						cout<<"1.Usn no\n2.Name\n3.course\n4.<-Back\nEnter your option (1/2/3/4): ";
						cin>>dunc;
						cout<<"\n---BASIC DETAILS---\n\n";
						switch(dunc) {
							case 1:
								for(i=1; i<=num; i++) {
									if(usnno==stud[i].usn || u==i ) {
									usnnoagain:
										cout<<"\nEnter the new usn no: ";
										cin>>nusn;
										if(nusn.length()!=stud[i].usn.length()) {
											SetConsoleTextAttribute(h,4);
											cout<<"Invalid usn no Note:(USN NO should contain 10 characters)\n";
											SetConsoleTextAttribute(h,15);
											goto usnnoagain;
										} else 
										{
											stud[i].usn=nusn;
											SetConsoleTextAttribute(h,2);
											cout<<"\nUSN NO has been successfully updated\n\n";
											SetConsoleTextAttribute(h,15);
										}
									}
								}

								break;
							case 2:
								for(i=1; i<=num; i++) {
									if(u==i) {
										cout<<"\nEnter new name: ";
										cin.ignore();
										getline(cin,nname);
										stud[i].name=nname;
										SetConsoleTextAttribute(h,2);
										cout<<"\nNAME has been successfully updated\n\n";
										SetConsoleTextAttribute(h,15);
									}
								}
								break;
							case 3:
								for(i=1; i<=num; i++) {
									if(u==i) {
										cout<<"\nEnter new course name: ";
										cin>>ncourse;
										stud[i].course=ncourse;
										SetConsoleTextAttribute(h,2);
										cout<<"\nCOURSE has been successfully updated\n\n";
										SetConsoleTextAttribute(h,15);
									}
								}
								break;
							case 4:
								goto mainmodify;
								break;
							default:SetConsoleTextAttribute(h,4);
								cout<<"Invalid choice\n";
								SetConsoleTextAttribute(h,15);
						}
					}
					break;
				case 2:
					cout<<"\n---MARKS UPDATION---\n\n";
					cout<<"Select the USN NO:\n";
					cout.flush();
					for(i=1; i<=num; i++) {
						cout<<i<<". "<<stud[i].usn<<endl;
					}
					goto usnnnoo;
				usnnnoo:
					cout<<"Enter the index no : ";
					cin>>u;
					for(i=1; i<=num; i++) {
						if(u==i) {
							cout<<"USN NO: "<<stud[u].usn<<" is selected\n";
							break;
						}
					}
					if(i>num) {
						SetConsoleTextAttribute(h,4);
						cout<<"The index no does not exist\n";
						SetConsoleTextAttribute(h,15);
						goto usnnnoo;

					}
					for(;;) {
						cout<<"1.Subject 1\n2.Subject 2\n3.Subject 3\n4.Subject 4\n5.Subject 5\n6.Subject 6\n7.<-Back\nEnter the subject no:";
						cin>>j;
						switch(j) {
							case 1:
								cout<<"Subject 1\n";
								cout<<"Enter the new marks: ";
								cin>>s[j];
								stud[i].marks[j]=s[j];
								if(stud[i].marks[j]<35)
								{
									stud[i].result="FAIL";
								}
								else
								{
									stud[i].result="PASS";
								}
								SetConsoleTextAttribute(h,2);
								cout<<"\nSubject 1 marks of student "<<stud[u].usn<<" has been successfully updated\n\n";
								SetConsoleTextAttribute(h,15);
								break;
							case 2:
								cout<<"Subject 2\n";
								cout<<"Enter the new marks: ";
								cin>>s[j];
								stud[i].marks[j]=s[j];
								if(stud[i].marks[j]<35)
								{
									stud[i].result="FAIL";
								}
								else
								{
									stud[i].result="PASS";
								}
								SetConsoleTextAttribute(h,2);
								cout<<"\nSubject 2 marks of student "<<stud[u].usn<<" has been successfully updated\n\n";
								SetConsoleTextAttribute(h,15);
								break;
							case 3:
								cout<<"subject 3\n";
								cout<<"Enter the new marks: ";
								cin>>s[j];
								stud[i].marks[j]=s[j];
								if(stud[i].marks[j]<35)
								{
									stud[i].result="FAIL";
								}
								else
								{
									stud[i].result="PASS";
								}
								SetConsoleTextAttribute(h,2);
								cout<<"\nSubject 3 marks of student "<<stud[u].usn<<" has been successfully updated\n\n";
								SetConsoleTextAttribute(h,15);
								break;
							case 4:
								cout<<"subject 4\n";
								cout<<"Enter the new marks: ";
								cin>>s[j];
								stud[i].marks[j]=s[j];
								if(stud[i].marks[j]<35)
								{
									stud[i].result="FAIL";
								}
								else
								{
									stud[i].result="PASS";
								}
								SetConsoleTextAttribute(h,2);
								cout<<"\nSubject 4 marks of student "<<stud[u].usn<<" has been successfully updated\n\n";
								SetConsoleTextAttribute(h,15);
								break;
							case 5:
								cout<<"subject 5\n";
								cout<<"Enter the new marks: ";
								cin>>s[j];
								stud[i].marks[j]=s[j];
								if(stud[i].marks[j]<35)
								{
									stud[i].result="FAIL";
								}
								else
								{
									stud[i].result="PASS";
								}
								SetConsoleTextAttribute(h,2);
								cout<<"\nSubject 5 marks of student "<<stud[u].usn<<" has been successfully modified\n\n";
								SetConsoleTextAttribute(h,15);
								break;
							case 6:
								cout<<"subject 6\n";
								cout<<"Enter the new marks: ";
								cin>>s[j];
								stud[i].marks[j]=s[j];
								if(stud[i].marks[j]<35)
								{
									stud[i].result="FAIL";
								}
								else
								{
									stud[i].result="PASS";
								}
								SetConsoleTextAttribute(h,2);
								cout<<"\nSubject 6 marks of student "<<stud[u].usn<<" has been successfully modified\n\n";
								SetConsoleTextAttribute(h,15);
								break;
							case 7:
								goto mainmodify;
								break;
							default:SetConsoleTextAttribute(h,4);
								cout<<"Subject does not exist\n";
								SetConsoleTextAttribute(h,15);
						}
					}
				case 3:
					return;
					break;
				default:SetConsoleTextAttribute(h,4);
					cout<<"Invalid choice\n";
					SetConsoleTextAttribute(h,15);
			}
		}
}
void student_details::search(int ch) {
	HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
	for(count=1; count<=3; count++) {
		cout<<"Enter the password: ";
		cin>>pass;
	if(ch == 1)
	{
		if(pass==adpassword)
		{
			break;
		}
		else
		{
			SetConsoleTextAttribute(h,4);
			cout<<"\nYOU ARE LOGGED IN AS ADMIN\nENTER THE CORRECT PASSWORD\n";
			SetConsoleTextAttribute(h,15);
		}
	 }
	else if(ch == 2)
	{
		if(pass==fpassword)
		{
			break;
		}
		else
		{
			SetConsoleTextAttribute(h,4);
			cout<<"\nYOU ARE LOGGED IN AS FACULTY\nENTER THE CORRECT PASSWORD\n";
			SetConsoleTextAttribute(h,15);
		}
	 }	
}
 if(count>3) {
			SetConsoleTextAttribute(h,4);
				cout<<"\nYou have entred incorrect password too many times TRY AGAIN LATER...\n\n";
				SetConsoleTextAttribute(h,15);
				return;
			}
	searchdata:
		for(i=1;i<=num;i++)
					{
						cout<<i<<"."<<stud[i].usn<<endl;
					}
		cout<<"Enter the student USN NO: ";
		cin>>usnno;
		studentd:
		for(i=1; i<=num; i++) {
			if(usnno.length()!=stud[i].usn.length()) {
				SetConsoleTextAttribute(h,4);
				cout<<"Invalid Student USN NO\nNote: (USN NUMBER contains 10 characters)\n";
				SetConsoleTextAttribute(h,15);
				goto searchdata;
			} else
				goto displaysearch;
		}
		 
	displaysearch:
	cout.flush();
	cin.ignore();
		if(usnno<=stud[num].usn){
				cout<<"\n";
				for(i=1;i<=num;i++)
				{
					if(usnno==stud[i].usn)
					{
				cout<<"\t\t--------------------------------------------------\n";
				cout<<"\t\tStudent usn\t\t:\t"<<stud[i].usn<<"\n";
				cout<<"\n\t\tStudent name\t\t:\t"<<stud[i].name<<"\n";
				cout<<"\n\t\tStudent course\t\t:\t"<<stud[i].course<<"\n";
				for(j=1; j<=n; j++) {
					cout<<"\n\t\tMarks in subject "<<j<<"\t:\t"<<stud[i].marks[j]<<"\n";
				}
				cout<<"\n\t\tTotal Marks\t\t:\t"<<stud[i].sum<<"\n";
				cout<<"\n\t\tPercentage\t\t:\t"<<stud[i].percentage<<"%"<<"\n";
				cout<<"\t\t--------------------------------------------------";
			if(stud[i].result=="FAIL")
			{
				SetConsoleTextAttribute(h,4);
				cout<<"\n\t\tResult\t\t\t:\t"<<stud[i].result<<"\n";
				SetConsoleTextAttribute(h,15);
			}
			else
			{
				SetConsoleTextAttribute(h,2);
				cout<<"\n\t\tResult\t\t\t:\t"<<stud[i].result<<"\n";
				SetConsoleTextAttribute(h,15);
			}
				cout<<"\t\t--------------------------------------------------\n";
				cout<<"\n";
			}
			else {
				SetConsoleTextAttribute(h,4);
				cout<<"\nSorry could not search!....."<<"USN NO: "<<usnno<<" RECORDS DOES NOT EXIST\n\n";
				SetConsoleTextAttribute(h,15);
			}
			}
	system("PAUSE");
}
}

void student_details::delete_rec(int ch) {
	HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
	cout<<"Enter the password: ";
	cin>>pass;
	if(pass==adpassword || pass==fpassword) {
		deletedata:
		for(c=1;c<=3;c++)
		{
		cout<<"Enter the student USN NO to delete the records\n";
		cin>>usnno;
		for(i=1; i<=num; i++) {
			
			if(usnno.length()!=stud[i].usn.length()) {
				SetConsoleTextAttribute(h,4);
				cout<<"Invalid Student USN NO\nNote: (USNNO contain 10 characters)\n";
				SetConsoleTextAttribute(h,15);
			}else
				goto deleterec;
			}
		}
		if(c>3){
			SetConsoleTextAttribute(h,4);
				cout<<"\nYou have entered invalid USN NO too many times! TRY AGAIN LATER\n";
				SetConsoleTextAttribute(h,15);
				return; 
			}
	deleterec:
		for(i=1; i<=num; i++) {
			if(usnno==stud[i].usn) {
				break;
			}
		}
		if(usnno<=stud[num].usn) {
			stud[i]=stud[i+1];
		}

		else {
			SetConsoleTextAttribute(h,4);
			cout<<"Sorry ! could not delete USN NO : "<<usnno<<" DOES NOT EXIST\n";
			SetConsoleTextAttribute(h,15);
			return;
		}
		num--;
		SetConsoleTextAttribute(h,2);
		cout<<"\nRecords has been succesfully deleted\n\n";
		SetConsoleTextAttribute(h,15);
	} else {
		for(count=1; count<=3; count++) {
			SetConsoleTextAttribute(h,4);
			cout<<"Incorrect password ! Try again:\n";
			SetConsoleTextAttribute(h,15);
			cout<<"Enter the password: ";
			cin>>pass;
			if(pass==adpassword || pass==fpassword)
			goto deletedata;
			
			}
			if(count>3) {
				SetConsoleTextAttribute(h,4);
				cout<<"\nYou have entered incorrect password too many times TRY AGAIN LATER...\n\n";
				SetConsoleTextAttribute(h,15);
				return;

		}
}
}
void student_details::replace(int ch)
{
	HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
	if(num>1)
	{
	for(count=1; count<=3; count++) {
		cout<<"Enter the password: ";
		cin>>pass;
	if(ch == 1)
	{
		if(pass==adpassword)
		{
			break;
		}
		else
		{
			SetConsoleTextAttribute(h,4);
			cout<<"\nYOU ARE LOGGED IN AS ADMIN\nENTER THE CORRECT PASSWORD\n";
			SetConsoleTextAttribute(h,15);
		}
	 }
	else if(ch == 2)
	{
		if(pass==fpassword)
		{
			break;
		}
		else
		{
			SetConsoleTextAttribute(h,4);
			cout<<"\nYOU ARE LOGGED IN AS FACULTY\nENTER THE CORRECT PASSWORD\n";
			SetConsoleTextAttribute(h,15);
		}
	 }	
}
 if(count>3) {
			SetConsoleTextAttribute(h,4);
				cout<<"\nYou have entred incorrect password too many times TRY AGAIN LATER...\n\n";
				SetConsoleTextAttribute(h,15);
				return;
			}
	cin.ignore();
	cout.flush();
	if(pass==adpassword || pass==fpassword) {
		usnnodisplay:
			for(i=1;i<=num;i++)
			{
						cout<<i<<"."<<stud[i].usn<<endl;
			}
		epos:
		cout<<"\nENTER THE INDEX OF THE RECORD\n";
		cin>>i;
		if(i>0)
		{
		 	   for(i=1;i<=num;i++)
			   {		
      		        if(stud[u].usn==stud[i].usn)
					{
					    goto insertpos;
					}
		       }
		}
		else
		{
			SetConsoleTextAttribute(h,4);
				cout<<"\nInvalid index number\nEnter again:\n";
				SetConsoleTextAttribute(h,15);
				goto epos;
		}
		insertpos:
			i=u;
			pos=0;
		cout<<"Enter the position to insert the record\n";
		cin>>pos;
				if(pos<=num && pos>0)
				{
			 		 for (i = num; i >= pos; i--) {
					 	 stud2=stud[i];
		 		  		 stud[i]=stud[pos];
		 		  		 stud[pos]=stud2;
			 		  }
		 		  
				  	
				  SetConsoleTextAttribute(h,2);
				  cout<<"\nStudent "<<stud[u].usn<<" record has been successfully added at position "<<pos<<" in the existing records\n\n";
				  SetConsoleTextAttribute(h,15);				 
		  		  }
		else
		{
		 	SetConsoleTextAttribute(h,4);
			 cout<<"Invalid Position number\nEnter again....\n";
			 SetConsoleTextAttribute(h,15);
			 goto insertpos;
		}
	}
	else {
		for(count=1; count<=3; count++) {
			SetConsoleTextAttribute(h,4);
			cout<<"Incorrect password ! Try again:\n";
			SetConsoleTextAttribute(h,15);
			cout<<"Enter the password\n";
			cin>>pass;
			if(pass==adpassword || pass==fpassword)
			goto usnnodisplay;
			}if(count>3) {
				SetConsoleTextAttribute(h,4);
				cout<<"\nYou have entered incorrect password too many times TRY AGAIN LATER...\n\n";
				SetConsoleTextAttribute(h,15);
				return;
			}
	}
}
else {
	SetConsoleTextAttribute(h,4);
	cout<<"\nThere is only 1 record\nInsert more records to replace\n\n";
	SetConsoleTextAttribute(h,15);
	return;
}
}
void student_details::display(int ch) {
	HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
	cin.ignore();
	cout.flush();
	passc1:
	
	for(count=1; count<=3; count++) {
		cout<<"Enter the password: ";
		cin>>pass;
	if(ch == 1)
	{
		if(pass==adpassword)
		{
			break;
		}
		else
		{
			SetConsoleTextAttribute(h,4);
			cout<<"\nYOU ARE LOGGED IN AS ADMIN\nENTER THE CORRECT PASSWORD\n";
			SetConsoleTextAttribute(h,15);
		}
	 }
	else if(ch == 2)
	{
		if(pass==fpassword)
		{
			break;
		}
		else
		{
			SetConsoleTextAttribute(h,4);
			cout<<"\nYOU ARE LOGGED IN AS FACULTY\nENTER THE CORRECT PASSWORD\n";
			SetConsoleTextAttribute(h,15);
		}
	 }	
}
 if(count>3) {
			SetConsoleTextAttribute(h,4);
				cout<<"\nYou have entred incorrect password too many times TRY AGAIN LATER...\n\n";
				SetConsoleTextAttribute(h,15);
				return;
			}
			
	display:
		cout<<"\t\t--------------------------------------------------\n";
		cout<<"\t\t|\tStudent details\t                         |\n";
		cout<<"\t\t--------------------------------------------------\n";
		for(i=1; i<=num; i++) {
			cout<<"\t\tStudent usn\t\t:\t"<<stud[i].usn<<"\n";
			cout<<"\n\t\tStudent name\t\t:\t"<<stud[i].name<<"\n";
			cout<<"\n\t\tStudent course\t\t:\t"<<stud[i].course<<"\n";
			
			for(j=1; j<=n; j++) {
				cout<<"\n\t\tMarks in subject "<<j<<"\t:\t"<<stud[i].marks[j]<<"\n";
			}
			cout<<"\n\t\tTotal Marks\t\t:\t"<<stud[i].sum<<"\n";
			cout<<"\n\t\tPercentage\t\t:\t"<<stud[i].percentage<<"%"<<"\n";
			cout<<"\t\t--------------------------------------------------";
			if(stud[i].result=="FAIL")
			{
				
				SetConsoleTextAttribute(h,4);
				cout<<"\n\t\tResult\t\t\t:\t"<<stud[i].result<<"\n";
				SetConsoleTextAttribute(h,15);
			}
			else if(stud[i].result=="PASS")
			{
				SetConsoleTextAttribute(h,2);
				cout<<"\n\t\tResult\t\t\t:\t"<<stud[i].result<<"\n";
				SetConsoleTextAttribute(h,15);
			}
			cout<<"\t\t--------------------------------------------------\n";
			cout<<"\n";
		}
}

void student_details::password_change(int ch)
{
	HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
	int ch1;
	change:
	if(ch==1)
	{
	cin.ignore();
	cout.flush();
	cout<<"\n\t\t\t\tEnter the admin password: ";
	cin>>pass;
	cout<<"\n\n";
	if(pass==adpassword)
	{
	while(1)
	{
	            system("cls");
                cout<<"\t\t\t\t-----------------------------------------\n";				
				cout<<"\t\t\t\t|1.FACULTY PASSWORD\t\t\t|\n";
				cout<<"\t\t\t\t|2.STUDENT PASSWORD\t\t\t|\n";
				cout<<"\t\t\t\t|3.NEXT->\t\t\t\t|\n";
				cout<<"\t\t\t\t-----------------------------------------\n";
				cout<<"\t\t\t\t|Enter your choice(1/2/3)|: ";
				cin>>ch1;
				switch(ch1)
				{
					case 1:cout<<"\n\n\n";
							cout<<"\t\t\t\t\t\t-----------------------\n";
							cout<<"\t\t\t\t\t\t|FACULTY PASSWORD|\n";
							cout<<"\t\t\t\t\t\t-----------------------\n";
							cout<<"\n\n";
							fpassword.clear();
							pass1.clear();
						   while(true)
							{
							ch=getch();
							if(ch==8)
							{
							 fpassword.erase(fpassword.size() - 1);
							 cout<<"\b \b";
							 }
							  else if(ch=='\r')
							  {
							  goto f1confirm;
							  }
							  else
							  {
							  fpassword.push_back(ch);
							  cout<<"*";
							  }
							  }
							  f1confirm:
							  cout<<"\n\t\t\t\t|Confirm new password|\n\t\t\t\t: ";
							  while(true)
							  {
							  ch=getch();
							  if(ch=='\r')
							  {
		   				         break;
							  }
							  else if(ch==8)
							  {
							   pass1.erase(pass1.size() - 1);
							   cout<<"\b \b";
							   }
							   else 
							   {
							   pass1.push_back(ch);
							   cout<<"*";
							   }
							   }
							   if(pass1==fpassword)
							   {
  					               SetConsoleTextAttribute(h,2);
						   cout<<"\t\t\t\tFACULTY PASSWORD HAS BEEN SUCCESSFULLY CHANGED\n\n";
						   SetConsoleTextAttribute(h,15);
						   system("pause");
								}
							else{
								fpassword.clear();
								pass1.clear();
								system("cls");
								cout<<"\n\n\n";
							cout<<"\t\t\t\t\t\t-----------------------\n";
							cout<<"\t\t\t\t\t\t|FACULTY PASSWORD|\n";
							cout<<"\t\t\t\t\t\t-----------------------\n";
							cout<<"\n\n";
							SetConsoleTextAttribute(h,4);//red
							cout<<"\t\t\t\t!Passwords are not matching\n\n";
							SetConsoleTextAttribute(h,15);
							cout<<"\t\t\t\t|PASSWORD|\n\t\t\t\t: ";
							while(true)
							{
							ch=getch();
							if(ch==8)
							{
							 fpassword.erase(fpassword.size() - 1);
							 cout<<"\b \b";
							 }
							  else if(ch=='\r')
							  {
							  goto f2confirm;
							  }
							  else
							  {
							  fpassword.push_back(ch);
							  cout<<"*";
							  }
							  }
							  f2confirm:
							  cout<<"\n\t\t\t\t|Confirm new password|\n\t\t\t\t: ";
							  while(true)
							  {
							  ch=getch();
							  if(ch=='\r')
							  {
		   				         break;
							  }
							  else if(ch==8)
							  {
							   pass1.erase(pass1.size() - 1);
							   cout<<"\b \b";
							   }
							   else 
							   {
							   pass1.push_back(ch);
							   cout<<"*";
							   }
							   }
							   if(pass1==fpassword)
							   {
							   	SetConsoleTextAttribute(h,2);
						   cout<<"\t\t\t\tFACULTY PASSWORD HAS BEEN SUCCESSFULLY CHANGED\n\n";
						   SetConsoleTextAttribute(h,15);
						   system("pause");
								}
							}
						   break;
				   case 2:cout<<"\n\n\n";
							cout<<"\t\t\t\t\t\t-------------\n";
							cout<<"\t\t\t\t\t\t|STUDENT LOGIN PAGE|\n";
							cout<<"\t\t\t\t\t\t-------------\n";
							cout<<"\n\n";
							spassword.clear();
							pass2.clear();
							cout<<"\t\t\t\t|ENTER THE PASSWORD FOR STUDENT|\n\t\t\t\t: ";
							while(true)
							{
							ch=getch();
							if(ch==8)
							{
							 spassword.erase(spassword.size() - 1);
							 cout<<"\b \b";
							 }
							  else if(ch=='\r')
							  {
							  goto sconfirm;
							  }
							  else
							  {
							  spassword.push_back(ch);
							  cout<<"*";
							  }
							  }
							  sconfirm:
							  cout<<"\n\t\t\t\t|Confirm new password|\n\t\t\t\t: ";
							  while(true)
							  {
							  ch=getch();
							  if(ch=='\r')
							  {
		   				         break;
							  }
							  else if(ch==8)
							  {
							   pass2.erase(pass2.size() - 1);
							   cout<<"\b \b";
							   }
							   else 
							   {
							   pass2.push_back(ch);
							   cout<<"*";
							   }
							   }
							   if(pass2==spassword)
							   {
							   	SetConsoleTextAttribute(h,2);
						   cout<<"STUDENT PASSWORD HAS BEEN SUCCESSFULLY CHANGED\n\n";
						   SetConsoleTextAttribute(h,15);
								}
							if(pass2!=spassword)
							{
								cout<<"\n\n\n";
							cout<<"\t\t\t\t\t\t-------------\n";
							cout<<"\t\t\t\t\t\t|NEW STUDENT LOGIN PAGE|\n";
							cout<<"\t\t\t\t\t\t-------------\n";
							cout<<"\n\n";
							SetConsoleTextAttribute(h,4);//red
							cout<<"\t\t\t\t!Passwords are not matching\n\n";
							SetConsoleTextAttribute(h,15);
							cout<<"\t\t\t\t|ENTER THE PASSWORD FOR STUDENT|\n\t\t\t\t: ";
							while(true)
							{
							ch=getch();
							if(ch==8)
							{
							 spassword.erase(spassword.size() - 1);
							 cout<<"\b \b";
							 }
							  else if(ch=='\r')
							  {
							  goto confirm;
							  }
							  else
							  {
							  spassword.push_back(ch);
							  cout<<"*";
							  }
							  }
							  confirm:
							  cout<<"\n\t\t\t\t|Confirm new password|\n\t\t\t\t: ";
							  while(true)
							  {
							  ch=getch();
							  if(ch=='\r')
							  {
		   				         break;
							  }
							  else if(ch==8)
							  {
							   pass2.erase(pass2.size() - 1);
							   cout<<"\b \b";
							   }
							   else 
							   {
							   pass2.push_back(ch);
							   cout<<"*";
							   }
							   }
							   if(pass2==spassword)
							   {
							   	SetConsoleTextAttribute(h,2);
						   cout<<"\t\t\t\tSTUDENT PASSWORD HAS BEEN SUCCESSFULLY CHANGED\n\n";
						   SetConsoleTextAttribute(h,15);
								}
							}
							break;
					case 3:return;
					       break;
                    default:SetConsoleTextAttribute(h,4);
					cout<<"\t\t\t\tINVALID CHOICE\n\n";
                    SetConsoleTextAttribute(h,15);
						   
				}
	}
	
}
}
else if(ch==2)
{
 	 		  	 		    cout<<"\n\n\n";
							cout<<"\t\t\t\t\t\t-----------------------\n";
							cout<<"\t\t\t\t\t\t|FACULTY PASSWORD|\n";
							cout<<"\t\t\t\t\t\t-----------------------\n";
							cout<<"\n\n";
							fpassword.clear();
							pass1.clear();
							cout<<"\t\t\t\t|PASSWORD|\n\t\t\t\t: ";
						   while(true)
							{
							ch=getch();
							if(ch==8)
							{
							 fpassword.erase(fpassword.size() - 1);
							 cout<<"\b \b";
							 }
							  else if(ch=='\r')
							  {
							  goto fconfirm;
							  }
							  else
							  {
							  fpassword.push_back(ch);
							  cout<<"*";
							  }
							  }
							  fconfirm:
							  cout<<"\n\t\t\t\t|Confirm new password|\n\t\t\t\t: ";
							  while(true)
							  {
							  ch=getch();
							  if(ch=='\r')
							  {
		   				         break;
							  }
							  else if(ch==8)
							  {
							   pass1.erase(pass1.size() - 1);
							   cout<<"\b \b";
							   }
							   else 
							   {
							   pass1.push_back(ch);
							   cout<<"*";
							   }
							   }
							   if(pass1==fpassword)
							   {
  					               SetConsoleTextAttribute(h,2);
						   cout<<"\t\t\t\tFACULTY PASSWORD HAS BEEN SUCCESSFULLY CHANGED\n\n";
						   SetConsoleTextAttribute(h,15);
								}
							else{
								fpassword.clear();
								pass1.clear();
								system("cls");
								cout<<"\n\n\n";
							cout<<"\t\t\t\t\t\t-----------------------\n";
							cout<<"\t\t\t\t\t\t|FACULTY PASSWORD|\n";
							cout<<"\t\t\t\t\t\t-----------------------\n";
							cout<<"\n\n";
							SetConsoleTextAttribute(h,4);//red
							cout<<"\t\t\t\t!Passwords are not matching\n\n";
							SetConsoleTextAttribute(h,15);
							cout<<"\t\t\t\t|PASSWORD|\n\t\t\t\t: ";
							while(true)
							{
							ch=getch();
							if(ch==8)
							{
							 fpassword.erase(fpassword.size() - 1);
							 cout<<"\b \b";
							 }
							  else if(ch=='\r')
							  {
							  goto fconfirm2;
							  }
							  else
							  {
							  fpassword.push_back(ch);
							  cout<<"*";
							  }
							  }
							  fconfirm2:
							  cout<<"\n\t\t\t\t|Confirm new password|\n\t\t\t\t: ";
							  while(true)
							  {
							  ch=getch();
							  if(ch=='\r')
							  {
		   				         break;
							  }
							  else if(ch==8)
							  {
							   pass1.erase(pass1.size() - 1);
							   cout<<"\b \b";
							   }
							   else 
							   {
							   pass1.push_back(ch);
							   cout<<"*";
							   }
							   }
							   if(pass1==fpassword)
							   {
							   	SetConsoleTextAttribute(h,2);
						   cout<<"\t\t\t\tFACULTY PASSWORD HAS BEEN SUCCESSFULLY CHANGED\n\n";
						   SetConsoleTextAttribute(h,15);
								}
							}
}
 else
 {
 	SetConsoleTextAttribute(h,4);
 	cout<<"\t\t\t\tWRONG PASSWORD!\n\t\t\t\tENTER AGAIN\n";
 	SetConsoleTextAttribute(h,15);
 	goto change;
 }
}
int main() {
	int ch1,i,j,ch;
	string m,ans;
	string answero;
	student_details sd1;
	struct student ;
	sd1.stud[max];
	//sd1.password_user();
	sd1.admin_signup();
	HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
	loginpage:
		system("cls");
		cout<<"\n\n\n";
		cout<<"\t\t\t\t\t\t-------------\n";
		cout<<"\t\t\t\t\t\t|LOGIN PAGE|\n";
		cout<<"\t\t\t\t\t\t-------------\n";
		cout<<"\n\n";
		cout<<"\t\t\t\t-------------------------------------------------\n";
		cout<<"\t\t\t\t|1.ADMIN LOGIN\t\t\t\t\t|\n\t\t\t\t|2.FACULTY LOGIN\t\t\t\t|\n\t\t\t\t|3.STUDENT LOGIN\t\t\t\t|\n\t\t\t\t-------------------------------------------------\n\t\t\t\t|Enter your choice(1/2/3)|: ";
		cin>>ch1;
		system("cls");
		switch(ch1)
		{
			cout<<"\t\t\t\t-------------------------------------------------\n";
			case 1:
			sd1.admin_login();
				   goto mainswitch;
				   break;
            case 2:system("cls");
			sd1.faculty_login();
            	    break;
       	    case 3:system("cls");
			   for(sd1.i=1; sd1.i<=1; sd1.i++) {

					if(!sd1.stud[sd1.i].usn.empty()) {
			   		sd1.student_login(ch1);
			   		goto loginpage;
		   		}
		   		else{
		   			 SetConsoleTextAttribute(h,4);//red
							cout<<"\n\n";
							cout<<"\t\t\t\tSorry could not show!..... NO DATA ENTERED\n\t\t\t\tLOGIN AS ADMIN OR FACULTY\n\t\t\t\t\n";
							SetConsoleTextAttribute(h,15);
							system("pause");
							goto loginpage;
				   }
		   	}
       	    	   break;
            default:SetConsoleTextAttribute(h,4);
			cout<<"\t\t\t\tInvalid choice\n";
			SetConsoleTextAttribute(h,15);	       
				   
		}
	
	mainswitch:
	while(1) {
		cout.flush();
		cin.ignore();
		system("cls");
		cout<<"\t\t\t\t-------------------------------------------------\n";
		if(!sd1.stud[1].usn.empty())
		{
			SetConsoleTextAttribute(h,2);
			cout<<"\t\t\t\t|1.ENTER RECORD\t\t\t\t\t|\n";
			SetConsoleTextAttribute(h,15);
		}
		else
		cout<<"\t\t\t\t|1.ENTER RECORD\t\t\t\t\t|\n";
		cout<<"\t\t\t\t|2.INSERT RECORD\t\t\t\t|\n";
		cout<<"\t\t\t\t|3.MODIFY RECORDS\t\t\t\t|\n";
		cout<<"\t\t\t\t|4.SEARCH RECORD\t\t\t\t|\n";
		cout<<"\t\t\t\t|5.REPLACE RECORD POSITIONS\t\t\t|\n";
		cout<<"\t\t\t\t|6.DELETE RECORD\t\t\t\t|\n";
		cout<<"\t\t\t\t|7.DISPLAY\t\t\t\t\t|\n";
		cout<<"\t\t\t\t|8.LOGIN/LOGOUT\t\t\t\t\t|\n";
		cout<<"\t\t\t\t|9.PASSWORD RESET\t\t\t\t|\n";
		cout<<"\t\t\t\t|10.EXIT\t\t\t\t\t|\n";
		cout<<"\t\t\t\t-------------------------------------------------\n";
		cout<<"\t\t\t\t|Enter your choice|: ";
		cin>>ch;
		system("cls");
		switch(ch) {
			case 1:
				for(sd1.i=1; sd1.i<=1; sd1.i++) {

					if(!sd1.stud[sd1.i].usn.empty()) {
						SetConsoleTextAttribute(h,4);//red
						cout<<"\n\n";
						cout<<"\t\t\t\tNOTE : ALREADY THE DATA HAS BEEN ENTERED ! THE RECORDS WILL BE DELETED IF YOU CONTINUE\n ";
						SetConsoleTextAttribute(h,14); //yellow
						cout<<"\t\t\t\tARE YOU SURE YOU WANT TO CONTINUE?(y/yes)\n\t\t\t\t-> ";
						SetConsoleTextAttribute(h,15);//white
						cin>>answero;
						system("cls");
						if(answero=="y" || answero=="yes") {
							goto get1;
						} else goto mainswitch;
							
					} else {
					get1:
						cout<<"ENTER NEW RECORDS\n";
						sd1.getdata(ch1);
					}
				}
				cout<<"\n";
				break;
			case 2:
				for(i=1; i<=1; i++)
					for(j=1; j<=1; j++) {
						if(sd1.stud[i].usn.empty()) {
							SetConsoleTextAttribute(h,4);//red
							cout<<"\n\n";
							cout<<"\t\t\t\tSorry could not Insert New Rocord!..... NO DATA ENTERED \n\t\t\t\tSELECT 1ST OPTION TO ENTER DATA\n";
							SetConsoleTextAttribute(h,15);//white
							system("pause");
							goto mainswitch;
						} else	{
							cout<<"INSERT RECORD\n";
					         sd1.insert(ch1);
								  system("pause");
							}
							
						}
					cout<<"\n";
				break;
			case 3:
				for(i=1; i<=1; i++) {
					for(j=1; j<=1; j++) {
						if(sd1.stud[i].usn.empty()) {
							SetConsoleTextAttribute(h,4);
							cout<<"\n\n";
							cout<<"\t\t\t\tSorry could not modify!..... NO DATA ENTERED\n\t\t\t\tSELECT 1ST OPTION TO ENTER DATA\n";
							SetConsoleTextAttribute(h,15);
							system("pause");
							goto mainswitch;
						} else{
							sd1.modification(ch1);
							system("pause");
						}
					}
				}
				cout<<"\n";
				break;
			case 4:
				for(i=1; i<=1; i++) {
					for(j=1; j<=1; j++) {
						if(sd1.stud[i].usn.empty()) {
						cout<<"\n\n";
						SetConsoleTextAttribute(h,4);
							cout<<"\t\t\t\tSorry could not search!..... NO DATA ENTERED\n\t\t\t\tSELECT 1ST OPTION TO ENTER DATA\n";
							SetConsoleTextAttribute(h,15);
								system("pause");
							goto mainswitch;
						} else{
							cout<<"SEARCH RECORD\n";
							sd1.search(ch1);
							system("pause");
						}
							
					}
				}
				cout<<"\n";
				break;
			case 5:for(i=1; i<=1; i++) {
					for(j=1; j<=1; j++) {
						if(sd1.stud[i].usn.empty()) {
						cout<<"\n\n";
						SetConsoleTextAttribute(h,4);
							cout<<"\t\t\t\tSorry could not search!..... NO DATA ENTERED\n\t\t\t\tSELECT 1ST OPTION TO ENTER DATA\n";
							SetConsoleTextAttribute(h,15);
								system("pause");
							goto mainswitch;
						} else{
							cout<<"REPLACE RECORD POSITION\n";
							sd1.replace(ch1);
							system("pause");
						}
							
					}
				}
				cout<<"\n";
				break;
			case 6:
				for(i=1; i<=1; i++) {
					for(j=1; j<=1; j++) {
						if(sd1.stud[i].usn.empty() ) {
							SetConsoleTextAttribute(h,4);
							cout<<"\n\n";
							cout<<"\t\t\t\tSorry could not Delete!..... NO DATA ENTERED\n\t\t\t\tSELECT 1ST OPTION TO ENTER DATA\n";
							SetConsoleTextAttribute(h,15);
							system("pause");							
							goto mainswitch;
						} else
						{
							cout<<"DELETE RECORD\n";
							sd1.delete_rec(ch1);
							system("pause");
						}
					}
				}
				cout<<"\n";
				break;
			case 7:
				for(i=1; i<=1; i++) {
					for(j=1; j<=1; j++) {
						if(sd1.stud[i].usn.empty()) {
							SetConsoleTextAttribute(h,4);
							cout<<"\n\n";
							cout<<"\t\t\t\tSorry could not display!..... NO DATA ENTERED\n\t\t\t\tSELECT 1ST OPTION TO ENTER DATA\n";
							SetConsoleTextAttribute(h,15);
								system("pause");
							goto mainswitch;
						}
						else
						{
							cout<<"DISPLAY RECORD\n";
							sd1.display(ch1);
							system("pause");
						}
					}
				}
				cout<<"\n";
				break;
			case 8:goto loginpage;
 		           break;
			case 9:
			sd1.password_change(ch1);
					cout<<"\n";
					break;
			case 10:cout<<"\n\n";
			SetConsoleTextAttribute(h,14);
				cout<<"Are you sure you want to exit?(Press y/Y/yes/YES to exit or Press any character to continue....)\n";
				SetConsoleTextAttribute(h,2);//green
				cin>>ans;
				SetConsoleTextAttribute(h,15);//white
				if(ans=="y"||ans=="yes"||ans=="Y"|| ans=="YES")
					exit(0);
				else
				{
				 	SetConsoleTextAttribute(h,15);//white
				 	goto mainswitch;
				}
				cout<<"\n";
				
				break;
			default:SetConsoleTextAttribute(h,4);
				cout<<"\n\t\t\t\tInavlid choice\n\n";
				SetConsoleTextAttribute(h,15);
				system("pause");
		}
}
}
