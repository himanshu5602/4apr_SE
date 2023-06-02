#include<iostream>
using namespace std;
class father
{
	public:
		void house()
		{
			cout<<"have 3 bhk house";
		}
};
class son: public father
{
	public:
		void car()
		{
			cout<<"\naudi car";
		}
};
main()
{
	son vishu;
	vishu.house();
	vishu.car();
}
