#ifndef BANK_ACCOUNT
#define BANK_ACCOUNT

#include <string>

class BankAccount {
    private:
        std::string m_ownerName;
        double m_balance;

    public:
        BankAccount(std::string ownerName, double initialBalance); // Constructor
        void deposit(double amount);
        void withdraw(double amount);
        void display();
};

#endif // BANK_ACCOUNT
