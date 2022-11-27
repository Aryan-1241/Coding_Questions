
#include <iostream>

using namespace std;

int main()
{
    // cout<<"Hello World";

    int a, b;
    int i;
    cin >> a >> b;
    for (int n = a; n <= b; n++)
    {
        for (i = 2; i <= n; i++)
        {
            if (n % i == 0)
            {
                break;
            }
        }
        if (i == n)
        {
            cout << n << "\n";
        }
    }

    return 0;
}