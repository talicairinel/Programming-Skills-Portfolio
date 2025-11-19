

#include <iostream>         

int main() {                 
    int pin = 0;               // Secret PIN provided by user
    std::cout << "Enter a 4-digit PIN: "; // Prompt for PIN
    std::cin >> pin;           // Read PIN (no validation for simplicity)
    int attempts = 0;          // Count number of guesses
    for (int g = 0; g <= 9999; ++g) { 
        attempts++;            // Increment attempts counter
        if (g == pin) {        // If guess matches PIN
            std::cout << "Cracked " << g // Report cracked PIN
                      << " in " << attempts // Report attempts
                      << " attempts" << std::endl; // Newline
            break;             // Stop search
        }
    }
    return 0;               
}
