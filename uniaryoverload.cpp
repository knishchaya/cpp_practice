#include<iostream>
using namespace std;
class test
{
	int a,b,c;
	public:
		test()
		{
			cout<<"Enter 3 Number : ";
			cin>>a>>b>>c;
		}
		void operator -();
		void disp()
		{
			cout<<"The 3 Numbers Are : "<<a<<" "<<b<<" "<<c;
		}
};
void test::operator -()
{
	a=-a;b=-b;c=-c;
}
int main()
{
	test t;
	t.disp();
	cout<<"\n After Operator Overloading\n";
	-t;
	t.disp();
}
