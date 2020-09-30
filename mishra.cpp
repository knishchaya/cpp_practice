/* consteructor demo*/
#include<iostream>
#include<math.h>
using namespace std;
class demo
{
    public:
         int b=0;
    demo(int a)
    {
    	
    b=b+a;
    }
    void display()
    {

        cout<<"sum of number is"<<b;
    }

    };
  int main()
    {

    int i,n,num;

    cout<<"enter the limit";
    cin>>n;
    cout<<"enter the element";
     demo d=new demo d(num);
         for(i=1;i<=n;++i)
         {
            cin>>num;
       // demo d=new demo d(num);
         }
         
         d.display();

    }
