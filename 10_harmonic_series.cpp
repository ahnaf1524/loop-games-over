#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int N;
    cout << "Enter the number of terms (N) : ";
    cin >> N;
    if (N <= 0)
    {
        cout << "Negative Numbers not allowed" << endl;
    }
    else
    {
        double harmonicSum = 0.0;
        for (int i = 1; i <= N; ++i)
        {
            harmonicSum += 1.0 / i;
        }
        cout << "The sum of harmonic series is ";
        cout << fixed << setprecision(3) << harmonicSum << endl;
    }
    return 0;
}