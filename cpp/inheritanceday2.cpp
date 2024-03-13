//Author : nishj347 @github
#include <iostream>
using namespace std;

class account {
protected:
    double balance;

public:
    account(double initialBalance = 0.0) : balance(initialBalance) {}

    void deposit(double amount) {
        balance += amount;
      cout << "deposit of $" << amount << " successful\n";
    }

    virtual void withdraw(double amount) {
        if (balance>= amount) {
            balance-= amount;
           cout << "withdrawal of $" << amount << " successful\n";
        } else {
            cout << "insufficient funds\n";
        }
    }

    double getBalance() const {
        return balance;
    }
};

class current : public account {
public:
    current(double initialBalance = 0.0) : account(initialBalance) {}

    void withdraw(double amount) override {
     
        if (amount <= balance) {
            balance -= amount;
            cout << "withdrawal of $" << amount << " successful\n";
        } else {
         cout << "insufficient funds\n";
        }
    }
};

class savings : public account {
public:
    savings(double initialBalance = 0.0) : account(initialBalance) {}


};

class deposits : public current {
public:
    deposits(double initialBalance = 0.0) : current(initialBalance) {}

    void applyinterest(double interestRate) {
        balance += balance * (interestRate / 100.0);
        cout << "interest applied. New balance: $" << balance << "\n";
    }
};

int main() {

    current currentaccount(1000);
    currentaccount.deposit(500);
    currentaccount.withdraw(200);

    savings savingsaccount(2000);
    savingsaccount.deposit(100);
    savingsaccount.withdraw(250);

    deposits depositsaccount(3000);
    depositsaccount.deposit(1000);
    depositsaccount.withdraw(500);
    depositsaccount.applyinterest(5); 

    return 0;
}
