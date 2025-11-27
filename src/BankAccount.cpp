#include "../include/BankAccount.hpp"

#include <iostream>

BankAccount::BankAccount(std::string ownerName, double initialBalance) : m_ownerName(ownerName), m_balance(initialBalance) { }

void BankAccount::deposit(double amount) {
    if(amount > 0)
        m_balance += amount;
}

void BankAccount::withdraw(double amount) {
    if(m_balance >= amount)
        m_balance -= amount;
    else
        std::cout << "The amount requested exceeds your available balance.\n";
};

void BankAccount::display() {
    std::cout << "--- Bank Account Details ---\n";
    std::cout << "Owner: " << m_ownerName << std::endl;
    std::cout << "Balance: " << m_balance << "\n\n";
};
