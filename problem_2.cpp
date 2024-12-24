// input : 8
// Output : 0 1 1 2 3 5 8 13 21 34 55
#include <iostream>
using namespace std;
int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}
int main()
{
    int N;
    cin >> N;
    // recursive
    for (int i = 0; i <= N; ++i)
    {
        int fibN = fib(i);
        cout << fibN << " ";
    }
    cout << "  =======  \n";
    // iterative
    int a = 0, b = 1, next;
    cout << 0 << " " << 1 << " ";
    for (int i = 1; i < N; ++i)
    {
        next = a + b;
        a = b;
        b = next;
        cout << next << " ";
    }
    return 0;
}