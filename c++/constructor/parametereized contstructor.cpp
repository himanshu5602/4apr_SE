#include<iostream>
using namespace std;
class student
{
	public:
		student() //constructor
		{
			cout<<"hello and welcome to the constructor";
		}
		student(int a,int b)
		{
			cout<<"\n a="<<a;
			cout<<"\n b="<<b;
		}
};
main()
{
	student s1=student();
	student s2=student(10,20);
}
