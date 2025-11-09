#include <iostream>
using namespace std;
#include <string>
#include <cmath>
int hexaTodecimal1(string);
string decimalToHexadecimal(int decimalNum);

int main()
{
	char ask;
do
{
    string num1, num2;

    cout << "Enter a first hexadecimal number ";
    cin >> num1;
    cout << "Enter a second hexadecimal number ";
    cin >> num2;

		long Num1Decimal=hexaTodecimal1(num1);
		long Num2Decimal=hexaTodecimal1(num2);

    	long decimalNum = Num1Decimal + Num2Decimal;

	if(decimalNum<99999999 && decimalNum>0)
	{
	string hexNum = decimalToHexadecimal(decimalNum);
	cout << endl << "Sum of Hexa representations: " << hexNum << endl;	
	}
	else
	cout<<"\nAddition Overflow ";

cout<<"\nDo you want to continue ? ";
cin>>ask;
}while(ask=='y');
    return 0;
}

int hexaTodecimal1(string num1)
{
	
    int decimalnum1 = 0, temp1 = 0;
    for (int i=0;i<num1.length();i++)
    {
        if (num1[i]>='a' && num1[i]<='f')
            temp1=num1[i] - 'a' +10;
        else if (num1[i]>= 'A' && num1[i] <= 'F')
            temp1 = num1[i] - 'A' + 10;
        else if (num1[i] >= '0' && num1[i] <= '9')
            temp1 = num1[i] - '0';
        else
        {
            cout << "Invalid Entry.";
            return 0;
        }
        decimalnum1 += temp1 * pow(16, num1.length() - 1 - i);
    }

return decimalnum1;
	
}


string decimalToHexadecimal(int decimalNum)
 {
    string hexNum;

    // Special case for 0
    if (decimalNum == 0) {
        hexNum = "0";
    } else {
        int digits = 0;
        while (decimalNum > 0)
		 {
            int remainder = decimalNum % 16;

            // Convert remainder to hexadecimal digit
            char hexDigit;
            if (remainder < 10) 
			{
                hexDigit = remainder + '0';
            }
			 else 
			{
                hexDigit = remainder - 10 + 'A';
            }    
            hexNum = hexDigit + hexNum;
            decimalNum /= 16;            
        }
    }

    return hexNum;
}

