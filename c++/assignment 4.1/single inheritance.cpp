#include<iostream>
using namespace std;
class crickter
{
	public:
		string a;
		int b,c,out,average;
		void inputdata()
		{
			cout<<"name of crickter :-";
			cin>>a;
			cout<<"total runs :-";
			cin>>b;
			cout<<"number of out time :-";
			cin>>c;
			
		}
		void displaydata()
		{
			cout<<"the name of crickter is "<<a;
			cout<<"\nthe total run is "<<b;
			cout<<"\ntime of out is"<<c;
			average=b/c;
			cout<<"average run is "<<average;
		}
};
 class batsman: public crickter
{
	public:
		void century()
		{
			cout<<"\n 5 century";
		}
};
main()
{
	batsman vishu;
	vishu.inputdata();
	vishu.displaydata();	
	vishu.century();
}
