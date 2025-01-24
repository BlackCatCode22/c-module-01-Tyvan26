#include <iostream>
#include <string>

int main() {
    std::string name;

    // Prompt user for their name
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // Display a greeting message
    std::cout << "Hello, " << name << "!Welcome!" << std::endl;

    return 0;
}
