#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    if (N <= 0)
    {
        cout << "Please enter positive integer\n";
    }
    int first = 0, second = 1;
    for (int i = 0; i < N; ++i)
    {
        cout << first << " ";
        int next = first + second;
        first = second;
        second = next;
    }
    return 0;
}