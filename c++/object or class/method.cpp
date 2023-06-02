#include<iostream>
using namespace std;
class student
{
	public:
		int id;
		string name;
		void inputdata()
		{
			cout<<"enter id:";
			cin>>id;
			cout<<"\nenter name:";
			cin>>name;
		}
		void displaydata()
		{
			cout<<"id:" <<id <<endl;
			cout<<"name:"<<name;
		}
};
main()
{
	student s1;
	s1.inputdata();
	s1.displaydata();
}
