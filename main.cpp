#include <iostream>

// Global variables
double Number[2];    // For basic operations
double OddNumber;    // For squaring
int ModNumber[2];    // For modulo operation
short int Choose;    // Menu choice

// Prints main menu
void MainMenu(){
    std::cout << "[1] - Addition" << std::endl;
    std::cout << "[2] - Subtraction" << std::endl;
    std::cout << "[3] - Multiplication" << std::endl;
    std::cout << "[4] - Division" << std::endl;
    std::cout << "[5] - Get Mod" << std::endl;
    std::cout << "[6] - Squaring" << std::endl;
    std::cout << "[0] - Exit" << std::endl;
}

// Takes two double numbers
void EnterNumbers(){
    std::cout << "Enter the first number: ";
    std::cin >> Number[0];

    std::cout << "Enter the second number: ";
    std::cin >> Number[1];
}

// Takes two integer numbers for modulo
void EnterModNumbers(){
    std::cout << "Enter the first number: ";
    std::cin >> ModNumber[0];

    std::cout << "Enter the second number: ";
    std::cin >> ModNumber[1];
}

// Gets menu selection
void ChooseFunction(){
    std::cout << "Choose: ";
    std::cin >> Choose;
}

int main(){
    while(true){
        MainMenu();
        ChooseFunction();

        switch(Choose){
        case 0:
            // Exit the program
            return 0;

        case 1:
            // Addition
            EnterNumbers();
            std::cout << "Sum of numbers: " << Number[0] + Number[1] << std::endl;
            break;

        case 2:
            // Subtraction
            EnterNumbers();
            std::cout << "Difference: " << Number[0] - Number[1] << std::endl;
            break;

        case 3:
            // Multiplication (negative numbers are not allowed)
            EnterNumbers();

            if (Number[0] >= 0 && Number[1] >= 0){
                std::cout << "Multiplication of numbers: " << Number[0] * Number[1] << std::endl;
            }
            else {
                std::cout << "Negative numbers are not allowed!" << std::endl;
            }
            break;

        case 4:
            // Division (check for zero and negative numbers)
            EnterNumbers();

            if (Number[1] == 0){
                std::cout << "Division by zero is not allowed!" << std::endl;
            }
            else if (Number[0] > 0 && Number[1] > 0){
                std::cout << "Division of numbers: " << Number[0] / Number[1] << std::endl;
            }
            else {
                std::cout << "Negative numbers are not allowed!" << std::endl;
            }
            break;

        case 5:
            // Modulo operation (only positive integers)
            EnterModNumbers();

            if (ModNumber[1] == 0){
                std::cout << "Modulo by zero is not allowed!" << std::endl;
            }
            else if (ModNumber[0] >= 0 && ModNumber[1] > 0){
                std::cout << "Mod of the numbers: " << ModNumber[0] % ModNumber[1] << std::endl;
            }
            else {
                std::cout << "Negative numbers are not allowed!" << std::endl;
            }
            break;

        case 6:
            // Squaring a number
            std::cout << "Enter a number: ";
            std::cin >> OddNumber;

            std::cout << "Square of the number: " << OddNumber * OddNumber << std::endl;
            break;

        default:
            // Invalid menu choice
            std::cout << "Invalid Selection!" << std::endl;
            break;
        }
    }

    return 0;
}
