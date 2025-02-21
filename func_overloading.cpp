#include<iostream>
using namespace std;//function overloading compile time polymorphism
class Shapes
{
	public:
		float a;
		void area(float r)
		{
			a=r*r*3.142;
			cout<<"area of circle is= "<<a<<endl;
		}
		void area(int l,int b)
		{
			a=l*b;
			cout<<"area od rectangle is= "<<a<<endl;
		}
		void area(int h,float h2)
		{
			a=0.5*h*h2;
			cout<<"area of triangle is= "<<a<<endl;
		}
};
int main()
{
	Shapes s;
	s.area(5);
	s.area(4,5);
	s.area(5,5.5f);
	return 0;
}
