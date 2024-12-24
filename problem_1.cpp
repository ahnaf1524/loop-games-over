// Write a program to print the first N terms of an arithmetic progression series, given the first term (a) and common difference (d).
// Input :
// 2 3 5
// Output :
// 2 5 8 11 14
#include <iostream>
using namespace std;
int main()
{
    int a, d, N;
    cin >> a >> d >> N;
    for (int i = 1; i <= N; i++)
    {
        cout << a + (i - 1) * d << " ";
    }
    return 0;
}
