#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter the number : ";
    cin >> number;
    unsigned long long fact = 1;
    if (number < 0)
    {
        cout << "Negative numbers are not allowed!" << endl;
    }
    else
    {
        for (int i = 1; i <= number; ++i)
        {
            fact *= i;
        }
        cout << fact << endl;
    }
    return 0;
}