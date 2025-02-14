#include<stdio.h>
#include<iostream>
using namespace std;
class A//multilevel inheritance
{
	public:
	int a;
	void get1()
	{
		cout<<"enter one number:";
		cin>>a;
	}
};
class B:public A
{
	public:
	int b;
	void get2()
	{
	cout<<"enter sec number:";
	cin>>b;
	}
};
class C:public B
{
	public:
		void sum()
		{
			cout<<"sum is: "<<a+b;
		}
};
int main()
{
	C obj;
	obj.get1();
	obj.get2();
	obj.sum();
	return 0;
}
