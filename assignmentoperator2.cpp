#include<iostream>
using namespace std;
class test
{
	public:
	int a,b,c;
	public:
		test()
		{
			cout<<"Enter 3 Number : ";
			cin>>a>>b>>c;
		}
		void operator =(const test &t);
//		{
//  t.a=t.b=t.c=0;
//  
//     }
		void disp()
		{
			cout<<"The 3 Numbers Are : "<<a<<" "<<b<<" "<<c;
		}
};
void test::operator =( const test &t)
{
  //a=b=c=0;//it's a local varible assigment for object with refence it being called
  // if u want to copy the content of older one into newr one the uncomment the line blow this
  a=t.a;b=t.b;c=t.c;  
  //above line copt your data into the newer one 
  // ur statement like this t.a=t.b=t.c=0; is not working due to u have takesn constant object and constant object can not be changed. 
  
}
int main()
{
	test r,c;
	r.disp();
	cout<<"\n After Operator Overloading\n";
	c=r;
	c.disp();
}
