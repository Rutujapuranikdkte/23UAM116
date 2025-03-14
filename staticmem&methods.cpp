#include<iostream>
using namespace std;
class Employee
{
		int id;
		static int Count;//static member
		public:
		void setData()
		{
				cout<<"enter id"<<endl;
				cin>>id;
				Count++;
		}
		void getData()
		{
				cout<<"id is:"<<id<<"& the number is:"<<Count<<endl;
		}
		static void getCount()//static function
		{
				cout<<"The count is:"<<Count<<endl;
		}
};
int Employee::Count;//by default value 0
int main()
{
		Employee e,f,g;
		e.setData();
		e.getData();
		Employee::getCount();//function call
		f.setData();
		f.getData();
		Employee::getCount();
		g.setData();
		g.getData();
		Employee::getCount();
		return 0;
}
