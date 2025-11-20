#include <iostream>
#include <string>
using namespace std;

// This is a user-defined function. It encapsulates the greeting logic.
void printGreeting(std::string name) {
    std::cout << "Hello, " << name << "!" << std::endl;
}

int main() {
    std::string user_name;

    std::cout << "Please enter your name: ";
    std::cin >> user_name; // std::cin reads user input.

    printGreeting(user_name); // This is the function call.

    return 0;
}
