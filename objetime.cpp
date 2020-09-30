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
		time calculate(time t1)
		
		{
	          time temp;
			temp.h=h+t1.h;
			temp.m=m+t1.m;
			if(temp.h>12)
			temp.h=temp.h%12;
			if(temp.m>60)
			{
				temp.m=temp.m%60;
				temp.h=temp.h+1;
			}
			return(temp);
			//cout<<"Addition Of Two Time is : "<<h<<": "<<m;
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
	c=a.calculate(b);
	c.disp();
}

