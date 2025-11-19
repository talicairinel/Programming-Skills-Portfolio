

#include <iostream>            

int main() {                  
    int n = 0;                 // Target number
    std::cout << "Enter N: "; // Prompt user
    std::cin >> n;             // Read N
    if (n >= 1) {            
        for (int i = 1; i <= n; ++i) { // Count up from 1 to N
            std::cout << i << ' ';     // Print current value
        }
    } else {                   // If N < 1
        for (int i = 1; i >= n; --i) { // Count down from 1 to N
            std::cout << i << ' ';     // Print current value
        }
    }
    std::cout << std::endl;    // End line after sequence
    return 0;                 
}
