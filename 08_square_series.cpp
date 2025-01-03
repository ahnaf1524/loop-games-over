#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    if (N <= 0)
    {
        cout << "Positive integers are not allowed!" << endl;
    }
    for (int i = 1; i <= N; ++i)
    {
        cout << i * i << " ";
    }
    return 0;
}