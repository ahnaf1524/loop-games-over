#include <iostream>
using namespace std;

int main()
{
    int number, temp;
    cout << "Enter the number : ";
    cin >> number;
    temp = number;
    int reverse = 0;
    while (temp != 0)
    {
        int lastDigit = temp % 10;
        reverse = reverse * 10 + lastDigit;
        temp /= 10;
    }
    if (reverse == number)
    {
        cout << number << " is palindrome" << endl;
    }
    else
    {
        cout << number << " not a palindrome" << endl;
    }
    return 0;
}