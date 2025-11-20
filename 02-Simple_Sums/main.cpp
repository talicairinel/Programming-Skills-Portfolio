#include <iostream>
using namespace std;

int main() {
    int num1, num2, sum; // Declare integer variables 

    std::cout << "Enter the first integer: ";   // First integer imput
    std::cin >> num1;

    std::cout << "Enter the second integer: ";    // Second integer imput

    std::cin >> num2;

    sum = num1 + num2;  //  Adding the two integer

    std::cout << "The sum is: " << sum << std::endl;  // Print out the sum
    return 0;
}
