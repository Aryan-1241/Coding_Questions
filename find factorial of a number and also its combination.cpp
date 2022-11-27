#include <iostream>

using namespace std;

int fact(int n)
{
    int prod = 1;
    for (int i = 2; i <= n; i++)
    {
        prod = prod * (i);
    }
    return prod;
}

int main()
{
    int n;
    int r;
    cin >> n >> r;

    int ans = fact(n);
    cout << "the factorial is " << ans << endl;

    // find combination formula i.e nCr

    int comb = fact(n) / (fact(r) * fact(n - r));
    cout << "the combination is " << comb;

    return 0;
}
