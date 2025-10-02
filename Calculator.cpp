#include<iostream>
using namespace std;

int main()
{
    double number[2];
    int menu;

    while(true) {  // Operation Menu
        cout << "[1] Addition\n";
        cout << "[2] Multiplication\n";
        cout << "[3] Subtraction\n";
        cout << "[4] Division\n";
        cout << "[0] Exit\n";
        cin >> menu;

        if(menu == 0) {
          break;
        }   //exit

        cout << "\nEnter the first number: ";
        cin >> number[0];

        cout << "Enter the second number: ";
        cin >> number[1];

        cout <<"\n";

        switch(menu) {
        case 1:
            cout << "Sum of numbers: " << number[0] + number[1] << "\n";
             break;

        case 2:
            cout << "Multiplication of numbers: " << number[0] * number[1] << "\n";
             break;

        case 3:
            cout << "Difference of numbers: " << number[0] - number[1] << "\n";
             break;

        case 4:
            cout << "Division of numbers: " << number[0] / number[1] << "\n";
             break;

        default:
            cout << "Invalid selection. Please choose a valid option.\n";
             break;
        }


    }

        return 0;
}
