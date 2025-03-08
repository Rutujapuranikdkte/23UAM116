#include<stdio.h>
#include<iostream>
using namespace std;
class Shop
{
		int itemId[100];
		int itemPrice[100];
		int Counter;
		public:
				void initCounter(){Counter=0;}
				void setPrice(void);
				void displayPrice(void);
};
void Shop::setPrice(void)
{
	 cout<<"enter id of item no"<<Counter+1<<endl;
	 cin>>itemId[Counter];
	 cout<<"enter price"<<endl;
	 cin>>itemPrice[Counter];
	 Counter++;
}
void Shop::displayPrice(void)
{
		for(int i=0;i<Counter;i++)
		{
			cout<<"the item price with id"<<itemId[i]<<"is"<<itemPrice[i]<<endl;
		}
}
int main()
{
		Shop s;
		s.initCounter();
		s.setPrice();
		s.setPrice();
		s.setPrice();
		s.displayPrice();
		return 0;
		
}
