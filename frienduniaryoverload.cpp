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
		friend void operator -(test &s);
		void disp()
		{
			cout<<"The 3 Numbers Are : "<<a<<" "<<b<<" "<<c;
		}
};
void operator -(test &s)
{
	s.a=-(s.a);s.b=-(s.b);s.c=-(s.c);
}
int main()
{
	test t;
	t.disp();
	cout<<"\n After Operator Overloading using friend functions\n";
	-t;
	t.disp();
}
