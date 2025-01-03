#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    cout << "Enter the rows of hollow rectangle : ";
    cin >> rows;
    cout << "Enter the columns of hollow rectangle : ";
    cin >> cols;
    for (int i = 1; i <= rows; ++i)
    {
        for (int j = 1; j <= cols; ++j)
        {
            if (i == 1 || i == rows || j == cols || j == 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}