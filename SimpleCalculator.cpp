#include <iostream>
using namespace std;

void performOperation(char operation, double num1, double num2) {
    double result;
    
    switch(operation) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << result << endl;
            break;
        case '/':
            if(num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << result << endl;
            } else {
                cout << "Error! Division by zero." << endl;
            }
            break;
        default:
            cout << "Invalid operation!" << endl;
    }
}

int main() {
    double num1, num2;
    char operation;

    cout << "Welcome to the Simple Calculator!" << endl;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    cout << "Choose an operation (+, -, *, /): ";
    cin >> operation;

    performOperation(operation, num1, num2);

    return 0;
}
