#include <iostream>
using namespace std;

void ReverseString(char* str) {
    cout << "\nString in REVERSE order\n";
    
    // Find the length of the string
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    // Use two pointers to reverse the string
    for (int i = 0, j = length - 1; i < j; i++, j--) {
        // Swap characters using pointers
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    // Print the reversed string
    cout << str;
}

int main() {
    const int maxSize = 100; // Adjust the size based on your needs
    char str[maxSize];

    cout << "Enter a string: ";
    cin.getline(str, maxSize);

    ReverseString(str);

    return 0;
}

