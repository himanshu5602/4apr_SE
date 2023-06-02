#include<iostream>
using namespace std;
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
	vishu.house();
	vishu.car();
	vishu.cycle();
}
