#include<stdio.h>
#include<iostream>
using namespace std;
class BankAccount
{
	private:
		int bank_balance,withdraw,amt,deposit,amt1,oldpin=1234,pin1,pin2;
	public:
		BankAccount(int balance)
		{
			cout<<"welcome to SBI"<<endl;
			bank_balance=balance;
			
		}
		
		int getBankBalance()
		{
			return bank_balance;
		}
		void setBankBalance(int new_balance)
		{
			bank_balance=new_balance;
		}
		int getwithdraw()
		{
			cout<<"enter amount to withdraw"<<endl;
			cin>>amt;
			if(bank_balance>amt)
			{
				bank_balance-=amt;
				setBankBalance(bank_balance); 
				cout<<"remaining amount is:"<<amt<<endl;
			}
				else
				{
					cout<<"you cant withdraw";
				}
		}
		int getdeposit()
		{
			cout<<"enter the amt to deposit";
			cin>>amt1;
			bank_balance+=amt1;
			setBankBalance(bank_balance); 
			cout<<"the bank balnce is:"<<bank_balance<<endl;
		}
		int getcorrectpin()
		{
			cout<<"enter old pin";
			cin>>pin1;
			if(oldpin==pin1)
			{
				cout<<"enter new pin";
				cin>>pin2;
				cout<<"new pin is:"<<pin2<<endl;
			}
			else
			{
				cout<<"pin change not possible"<<endl;
			}
		}
		
		~BankAccount()
		{
			cout<<"thankyou for using SBI";
		}
};
int main()
{
	 int initial_balance;
    cout << "Enter balance: ";
    cin >> initial_balance;
    BankAccount b1();
     b1.getBankBalance();
					b1.getwithdraw();
    	b1.getBankBalance();
					b1.getdeposit();
					b1.getBankBalance();
					b1.getcorrectpin();
    return 0;
}
