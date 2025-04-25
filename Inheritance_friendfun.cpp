#include<iostream>
using namespace std;

class Balance; // Forward declaration

class Bank {
	private:
		string name;
		int age;
	public:
		Bank(string nm, int a) {//parameterized constructor
		    name = nm;
		    age = a;
		}
		void showBank() {
			cout << "The name is: " << name << endl;
			cout << "The age is: " << age << endl;
		}
		friend class Balance;//friend function
};

class Balance {
public:
    int balance;
    void getBalance() {
        cout << "Enter balance: ";
        cin >> balance;
    }
    void show() {
        cout << "Balance is: " << balance << endl;
    }
    friend class Bank;
};

class Deposit : public Balance {//single inheritance
public:
    int balance2;
    void depositAmt() {
        cout << "Enter amount to deposit: ";
        cin >> balance2;
        balance += balance2;
        cout << "Final balance after deposit: " << balance << endl;
    }  
};

// Withdraw class using multiple inheritance
class Withdraw : public Bank, public Balance {
public:
    Withdraw(string name, int age) : Bank(name, age) {}

    void withdrawAmt() {
        int amt;
        cout << "Enter amount to withdraw: ";
        cin >> amt;
        if (amt <= balance) {
            balance -= amt;
            cout << "Withdrawal successful. Remaining balance: " << balance << endl;
        } else {
            cout << "Insufficient balance." << endl;
        }
    }
};

int main() {
	Bank b1("Rutuja", 20);
	b1.showBank();

	Deposit d;
	d.getBalance();
	d.show();
	d.depositAmt();

	cout << "\n--- Withdraw Operation ---" << endl;
	Withdraw w("Rutuja", 20);
	w.getBalance();  
	w.showBank();    
	w.withdrawAmt(); 

	return 0;
}
