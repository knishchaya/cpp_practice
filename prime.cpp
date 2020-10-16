#include<iostream>
typedef vector<int> vi
using namespace std;

int len=100000;
bool prime[len]; // assuming that all are prime
vi primelist;
void sieve(){
    for (int p=2; p*p<=len; p++) // till - 100, since p*p=10000 
    { 
        if (prime[p] == false) // false means is a prime no.
        { 
            primelist.pb(p);
            for (int i=p*p; i<=len; i += p) // multiple before p*p already marked
                prime[i] = true; // declearing multiple of 'p' as not prime
        } 
    } 
}

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
	sieve();
	for(int i=l; i<=u; i++)
		if(primelist[i] == flase)
			cout<<i<<" ";
}
