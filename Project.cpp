#include <iostream>

int main() {
    char op;
    double num1, num2;

    // Get operator input
    std::cout << "Enter an operator (+, -, *, /): ";
    std::cin >> op;

    // Get numbers input
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    switch (op) {
        case '+':
            std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
            break;
        case '-':
            std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
            break;
        case '*':
            std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
            break;
        case '/':
            if (num2 != 0) { // Handle division by zero
                std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
            } else {
                std::cout << "Error! Division by zero is not allowed." << std::endl;
            }
            break;
        default:
            // If the operator is not one of the valid options
            std::cout << "Error! Invalid operator." << std::endl;
            break;
    }

    return 0;
}
