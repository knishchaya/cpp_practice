#include<iostream>
using namespace std;
class mean
{
	int a,b;
	public:
	void get()
	{
		cout<<"Enter Two Number : ";
		cin>>a>>b;
	}
	friend int mean1(mean m);
	void  disp()
	{
		cout<<a<<"  "<<b;
	}

};
int mean1(mean m)
{
	return((m.a+m.b)/2);
}
int main()
{
	mean a;
	a.get();
    cout<<"The Numbers Are :";a.disp();
    cout<<"\nMean : "<<mean1(a);
}
