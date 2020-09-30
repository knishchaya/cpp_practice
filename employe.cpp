#include<iostream>
using namespace std;
class salary
{
  private :
  int eid;
  char ena[20],post[20];
  float bp,da,hr,pf,gp,np;
  public:
  	void getdata();
  	void calculate();
  	void disp();
};
void salary::getdata()
{
	cout<<"Employee Id :";
	cin>>eid;
	cout<<"Employee Name : ";
	cin>>ena;
	fflush(stdin);
	cout<<"Basic Salary";
	cin>>bp;
	cout<<"Post : ";
	cin>>post;
	fflush(stdin);
	cout<<"Deduction Amount : ";
	cin>>pf;
}
void salary ::calculate()
{
	da=(40*bp)/100;
	hr=(25*bp)/100;
	gp=bp+da+hr;
	np=gp-pf;
	
}
void salary::disp()
{
	cout<<"Employee ID : "<<eid<<"\n"<<"Employee Name : "<<ena<<"\n"<<"BAsic Salary : "<<bp<<"\n"<<"Post : "<<post<<"\n"<<"Deduction Amount : "<<pf<<"\n"<<"Allowence : "<<hr<<"\n"<<"Gross Pay : "<<gp<<"\n"<<"Net Payment : "<<np<<"\n";
}
int main()
{
	salary s[20];
	int n;
	
	cout<<"Enter The Number Of Employee : ";
	cin>>n;
	cout<<"Enter The Details Of "<<n<<" Employee :\n";
	for(int i=0;i<n;i++)
	{
		int j=i+1;
			cout<<"Enter "<<j<<" Employee Details"<<endl;
		s[i].getdata();
		s[i].calculate();
	}
//	cout<<"Eid"<<"\n"<<"EName"<<"\n"<<"Basic Pay"<<"\t\t"<<"Post"<<"\t\t"<<"\t\t"<<"Allowance"<<"\t\t"<<"Home Rent"<<"\t"<<"Gross Payement"<<"\t"<<"Net Payement\n";
    cout<<"Details Are :";
			for(int i=0;i<n;i++)
     	{
	    	s[i].disp();
	    	
     	}
}
