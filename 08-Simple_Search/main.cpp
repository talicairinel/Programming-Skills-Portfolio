#include <iostream>
using namespace std;

int main() {
    int numbers[] = {15, 8, 22, 10, 5, 30}; // Defines array.
    const int ARRAY_SIZE = 6; 
    int target;
    int found_index = -1; // -1 conventionally means the element was not found.

    std::cout << "Enter number to search: ";
    std::cin >> target;

    // A 'for' loop performs the linear search, checking one element at a time.
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        if (numbers[i] == target) {
            found_index = i; // Store the index position where the target was located.
            break; 
        }
    }

    if (found_index != -1) {
        std::cout << "Found " << target << " at index: " << found_index << std::endl;
    } else {
        std::cout << target << " not found." << std::endl;
    }

    return 0;
}
