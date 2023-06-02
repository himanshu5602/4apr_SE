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
};
main()
{
	son vishu;
	vishu.carpenter();
	vishu.cooking();
	vishu.coding();
}
