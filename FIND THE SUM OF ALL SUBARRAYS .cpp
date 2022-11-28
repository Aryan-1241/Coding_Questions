
#include <iostream>

using namespace std;

// FIND THE SUM OF ALL SUBARRAYS

int main()
{
    int a[3] = {1, 2, 2};
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum = 0;
        for (int j = i; j < 3; j++)
        {
            sum += a[j];
            cout << sum << endl;
        }
    }

    return 0;
}