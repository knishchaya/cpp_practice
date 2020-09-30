#include<iostream>
using namespace std;
class s
{
	public:
	int a;
	public :
	void get()
	{
		cout<<"Enter A Number : ";
		cin>>a;
	}
	friend void swa(s &x, class s1 &y);

      void disp()
      {
      	cout<<a;
	  }
};
class s1
{
	public:
	int b;
	public:
			void get()
	{
		cout<<"Enter A Number : ";
		cin>>b;
	}
	friend  void swa(s &x,s1 &y);
		void getdata()
		{
			cout<<b;
		}
};
void swa(s &x,s1 &y)
{
	int temp;
	temp=x.a;
	x.a=y.b;
	y.b=temp;
	//cout <<"Swapped Value  Is "<<s1.a<<"  "<<s2.b;
}
int main()
{
	s n;
	s1 r;
	n.get();
	r.get();
	cout<<"Before Swapping Numbers Are ";
	n.disp();cout<<" ";r.getdata();
	swa(n,r);
		cout<<"\nAfter Swapping Numbers Are ";
	n.disp();cout<<" ";r.getdata();
}
