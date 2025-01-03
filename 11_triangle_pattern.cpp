#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    for (int rows = 1; rows <= N; ++rows)
    {
        for (int cols = 1; cols <= rows; ++cols)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}