#include <iostream>

int main() {
    char charValue = 'A';
    int intValue = charValue;  // Implicit casting from char to int

    std::cout << "charValue: " << charValue << std::endl;
    std::cout << "intValue: " << intValue << std::endl;

    return 0;
}

