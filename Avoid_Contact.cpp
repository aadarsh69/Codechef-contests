#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (x == y)
        {
            cout << (2 * x) - 1 << endl;
        }
        else
        {
            cout << (x + y) << endl;
        }
    }
    return 0;
}