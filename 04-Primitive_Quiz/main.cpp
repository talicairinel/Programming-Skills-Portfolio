#include <iostream>

int main() {
    int answer; // This variable will store the user input.
    
    std::cout << "Quiz: What is 5 * 6? ";
    std::cin >> answer;

    // The 'if' statement checks a condition to decide which block of code to run.
    if (answer == 30) {
        std::cout << "Correct!" << std::endl;
    } else {
        std::cout << "Incorrect." << std::endl; // The 'else' block runs if the condition is false.
    }

    return 0;
}