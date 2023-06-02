#include<iostream>
using namespace std;
template <class T>
void swapping(T &a, T &b)
{
	T t=a;
	a=b;
	b=t;
}
main()
{
	char a='A',b='B';
	int x=10,y=20;
	cout<<"before swap a:"<<a<<" | b:"<<b<<endl;
	swapping(a,b);
	cout<<"after swap a:"<<a<<" | b:"<<b<<endl;
	
	cout<<"before swap x:"<<a<<" | y:"<<y<<endl;
	swapping(x,y);
	cout<<"before swap x:"<<x<<"|y:"<<y<<endl;
}
