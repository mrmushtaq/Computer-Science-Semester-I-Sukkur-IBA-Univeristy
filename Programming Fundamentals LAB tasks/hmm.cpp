#include <iostream>
using namespace std;
#include <string>
#include <cmath>

int main()
{
    string num1, num2;
    long decsum;
    cout << "Enter a first hexadecimal number ";
    cin >> num1;
    cout << "Enter a second hexadecimal number ";
    cin >> num2;

    int decimalnum1 = 0, temp1 = 0;
    for (int i = 0; i < num1.length(); i++)
    {
        if (num1[i] >= 'a' && num1[i] <= 'f')
            temp1 = num1[i] - 'a' + 10;
        else if (num1[i] >= 'A' && num1[i] <= 'F')
            temp1 = num1[i] - 'A' + 10;
        else if (num1[i] >= '0' && num1[i] <= '9')
            temp1 = num1[i] - '0';
        else
        {
            cout << "Invalid Entry.";
            return -1;
        }
        decimalnum1 += temp1 * pow(16, num1.length() - 1 - i);
    }

    int decimalnum2 = 0, temp2 = 0;
    for (int i = 0; i < num2.length(); i++)
    {
        if (num2[i] >= 'a' && num2[i] <= 'f')
            temp2 = num2[i] - 'a' + 10;
        else if (num2[i] >= 'A' && num2[i] <= 'F')
            temp2 = num2[i] - 'A' + 10;
        else if (num2[i] >= '0' && num2[i] <= '9')
            temp2 = num2[i] - '0';
        else
        {
            cout << "Invalid Entry.";
            return -1;
        }
        decimalnum2 += temp2 * pow(16, num2.length() - 1 - i);
    }

    decsum = decimalnum1 + decimalnum2;
    cout << "Decimal representation of num1: " << decimalnum1;
    cout << endl << "Decimal representation of num2: " << decimalnum2;
    cout << endl << "Sum of decimal representations: " << decsum << endl;

    // Now, let's print the hexadecimal sum
    cout << "Hexadecimal sum: ";
    // Loop through each digit in the hexadecimal representation
    for (int i = 0; decsum > 0; i++)
    {
        int temp1, temp2;
        temp2 = decsum;
        temp1 = temp2 % 16;
        decsum = decsum / 16;

        if (temp1 >= 10 && temp1 <= 15)
        {
            char temp4;
            temp4 = temp1 + 'a' - 10;
            cout << temp4;
        }
        else
            cout << temp1;
    }

    return 0;
}

