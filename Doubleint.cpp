#include <iostream>

// Function to double an integer
int doubleInt(int number) {
    return number * 2;
}

int main() {
    int inputNumber;

    // Prompt user for input
    std::cout << "Enter an integer: ";
    std::cin >> inputNumber;

    // Call the doubleInt function and display the result
    int doubledValue = doubleInt(inputNumber);
    std::cout << "The double of " << inputNumber << " is " << doubledValue << "." << std::endl;

    return 0;
}
