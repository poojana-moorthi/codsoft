/*A calculator program that performs basic arithmetic operations, including addition, subtraction, multiplication, and division. The program allows users to input two numbers and select the desired operation, providing accurate results instantly.*/
#include <iostream>
using namespace std;
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

int main() {
    while (true) {
        double num1, num2;
        char operation;

        cout << "Welcome to the Basic Calculator!\n";
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;

        cout << "Choose an operation (+, -, *, /): ";
        cin >> operation;

        double result;
        switch (operation) {
            case '+':
                result = add(num1, num2);
                cout << "Result: " << result << endl;
                break;
            case '-':
                result = subtract(num1, num2);
                cout << "Result: " << result << endl;
                break;
            case '*':
                result = multiply(num1, num2);
                cout << "Result: " << result << endl;
                break;
            case '/':
                if (num2 != 0) {
                    result = divide(num1, num2);
                    cout << "Result: " << result << endl;
                } else {
                    cout << "Error: Division by zero is not allowed." << endl;
                }
                break;
            default:
                cout << "Invalid operation. Please choose one of +, -, *, or /." << endl;
        }

        cout << "Starting a new calculation...\n\n";
    }

    return 0;
}
double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}