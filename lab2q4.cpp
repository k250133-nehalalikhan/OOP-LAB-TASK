#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount(double b) { balance = b; }

    void deposit(double amount);
    void withdraw(double amount);
    void showBalance();
};

void BankAccount::deposit(double amount) {
    balance += amount;
    cout << "Deposited: $" << amount << endl;
}

void BankAccount::withdraw(double amount) {
    if (amount <= balance) {
        balance -= amount;
        cout << "Withdrew: $" << amount << endl;
    } else {
        cout << "Insufficient funds!" << endl;
    }
}

void BankAccount::showBalance() {
    cout << "Current Balance: $" << balance << endl;
}

int main() {
    BankAccount account(1000.0);
    account.deposit(500.0);
    account.withdraw(200.0);
    account.showBalance();
    return 0;
}