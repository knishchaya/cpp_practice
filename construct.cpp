#include<iostream>
using namespace std;
class volume
{
  public :
  int l,b,h;
  public :
  volume()
  {
  	cout<<"Enter Length Breadth And Height";
  	cin>>l>>b>>h;
	  }	
	  volume (volume &v)
	  {
	  	cout<<"\nVolume Of Box By Copy Constructor : "<<(v.l*v.b*v.h);
	  }
	  volume(int x,int y,int z)
	  {
	  	l=x;
	  	b=y;
	  	h=z;
	  	cout<<"\nVolume Of Box By Parametrized Constructor : "<<(l*b*h);
	  }
	  ~volume()
	  {
	  	cout<<"\nObject Deallocated";
	  }
};
int main()
{
	volume a;
	volume b(a);
	int d,q,r;
	cout<<"\nEnter Length Breadth And Height : ";
	cin>>d>>q>>r;
	volume c(d,q,r);
}
