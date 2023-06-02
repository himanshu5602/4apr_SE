#include<iostream>
using namespace std;
class employ
{
	public:
		int id,salary;
		string name;
		void inputdata()
		{
			cout<<"enter id:";
			cin>>id;
			cout<<"\nenter name:";
			cin>>name;
			cout<<"enter salary:";
			cin>>salary;
		}
		void displaydata()
		{
			cout<<"id:" <<id <<endl;
			cout<<"name:"<<name <<endl;
			cout<<"salary:"<<salary;
		}
};
main()
{
	employ company;
	company.inputdata();
	company.displaydata();
}
