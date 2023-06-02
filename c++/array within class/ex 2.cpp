#include<iostream>
using namespace std;
class student
{
	public:
		int id;
		string name;
		int marks[5];
		void input()
		{
			cout<<"enter id";
			cin>>id;
			cout<<"enter name";
			cin>>name;
			for(int i=0;i<=4;i++)
			{
				cout<<"\n marks :";
				cin>>marks[i];
			}
		}
		void display()
		{
			cout<<"\n id:"<<id;
			cout<<"\n name :"<<name;
			for(int i=0;i<=4;i++)
			{
				cout<<"\n marks ="<<marks[i];
			}
		}
};
main()
{
	student s1[3];
	for(int i=0;i<3;i++)
	{
		s1[i].input();
	}
	for(int i=0;i<3;i++)
	{
		s1[i].display();
	}
}
