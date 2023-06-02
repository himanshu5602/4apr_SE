#include<iostream>
using namespace  std;
class calculator
{
	public:
		float a,b;
		void inputdata()
		{
			cout<<"enter the value of A:-";
			cin>>a;
			cout<<"enter the value of B:-";
			cin>>b;
		}
		void displaydata()
		{
			cout<<"addition :-"<<a+b<<endl;
			cout<<"substraction :-"<<a-b<<endl;
			cout<<"division :-"<<a/b<<endl;
			cout<<"multiplication :-"<<a*b<<endl;
		}
};
main()
{
 	  calculator hd;
 	  hd.inputdata();
 	  hd.displaydata();
}
