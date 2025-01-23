#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
			int bank_balance,withdraw,pin_change,amt,amt1,choice,correct_pin=1234,old_pin,new_pin,deposit;
			 cout << "-----Welcome to SBI Bank-----" << endl;
			cout<<"enter bank balance:";
			cin>>bank_balance;
			cout<<"1.withdraw"<<"\t"<<"2.pin_change"<<"\t"<<"3.deposit"<<"\t"<<"4.bank enquiry"<<"\t"<<"5. Mini Statement"<<"\t"<<endl;
			cout<<"enter your choice:";
			cin>>choice;
			switch(choice)
			{
						case 1:cout<<"enter the amount for withdraw"<<endl;
													cin>>amt;
													if(bank_balance>amt)
													{
															cout<<"you can easily withdraw the entered amt"<<endl;
															amt1=bank_balance-amt;
															cout<<"remaining balance is:"<<amt1<<endl;
													}
													else
													{
															cout<<"you can't withdraw amt";
													}
															break;
						case 2:cout<<"for changing pin"<<endl;
													cout<<"enter old pin"<<endl;
													cin>>old_pin;
													if(correct_pin==old_pin)
													{
															cout<<"your pin is successfully verified"<<endl;
															cout<<"enter new pin:"<<endl;
															cin>>new_pin;
															correct_pin=new_pin;
															cout<<"your pin is changed"<<endl<<"new pin is:"<<correct_pin<<endl;;
													}
													else
													{
															cout<<"pin is not verified";
													}
													break;
													case 3:cout<<"for deposit"<<endl;
													       cout<<"enter deposit amount:";
													       cin>>deposit;
													       bank_balance=bank_balance+deposit;
													       cout<<"the current bank_balance is:"<<bank_balance;
													       break;
													       
													case 4:cout<<"enter current balance:"<<bank_balance;
													       break;
													       
													case 5:
																				cout<< "Mini Statement:" <<endl<<withdraw<<"\t"<<"withdraw"<<endl<<correct_pin<<"\t"<<"pin_change"<<endl<<bank_balance<<"\t"<<"deposit"<<endl<<bank_balance<<"\t"<<"balance enquiry"<<endl;
																				break; 
													
													default:
													cout<<"you entered wrong choice";		
			}
			
}
