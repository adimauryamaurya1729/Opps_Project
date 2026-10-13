#include <iostream>

class Ledger {
protected:
    double balance;
public:
    Ledger(double b) : balance(b) {}
    void displayBalance() {
        std::cout << "Current Balance: $" << balance << "\n";
    }
};

class SavingsAccount : public Ledger {
public:
    SavingsAccount(double b) : Ledger(b) {}
    void applyInterest() {
        balance += balance * 0.04;
        std::cout << "Interest applied to Savings.\n";
    }
};

class CheckingAccount : public Ledger {
public:
    CheckingAccount(double b) : Ledger(b) {}
    void processTransactionFee() {
        balance -= 2.50;
        std::cout << "Transaction fee deducted from Checking.\n";
    }
};

int main() {
    SavingsAccount savings(1000.0);
    savings.applyInterest();
    savings.displayBalance();

    CheckingAccount checking(500.0);
    checking.processTransactionFee();
    checking.displayBalance();
    
    return 0;
}