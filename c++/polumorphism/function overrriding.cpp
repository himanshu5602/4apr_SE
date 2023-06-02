#include<iostream>
using namespace std;
class animal
{
	public:
		void eat()
		{
			cout<<"eating bhajii";
		}
};
class dog: public animal
{
	public:
		void eat()
		{
			cout<<"eating roti";
		}
};
main()
{
	dog d=dog();
	d.eat();
}
