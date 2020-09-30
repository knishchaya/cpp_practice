#include<iostream>
using namespace std;
class test
{
	int real,img;
	public:
		void get()
		{
			cout<<"Enter Real and Imaginary Parts Respectively : ";
			cin>>real>>img;
		}
		void disp()
		{
			cout<<real<<" + "<<img<<"i";
		}
		friend test operator +(test &s,test &n);
		
};
test operator +(test &s,test &n)
		{ 
		     test temp;
			temp.real=s.real+n.real;
			temp.img=s.img+n.img;
			return(temp);
		}
int main()
{
	test t,r,q;
	t.get();r.get();
	cout<<"1st Complex Number : ";
	t.disp();
		cout<<"\n2nd Complex Number : ";
	r.disp();
	q=t+r;
	cout<<"\nAddition Of Two Complex Number :  ";
	q.disp();
}
