#include <iostream>
#include <iomanip>

int main() {
    float num1, num2;

    // Set fixed-point precision for floating-point output (2 decimal places)
    std::cout << std::fixed << std::setprecision(2);

    // Input two numbers from the user
    std::cout << "Enter your first number: ";
    std::cin >> num1;

    std::cout << "Enter your second number: ";
    std::cin >> num2;

    // Compare the two numbers and display the result
    if (num1 > num2) {
        std::cout << num1 << " is bigger." << std::endl;
        std::cout << num2 << " is smaller." << std::endl;
    } else if (num1 == num2) {
        std::cout << "Both numbers are equal." << std::endl;
    } else {
        std::cout << num1 << " is smaller." << std::endl;
        std::cout << num2 << " is bigger." << std::endl;
    }

    return 0; // Exit the program
}
