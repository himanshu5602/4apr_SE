#include<iostream>
using namespace std;
class bank
{
	public:
		string name,type;
		int a,b,c,w,total;
		void inputdata()
		{
			cout<<"enter depositer name :-";
			cin>>name;
			cout<<"enter account number :-";
			cin>>a;
			cout<<"Types of account :-";
			cin>>type;
			cout<<"balance in your account :-";
			cin>>b;
			cout<<"withdraw :--";
			cin>>w;
			
			
		}
		void displaydata()
		{
			cout<<"\nname of depositer is "<<name;
			cout<<"\nthe account number is "<<a;
			cout<<"\nyour account is "<<type;
			cout<<"\nbalance in your account is "<<b;
			total= b-w;
			cout<<"\ntotal balnce is :-"<<total;
				
		}
};
main()
{
	bank vishu;
	vishu.inputdata();
	vishu.displaydata();
}
