#include<iostream>
using namespace std;
class test
{
	private:
	int a,b,c;
	public:
		test()
		{
			cout<<"Enter 3 Number : ";
			cin>>a>>b>>c;
		}
		void operator =( test &t);
		void disp()
		{
			cout<<"The 3 Numbers Are : "<<a<<" "<<b<<" "<<c;
		}
		
};
void test::operator =(test &t)
{
  a=b=c=0;
  
}
int main()
{
	test r,c;
	r.disp();
	cout<<"\n After Operator Overloading\n";
	c=r;
	c.disp();
}
