#include<iostream>
using namespace std;
int sum(int a,int b)
{
	return a+b;
}
int sum(int a,int b,int c)
{
	return a+b-c;
}
float sum(float a,float b)
{
	return a*b;
}
string sum(string a,string b)
{
	return a+b;
}
main()
{
	cout<<"total :"<<sum(10,20);
	cout<<"total :"<<sum(10,50,80);
	cout<<"total :"<<sum(25.5f,55.4f);
	cout<<"total :"<<sum("suthar","himanshu");
}
