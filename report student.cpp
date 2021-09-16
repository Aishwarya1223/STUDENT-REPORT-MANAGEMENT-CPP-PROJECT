#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string>
#define max 20
using namespace std;

class student_details {
	public:
		int i,n,j,s[10],n1,n2,num;
		struct student {
			string name;
			string usn;
			string course;
			int marks[10];
			float percentage;
			int sum;
		} stud[max],stud2;
	private:
		int dm,dunc,res;
		string nusn,nname,ncourse,usnno;
		int no,stdno,count,count2,p,u,m;
		int pos,c,h,f;
		
		string password,pass,pass1,user,user1,password2;
		string key1;
		int choice;


	public:
		void password_user();
		void getdata();
		void insert();
		void modification();
		void search();
		void delete_rec();
		void display();
		void password_change();
};
void student_details::password_user() {
	cout<<"Enter new user\n";
	cin>>user;
passcode:
	cout<<"Enter a new password\n";
	cin>>password;
	cout<<"Confirm new password\n";
	cin>>pass1;
	if(pass1!=password) {
		cout<<"Password are not matching\n";
		goto passcode;
	}
}
void student_details::getdata() {
	cout<<"Enter the user name\n";
	cin>>user1;
	cout<<"Enter the password: ";
	cin>>pass;

	if(user==user1 && pass==password) {
	enterdata:
		cout<<"Enter the no of students: ";
		cin>>num;
		for(i=1; i<=num; i++) {
			cout<<"Enter the student "<<i<<" Information:\n\n";
			cout<<"NOTE: Enter the 10 characters USN NO\n\n";
		usn:
			cout<<"Student usn no\t:\t";
			cin>>stud[i].usn;
			if(stud[i].usn.length()==10) {
				goto studdetails;
			} else {
				cout<<"USN NO is not equal to 10 characters(Enter again).....\n";
				goto usn;
			}
		studdetails:
			cout<<"\nStudent name\t:\t";
			cin.ignore();
			getline(cin,stud[i].name);
			cout<<"\nStudent course\t:\t";
			cin>>stud[i].course;
		}


		n=6;
		cout<<"\nEnter the student marks in all the 6 subjects\n";
		for(i=1; i<=num; i++) {
			cout<<"Enter the marks of Student "<<stud[i].usn<<"\n";
			for(j=1; j<=n; j++) {
				cout<<"\nEnter the marks in sub "<<j<<" : ";
				cin>>stud[i].marks[j];
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


	} else {
		for(count=1; count<=3; count++) {
			cout<<"Incorrect user name or password Try again...\n";
			cout<<"Enter the user name\n";
			cin>>user1;
			cout<<"Enter the password: ";
			cin>>pass;
			if(user==user1 && pass==password)
				goto enterdata;
			else if(count>3)
				break;
		}
		if(count>3) {
			cout<<"\nYou Have entered Invalid username and password too many times TRY AGAIN LATER\n\n";
			return;
		}
	}
}
void student_details::insert() {
	cout<<"Enter the password: ";
	cin>>pass;

	if(pass==password) {
	enterdata:

		cout<<"Enter the New student Information:\n\n";
		cout<<"NOTE: Enter the 10 characters USN NO\n\n";
		
	usn1:
		cout<<"Student usn no\t:\t";
		cin>>stud2.usn;
		if(stud2.usn.length()==10) {
			goto studdetails1;
		} else {
			cout<<"USN NO is not equal to 10 characters(Enter again).....\n";
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
		
		if(pos<=num+1)
		{
			num++;

		for (i = num; i >= pos; i--) {
			stud[i]= stud[i - 1];
		}
		stud[pos]=stud2;
		
		cout<<"\nStudent "<<stud2.usn<<" record has been successfully added at position "<<pos<<" in the existing records\n\n";
	}
	else
	{
		cout<<"Invalid Position number\nEnter again....\n";
		goto again11;
		
	}


	} else {
		for(count=1; count<=3; count++) {
			cout<<"Incorrect password Try again...\n";
			cout<<"Enter the password: ";
			cin>>pass;
			if(pass==password)
				goto enterdata;
			else if(count>3)
				break;
		}
		if(count>3) {
			cout<<"\nYou Have entered Invalid password too many times TRY AGAIN LATER\n\n";
			return;
		}
	}
}
void student_details::modification() {
	cout<<"Enter the password: ";
	cin>>pass;
	if(pass==password) {
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
						default:
							cout<<"Invalid Choice\n";
					}




				optionenter:
					while(1) {
						cout<<"1.Usn no\n2.Name\n3.course\n4.<-Back\nEnter your option (1/2/3/4): ";
						cin>>dunc;
						switch(dunc) {
							case 1:
								for(i=1; i<=num; i++) {
									if(usnno==stud[i].usn || u==i ) {
									usnnoagain:
										cout<<"\nEnter the new usn no: ";
										cin>>nusn;
										if(nusn.length()!=stud[i].usn.length()) {
											cout<<"Invalid usn no Note:(USN NO should contain 10 characters)\n";
											goto usnnoagain;
										} else stud[i].usn=nusn;
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
									}
								}
								break;
							case 3:
								for(i=1; i<=num; i++) {
									if(u==i) {
										cout<<"\nEnter new course name: ";
										cin>>ncourse;
										stud[i].course=ncourse;
									}
								}
								break;
							case 4:
								goto mainmodify;
								break;
							default:
								cout<<"Invalid choice\n";

						}
					}
					break;
				case 2:
					cout<<"\n---MARKS MODIFICATION---\n\n";
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
						cout<<"The index no does not exist\n";
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
								break;
							case 2:
								cout<<"Subject 2\n";
								cout<<"Enter the new marks: ";
								cin>>s[j];
								stud[i].marks[j]=s[j];
								break;
							case 3:
								cout<<"subject 3\n";
								cout<<"Enter the new marks: ";
								cin>>s[j];
								stud[i].marks[j]=s[j];
								break;
							case 4:
								cout<<"subject 3\n";
								cout<<"Enter the new marks: ";
								cin>>s[j];
								stud[i].marks[j]=s[j];
								break;
							case 5:
								cout<<"subject 3\n";
								cout<<"Enter the new marks: ";
								cin>>s[j];
								stud[i].marks[j]=s[j];
								break;
							case 6:
								cout<<"subject 3\n";
								cout<<"Enter the new marks: ";
								cin>>s[j];
								stud[i].marks[j]=s[j];
								break;
							case 7:
								goto mainmodify;
								break;
							default:
								cout<<"Subject does not exist\n";
						}
					}
				case 3:
					return;
					break;
				default:
					cout<<"Invalid choice\n";
			}
		}

	} else {
		for(count=1; count<=3; count++) {
			cout<<"Incorrect password ! Try again:\n";
			cout<<"Enter the password: ";
			cin>>pass;
			if(pass==password)
				goto mainmodify;
			else if(count>3) {
				cout<<"\nYou have entred incorrect password too many times TRY AGAIN LATER...\n\n";
				return;
			}

		}
	}
}
void student_details::search() {
	cout<<"Enter the password: ";
	cin>>pass;
	if(pass==password) {
	searchdata:
		for(i=1;i<=num;i++)
					{
						cout<<i<<" ."<<stud[i].usn<<endl;
					}
		cout<<"Enter the student USN NO: ";
		cin>>usnno;
		
		for(i=1; i<=num; i++) {
			if(usnno.length()!=stud[i].usn.length()) {
				cout<<"Invalid Student USN NO\nNote: (USN NUMBER contains 10 characters)\n";
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
				cout<<"\t\t--------------------------------------------------\n";
				cout<<"\n";
					}
				}
			}
			else {
				cout<<"\nSorry could not search!....."<<"USN NO: "<<usnno<<" RECORDS DOES NOT EXIST\n\n";
				return;
			}
			
	} else {
		for(count=1; count<=3; count++) {
			cout<<"Incorrect password ! Try again:\n";
			cout<<"Enter the password: ";
			cin>>pass;
			if(pass==password)
				goto searchdata;
			else if(count>3) {
				cout<<"\nYou have entred incorrect password too many times TRY AGAIN LATER...\n\n";
				return;
			}


		}
	}
}
void student_details::delete_rec() {
	cout<<"Enter the password: ";
	cin>>pass;
	if(pass==password) {
		deletedata:
		for(c=1;c<=3;c++)
		{
		cout<<"Enter the student USN NO to delete the records\n";
		cin>>usnno;
		for(i=1; i<=num; i++) {
			
			if(usnno.length()!=stud[i].usn.length()) {
				cout<<"Invalid Student USN NO\nNote: (USNNO contain 10 characters)\n";
			}else
				goto deleterec;
			}
		}
		if(c>3){
				cout<<"\nYou have entered invalid USN NO too many times! TRY AGAIN LATER\n";
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
			cout<<"Sorry ! could not delete USN NO : "<<usnno<<" DOES NOT EXIST\n";
			return;
		}
		num--;
		cout<<"\nRecords has been succesfully deleted\n\n";
	} else {
		for(count=1; count<=3; count++) {
			cout<<"Incorrect password ! Try again:\n";
			cout<<"Enter the password: ";
			cin>>pass;
			if(pass==password)
				goto deletedata;
			else if(count>3) {
				cout<<"\nYou have entred incorrect password too many times TRY AGAIN LATER...\n\n";
				return;
			}

		}

	}
}
void student_details::display() {
	cin.ignore();
	cout.flush();
	cout<<"Enter the password: ";
	cin>>pass;
	if(pass==password) {
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
			cout<<"\t\t--------------------------------------------------\n";
			cout<<"\n";
		}
	} else {
		for(count=1; count<=3; count++) {
			cout<<"Incorrect password ! Try again:\n";
			cout<<"Enter the password: ";
			cin>>pass;
			if(pass==password)
				goto display;
			else if(count>3) {
				cout<<"You have entred incorrect password too many times TRY AGAIN LATER...\n\n";
				return;
			}


		}
	}
}
void student_details::password_change()
{
	change:
	cout<<"Enter the current password: ";
	cin>>pass;
	cin.ignore();
	cout.flush();
	if(pass==password)
	{
		change2:
		cout<<"Enter the new password: ";
		cin>>password;
		cout<<"Confirm new password: ";
		cin>>password2;
		if(password2==password)
		{
			cout<<"\nYour Password has been successfully changed\n\n";
			return;
		}
		else
		{
			cout<<"Sorry the passwords are not matching\nEnter again \n";
			goto change2;
		}
	}
	else
	{
		cout<<"Wrong password... Enter again \n";
		goto change;
	}
}
int main() {
	int ch1,i,j;
	string m,ans;
	string answero;
	student_details sd1;
	struct student ;
	sd1.stud[max];
	sd1.password_user();
mainswitch:
	while(1) {
		cout<<"1.Getdata\n2.Insert Record\n3.Modification Of Existing records\n4.Search record\n5.Delete record\n6.Display\n7.Password reset\n8.Exit\nEnter your choice:\n";
		cin>>ch1;
		switch(ch1) {
			case 1:
				for(sd1.i=1; sd1.i<=1; sd1.i++) {

					if(!sd1.stud[sd1.i].usn.empty()) {
						cout<<"NOTE : ALREADY THE DATA HAS BEEN ENTERED ! THE RECORDS WILL BE DELETED IF YOU CONTINUE\n ";
						cout<<"ARE YOU SURE YOU WANT TO CONTINUE?(y/yes)\n";
						cin>>answero;
						if(answero=="y" || answero=="yes") {
							goto get1;
						} else goto mainswitch;
					} else {
					get1:
						sd1.getdata();
					}
				}
				cout<<"\n";
				break;
			case 2:
				for(i=1; i<=1; i++)
					for(j=1; j<=1; j++) {
						if(sd1.stud[i].usn.empty()) {
							cout<<"Sorry could not Insert New Rocord!..... NO DATA ENTERED \nSELECT 1ST OPTION TO ENTER DATA\n";
							goto mainswitch;
						} else
							sd1.insert();
					}
					cout<<"\n";
				break;
			case 3:
				for(i=1; i<=1; i++) {
					for(j=1; j<=1; j++) {
						if(sd1.stud[i].usn.empty()) {
							cout<<"Sorry could not modify!..... NO DATA ENTERED\nSELECT 1ST OPTION TO ENTER DATA\n";
							goto mainswitch;
						} else
							sd1.modification();
					}
				}
				cout<<"\n";
				break;
			case 4:
				for(i=1; i<=1; i++) {
					for(j=1; j<=1; j++) {
						if(sd1.stud[i].usn.empty()) {
							cout<<"Sorry could not search!..... NO DATA ENTERED\nSELECT 1ST OPTION TO ENTER DATA\n";
							goto mainswitch;
						} else
							sd1.search();
							
					}
				}
				cout<<"\n";
				break;
			case 5:
				for(i=1; i<=1; i++) {
					for(j=1; j<=1; j++) {
						if(sd1.stud[i].usn.empty() ) {
							cout<<"Sorry could not Delete!..... NO DATA ENTERED\nSELECT 1ST OPTION TO ENTER DATA\n";
							goto mainswitch;
						} else
							sd1.delete_rec();
					}
				}
				cout<<"\n";
				break;
			case 6:
				for(i=1; i<=1; i++) {
					for(j=1; j<=1; j++) {
						if(sd1.stud[i].usn.empty()) {
							cout<<"Sorry could not display!..... NO DATA ENTERED\nSELECT 1ST OPTION TO ENTER DATA\n";
							goto mainswitch;
						} else
							sd1.display();
					}
				}
				cout<<"\n";
				break;
			case 7:sd1.password_change();
					cout<<"\n";
					break;
			case 8:
				cout<<"Are you sure you want to exit?(Press y/Y/yes/YES to exit or Press any character to continue....)\n";
				cin>>ans;
				if(ans=="y"||ans=="yes"||ans=="Y"|| ans=="YES")
					exit(0);
				else
					goto mainswitch;
				cout<<"\n";
				break;
			default:
				cout<<"Inavlid choice\n";
		}
	}
}
