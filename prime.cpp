#include<iostream>
using namespace std;
void prime(int,int);
main()
{
	int u,l;
	cout<<"enter lower bound and upper bound : ";
	cin>>l>>u;
	prime(l,u);
}
void prime(int l,int u)
{
	cout<<"the prime numbers are in given bound :-"<<endl; 
	int i=2,j=2,f=0;
	if(l==2)
	{
		cout<<2<<endl;
		i++;
	}
	for(i;i<=u;++i)
	{
		f=0;
		for(j=2;j<=i/2;++j)
		{
			if(i%j==0)
			{
				f=1;
				break;
			}
		}
		if(f==0)
			cout<<i<<endl;
	}
}
