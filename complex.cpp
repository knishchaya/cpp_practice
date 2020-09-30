#include<iostream>
using namespace std;
class complex
{
	public:
	int real,img;
	public :
		void get()
		{
			cout<<"Enter Real And Imaginary Parts Respectively : ";
			cin>>real>>img;
			
		}
		complex sum(complex c1,complex c2);
		void disp()
		{
			cout<<real<<" + "<<img<<"i";
		}
		
};
complex complex::sum(complex c1,complex c2)
{
	complex temp;
	temp.real=c1.real+c2.real;
	temp.img=c1.img+c2.img;
	cout<<"\nSum Of  Two Complex Number : "<<temp.real<<" + "<<temp.img<<"i";
	return(temp);
}
int main()
{
	complex a,b,c;
	a.get();
	b.get();
   cout<<"First Complex Number : ";a.disp();
   cout<<"\nSecond Complex Number : ";b.disp();
	c.sum(a,b);
	
}
