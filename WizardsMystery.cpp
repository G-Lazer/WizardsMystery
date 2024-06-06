#include <iostream>

void enterDungeon() {
    std::cout << "Be careful, you may meet your doom." << std::endl;
}

void leaveDungeon() {
    std::cout << "Coward." << std::endl;
}

int main() {
    std::cout << "The dungeon before you holds many mysteries. Will you enter?\n";
    std::cout << "1. The mysteries will be unraveled.\n";
    std::cout << "2. Maybe tomorrow.\n";

    int choice;
    std::cin >> choice;

    switch (choice) {
        case 1:
            enterDungeon();
            break;
        case 2:
            leaveDungeon();
            break;
        default:
            std::cout << "Your will is not that free. Enter only one of the available numbers." << std::endl;
    }
    return 0;
}
