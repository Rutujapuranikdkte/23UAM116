//radius of cirlce with constructyor and destructor
#include<stdio.h>
#include<iostream>
using namespace std;
class circle
{
	public:
		int r;
		float a;
		circle()
		{
		//default constructor
		cout<<"\nenter radius:";
		cin>>r;
		a=3.142*r*r;
		cout<<"\narea of circle is: "<<a;
		}
		circle(int r1) //parametarized constructor
		{
			r=r1;
			a=3.142*r*r;
			cout<<"\narea of circle is: "<<a;
		}
		circle(circle &obj) //copy constructor
		{
			r=obj.r;
			a=3.142*r*r;
			cout<<"\narea of circle is: "<<a;
		}
		~circle()
		{
		cout<<"\ndestructor is executed";
		}
};
int main()
{
	circle c1;
	cout<<"\nthe radius1: "<<c1.r;
	circle c2(1);
	cout<<"\nthe radius2: "<<c2.r;
	{
	circle c3=c2;
	cout<<"\nthe radius3: "<<c3.r;
	}
	cout<<"\nmain executed";
}
