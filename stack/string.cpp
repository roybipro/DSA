#include <iostream>
#include <cstring> // Include the C string library for strlen, strcpy, strcat, and strcmp

using namespace std;

int main()
{
    // Declare and initialize some C-style strings
    char str1[100] = "Hello";
    char str2[100] = "World";
    char str3[100];
    char str4[100] = "Hello";

    // Length of str1
    cout << "Length of str1: " << strlen(str1) << endl;

    // Copy str2 into str3
    strcpy(str4, str2);
    cout << "After copying, str3: " << str4 << endl;

    // Concatenate str1 and str2, storing the result in str1
    strcat(str1, str2);
    cout << "After concatenation, str1: " << str1 << endl;

    // Compare str1 and str4
    int result = strcmp(str1, str4);
    if (result == 0)
    {
        cout << "str1 and str4 are equal." << endl;
    }
    else if (result < 0)
    {
        cout << "str1 is less than str4." << endl;
    }
    else
    {
        cout << "str1 is greater than str4." << endl;
    }

    return 0;
}