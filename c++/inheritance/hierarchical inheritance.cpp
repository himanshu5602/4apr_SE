#include<iostream>
using namespace std;
class animal
{
	public:
		void info()
		{
			cout<<"\nkunal is animal";
		}
};
class dog: public animal
{
	public:
		void bark()
		{
			cout<<"\n dog is barking";
		}
};
class cat:public animal
{
	public:
		void meow()
		{
			cout<<"\ncat";
		}
};
main()
{
	dog d1;
	d1.info();
	d1.bark();
	cat c1;
	c1.info();
	c1.meow();
}
