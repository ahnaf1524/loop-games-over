#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter the number you want to reverse : ";
    cin >> number;
    int reverse = 0;
    while (number != 0)
    {
        int lastDigit = number % 10;
        reverse = reverse * 10 + lastDigit;
        number /= 10;
    }
    cout << reverse << endl;
    return 0;
}