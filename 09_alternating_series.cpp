#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    if (N <= 0)
    {
        cout << "Negative Integers are not allowed!" << endl;
    }
    for (int i = 1; i <= N; ++i)
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
        }
        else
        {
            cout << i * -1 << " ";
        }
    }
    return 0;
}