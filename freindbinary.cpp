#include<iostream>
using namespace std;
class test
{
	public:
	int real,img;
	public:
		void get()
		{
			cout<<"Enter Real and Imaginary Partss Respectively : ";
			cin>>real>>img;
		}
		void disp()
		{
			cout<<real<<" + "<<img<<"i";
		}
		friend test operator +(test &s,test &q);
		
		
};
test operator +(test &s,test &q)
		{
			test temp;
			temp.real=s.real+q.real;
			temp.img=s.img+q.img;
			return(temp);
		}
int main()
{
	test t,r,n;
	t.get();
	r.get();
	cout<<"1st Complex Number : ";
	t.disp();
		cout<<"\n2nd Complex Number : ";
	r.disp();
	n=t+r;
	cout<<"\nAddition Of Two Complex Number :  ";
	n.disp();
}
