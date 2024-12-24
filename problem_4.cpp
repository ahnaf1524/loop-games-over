#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, r, n = 4;
    cin >> a >> r;
    int current_term = a;
    for (int i = 1; i <= n; ++i)
    {
        cout << current_term << " ";
        current_term = current_term * r;
    }
    return 0;
}