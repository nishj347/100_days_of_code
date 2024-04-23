// Author : nishj347 @github
#include <iostream>
using namespace std;

class bankaccount {
private:
    int acc_number;
    double balance;

public:
  
    bankaccount(int accnum, double balance) {
        acc_number = accnum;
        balance = balance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
       cout << "deposited " << amount << " into account " << acc_number <<endl;
        } else {
           cout << "invalid deposit." <<endl;
        }
    }

    
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
          cout << "withdrawn" << amount << " from account " << acc_number << endl;
        } else {
          cout << "insufficient funds." <<endl;
        }
    }

    double getbalance() {
        return balance;
    }
};

int main() {

    bankaccount myaccount(123456, 30.0);

 
    myaccount.deposit(700);
    myaccount.withdraw(1000);
   cout << "Current balance: " << myaccount.getbalance() <<endl;

    return 0;
}
