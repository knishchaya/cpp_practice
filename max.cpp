#include<iostream>
using namespace std;
class x
{
	public: 
	int a;
	void get()
	{
		cout<<"Enter A Number ";
		cin>>a;
	}
	void disp()
	{
		cout<< "First Class Number " <<a;
		
	}
	friend void max(x n, class y r);
};
class y
{
	public: 
	int b;
	void get()
	{
		cout<<"Enter A Number ";
		cin>>b;
	}
	void disp()
	{
		cout<< "\nSecond Class Number " <<b;
		
	}
	friend void max(x n, class y r);
};
void max ( x n, y r)
{
	if(n.a>r.b)
	cout<<"\nMaximum Number "<<n.a;
	else
	cout<<"\nMaximum Number "<<r.b;
}
int main()
{
	x d;
	y q;
	d.get();
	q.get();
	d.disp();
	q.disp(); 
	max(d,q);
}
