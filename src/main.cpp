#include "../include/BankAccount.hpp"

int main() {
    BankAccount ba("Robert", 300);
    ba.display();

    ba.withdraw(500);
    ba.deposit(300);
    ba.display();

    ba.withdraw(500);
    ba.display();

    return 0;
}
