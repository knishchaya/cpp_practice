#include<iostream>
#include<string.h>
using namespace std;
class bank
{
	public:
		
		int ac_no,age,bal;
		char name[50],s[20],user_name[100],passward[100],add[20];
	public:
		void open_acc();
		int login();
		void deposite();
		void withdraw();
		void display();
};
void bank :: open_acc()
{
	cout<<"enter the username"<<endl;
	cin>>user_name;
	fflush(stdin);
	cout <<"enter the passward"<<endl;
	cin>>passward;
	cout<<"enter the name"<<endl;
	cin>>name;
	cout<<"enter the account number ";
	cout<<" And specify the type of account s or c"<<endl;
	cin>>ac_no>>s;
	cout<<"enter the age and address"<<endl;
	cin>>age>>add;
}
int bank::login()
{
	int ch;
	char a[20];
	cout<<"enter the username"<<endl;
	cin>>a;
	if(strcmp(a,user_name)==0)
	{
		cout<<"enter the passward"<<endl;
		cin>>a;
		if(strcmp(a,passward)==0)
		{
			cout<<"login successful"<<endl;
			return(1);
		}
		else
		{
			cout<<"invalid passward"<<endl;
			return(0);
		}
	}
	else
	{
		cout<<"account doesnot exit"<<endl;
	}
}
void bank :: withdraw()
{
	int amount;
	if(bal==0)
	{
		cout<<"not sufficient balance"<<endl;
		
	}
	else
	{
		cout<<"enter the amount"<<endl;
		cin>>amount;
		if(amount<bal)
		{
			bal=bal-amount;
			cout<<"withdraw is successful and available balance is "<<bal<<endl;
		}
		else
		{
			cout<<"not sufficient balance"<<endl;
		}
	}
}
void bank::display()
{
	cout<<"account details"<<endl;
	cout<<"account holder name:- "<<name<<endl;
	cout<<"balance\t"<<bal<<endl;
	cout<<"address\t:-"<<add<<endl;
	cout<<"age\t:-"<<age<<endl;
	cout <<"type od account:- "<<s<<endl;
}
void bank :: deposite()
{
	int amount;
	{
		cout<<"enter the amount"<<endl;
		cin>>amount;
		bal=bal+amount;
		cout<<"deposite is successful and available balance is "<<bal<<endl;
	}
}

main()
{
	bank detail;
	int ch,r;
	while(1)
	{
		cout<<"1.login account\t2.open new_ account\t3.exit\t"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
			 r=detail.login(); 
			 if(r==1)
			 {
			 
				while(1)
   				{

				cout<<"1.deposite\t2.withdraw\t3.display\t4.exit\t"<<endl;
				cout<<"enter your choice"<<endl;
				cin>>ch;
				switch(ch)
				{
					case 1:
					detail.deposite();
						break;
					case 2 :
					 detail.withdraw();
						break;
					case 3: 
						detail.display();
						break;
					case 4: exit(0);
					default : cout<<"invalid choice"<<endl;
				}
			}
			}
						
			break;
			case 2:detail.open_acc();
				break;
			case 3:exit(0);
			default : cout<<"invalid choice"<<endl;
		}
   }
   	
}
