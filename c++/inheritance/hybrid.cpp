#include<iostream>
using namespace std;
class father
{
	public:
		void carpenter()
		{
			cout<<"he is carpenter";
		}
};
class mother
{
	public:
		void cooking()
		{
			cout<<"\nshe is make nyc cook";
		}
};
class son:public father,public mother
{
	public:
		void coding()
		{
			cout<<"\nlearn coding";
		}
class grandfather
{
	public:
		void house()
		{
			cout<<"have 3 bhk house";
		}
};
class father: public grandfather
{
	public:
		void car()
		{
			cout<<"\naudi car";
		}
};
class son:public father
{
	public:
		void cycle()
		{
			cout<<"\nranzer cycle";
		}
};
main()
{
	son vishu;
	vishu.carpenter();
	vishu.cooking();
	vishu.coding();
}
