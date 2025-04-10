#include<iostream>
#include<string>
using namespace std;
class Bank{
	float Bank_balance;
	float amount;
	public:
		void deposit(int val)
		{
			Bank_balance=Bank_balance+val;
		}
		void deposit(double val)
		{
			Bank_balance=Bank_balance+val;
		}
		void deposit(string name,int value)
		{
			Bank_balance=Bank_balance+value;
		}
		Bank()
		{
			Bank_balance=0;
		}
		Bank(int num)
		{
			Bank_balance=num;
		}
		void display()
		{
			cout<<"Bank balance is : "<<Bank_balance<<endl;
		}
		void operator +(Bank & obj)
		{	cout<<"Enter the amount you have to transfer "<<endl;
			cin>>amount;
			Bank_balance=Bank_balance-amount;
			obj.Bank_balance = obj.Bank_balance + amount;
		}
		void operator -()
		{	cout<<"Enter the amount you have to transfer "<<endl;
			cin>>amount;
			Bank_balance=Bank_balance-amount;
		}
};
int main()
{	int ch,val;
	float val1; 
	string id;
	Bank b1;
	cout<<"1.Direct payment\t 2.Payment with  floating values\t 3.payment using UPI"<<endl;
	cout<<"Enter your choice"<<endl;
	cin>>ch;
	switch(ch)
	{
		case 1: cout<<"Enter payment value"<<endl;
				cin>>val;
				b1.deposit(val);
				b1.display();
				break;
		case 2: cout<<"Enter payment value"<<endl;
				cin>>val1;
				b1.deposit(val1);
				b1.display();
				break;
		case 3: cout<<"Enter UPI ID"<<endl;
				cin>>id;
				cout<<"Enter payment value"<<endl;
				cin>>val1;
				b1.deposit(id,val1);
				b1.display();
				break;
		default: cout<<"Please enter correct choice"<<endl;
				break;
	}
	cout<<"Operator overloading operation : "<<endl;
	Bank b2(10000);
	Bank b3(5000);
	b2+b3;
	b2.display();
	b3.display();
	-b2;
	b2.display();
}
