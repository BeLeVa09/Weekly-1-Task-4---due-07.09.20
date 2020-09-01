#include <iostream>

int choice;

int main()
{
    Task4:

    int coffee = 1;
    int tea = 2;
    int cola = 3;
    
    std::cout << "What is your favourite drink?\n";
    std::cout << "1. Coffee\n";
    std::cout << "2. Tea\n";
    std::cout << "3. Coca Cola\n";
    std::cout << "(Answer with 1-3)\n";
    std::cin >> choice;

    if (choice == coffee) {
        std::cout << "\nCoffee is delicious\n";
    }
    else if (choice == tea) {
        std::cout << "\nTea gives peace of mind\n";
    }
    else if (choice == cola) {
        std::cout << "\nCoke will give you a white smile\n";
    }
    else {
        system("cls");
        goto Task4;
    }
}