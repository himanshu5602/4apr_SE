#include<iostream>
using namespace std;
class a
{
	private:
		int x,y;
		public:
			friend void setdata();
};
void setdata()
{
	a obj;
	obj.x=10;
	obj.y=20;
	cout<<"x="<<obj.x<<endl;
	cout<<"y="<<obj.y<<endl;
}
main()
{
	setdata();
}
