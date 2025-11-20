#include <iostream>
using namespace std;

int main() {
    int month_num; 
    int days = -1; 

    std::cout << "Enter month number (1-12): ";
    std::cin >> month_num;

    // switch statements efficiently handle multiple possible values for a single variable.
    switch (month_num) {
        case 1: 
        case 3: 
        case 5: 
        case 7: 
        case 8: 
        case 10: 
        case 12: 
            days = 31;
            break;
        case 4: 
        case 6: 
        case 9: 
        case 11: 
            days = 30;
            break; // 'break' is essential to exit the switch after a case is matched.
        case 2: 
            days = 28; 
            break;
        default:
            std::cout << "Invalid month number." << std::endl;
            return 1; 
    }

    std::cout << "Month " << month_num << " has " << days << " days." << std::endl;

    return 0;
}
