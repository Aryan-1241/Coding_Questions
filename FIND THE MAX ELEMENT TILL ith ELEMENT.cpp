
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    // FIND THE MAX ELEMENT TILL ith ELEMENT
    int arr[5] = {2, 4, 7, 0, 3};
    int mx = -199999;
    for (int i = 0; i < 5; i++)
    {
        mx = max(mx, arr[i]);
    }
    cout << mx;

    return 0;
}
