#include <iostream>



int main() {
    float num1, num2;
    char op;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;
    
    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> op;

    switch(op) {
        case '+':
            std::cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            std::cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            std::cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            if(num2 == 0) {
                std::cout << "Error: Division by zero";
            }
            else {
                std::cout << num1 << " / " << num2 << " = " << num1 / num2;
            }
            break;
        default:
            std::cout << "Invalid operator";
    }

    return 0;
}
