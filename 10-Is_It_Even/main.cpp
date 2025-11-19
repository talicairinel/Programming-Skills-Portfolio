#include <iostream>

int main() {       // Entry point
    int number; 

    std::cout << "Enter an integer: ";  // Print out Enter an integer
    std::cin >> number;      // Get input from the user

    // The modulus operator (%) finds the remainder of a division.
    if (number % 2 == 0) {
        // If the remainder when dividing by 2 is 0, the number is even.
        std::cout << number << " is EVEN." << std::endl;  // Print out is EVEN
    } 
    else {
        std::cout << number << " is ODD." << std::endl;   // Print out is ODD

    }

    return 0;
}
