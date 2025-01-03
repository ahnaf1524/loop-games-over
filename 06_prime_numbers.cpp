#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    for (int i = 2; i <= number; ++i)
    {
        if (isPrime(i))
        {
            cout << i << endl;
        }
    }
    return 0;
}
