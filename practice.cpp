// VARIABLE SCOPING PRACTICE
#include <iostream>
#include <iomanip>

double withdraw_money(double balance);
double deposit_money(double balance);

namespace banking {
    double balance = 0;
    int choice;
}

int main() {
    using namespace banking;
    do{

        std::cout << "Welcome to Pheeb's bank!" << std::endl;
        std::cout << "-------------------------" << std::endl;
        std::cout << "Withdraw money - 1" << std::endl; 
        std::cout << "Deposit money - 2" << std::endl;
        std::cout << "Show balance - 3" << std::endl;
        std::cout << "Exit banking program - 4" << std::endl;
        std::cout << "-------------------------" << std::endl;

        std::cout << "What would you like to do? ";
        std::cin >> choice;

        switch (choice){
            case 1: balance = withdraw_money(balance); std::cout << "Your balance is now: " << std::setprecision(2) << std::fixed << balance << "$." << std::endl; break;
            case 2: balance = deposit_money(balance); std::cout << "Your balance is now: " << std::setprecision(2) << std::fixed << balance << "$." << std::endl; break;
            case 3: std::cout << "Your balance is: " << std::setprecision(2) << std::fixed << balance << "$." << std::endl; break;
            default: std::cout << "Enter a correct choice option!" << std::endl; break;
        }

        }while (choice != 4);

    std::cout << "Thank you for banking with Pheeb's bank!" << std::endl;
}

double withdraw_money(double balance){
    if (balance == 0){
        std::cout << "You cannot withdraw with a balance of 0$!" << std::endl;
        return balance;
    }

    int amount_to_withdraw;
    std::cout << "How much would you like to withdraw? ";
    std::cin >> amount_to_withdraw;

    balance = balance - amount_to_withdraw;

    return balance;

}

double deposit_money(double balance){
    int amount_to_deposit;
    std::cout << "How much would you like to deposit? ";
    std::cin >> amount_to_deposit;

    balance += amount_to_deposit;

    return balance;

}