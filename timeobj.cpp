#include<iostream>.
using namespace std;

class time
{
	private :
		int h,m;
		public:
		void get()
		{
			cout<<"Enter Hour And Minutes Respectively : ";
			cin>>h>>m;
			
		}
		void calculate(time t1,time t2)
		
		{
	
			h=t1.h+t2.h;
			m=t1.m+t2.m;
			if(h>12)
			h=h%12;
			if(m>60)
			{
				m=m%60;
				h=h+1;
			}
			
			cout<<"Addition Of Two Time is : "<<h<<": "<<m;
		}
		void disp()
		{
			cout<<"The Given Hour Is "<<h<<" And Minutes "<<m<<"\n";
		}
};
int main()
{
	time a,b,c;
	a.get();
	b.get();
	a.disp();
	b.disp();
	
	//cout<<"Converted The Both Time : " <<;
	c.calculate(a,b);
}

