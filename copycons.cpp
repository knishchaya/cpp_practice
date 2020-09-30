#include<iostream>
using namespace std;
class test
{
 private:
 	int x,y;
 	public:
 		test()
 		{
 			cout<<"Enter 2 Number : ";
 			cin>>x>>y;
		 }
		 test(test &t)
		 {
		 	x=t.x;
		 	y=t.y;
		 }
		 void  disp()
		 {
		 	cout<<x<<"  "<<y;
		 }
};
int main()
{
	test s;
	test q=s;
	cout<<"First Object Value: ";
	s.disp();
		cout<<"\nCopied Object Value using Copy Constructor: ";
	q.disp();
}
