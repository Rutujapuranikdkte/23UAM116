#include<stdio.h>
#include<iostream>
using namespace std;
class A //single inheritance
{
	public:
			int a,b;
			void get()
			{
			
			cout<<"enter two numbers:";
			cin>>a>>b;
		
		}
};
class B:public A
{
	public:
		
			void sum()
			{
			cout<<"addition is: "<<a+b;
		
		}
};
int main()
{
	B obj;
	obj.get();
	obj.sum();
	return 0;
}
