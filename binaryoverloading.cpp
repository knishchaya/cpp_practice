#include<iostream>
using namespace std;
class test
{
	int real,img;
	public:
		test()
		{
			cout<<"Enter Real and Imaginary Partss Respectively : ";
			cin>>real>>img;
		}
		void disp()
		{
			cout<<real<<" + "<<img<<"i";
		}
		void operator +(test &s)
		{
			real=real+s.real;
			img=img+s.img;
		}
		
};
int main()
{
	test t,r;
	cout<<"1st Complex Number : ";
	t.disp();
		cout<<"\n2nd Complex Number : ";
	r.disp();
	t+r;
	cout<<"\nAddition Of Two Complex Number :  ";
	t.disp();
}
