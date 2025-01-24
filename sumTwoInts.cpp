#include <iostream>

// Function to sum two integers
int sumTwoInts(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int firstNumber, secondNumber;

    // Prompt user for input
    std::cout << "Enter the first integer: ";
    std::cin >> firstNumber;

    std::cout << "Enter the second integer: ";
    std::cin >> secondNumber;

    // Call the sumTwoInts function and display the result
    int sum = sumTwoInts(firstNumber, secondNumber);
    std::cout << "The sum of " << firstNumber << " and " << secondNumber << " is " << sum << "." << std::endl;

    return 0;
}