
#include <iostream>

// Function to triple an integer
int tripleInt(int number) {
    return number * 3;
}

int main() {
    int inputNumber;

    // Prompt user for input
    std::cout << "Enter an integer: ";
    std::cin >> inputNumber;

    // Call the tripleInt function and display the result
    int tripledValue = tripleInt(inputNumber);
    std::cout << "The triple of " << inputNumber << " is " << tripledValue << "." << std::endl;

    return 0;
}