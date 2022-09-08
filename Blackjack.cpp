#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a1, b2, c3;
        cin >> a1 >> b2;
        int q = 21 - (a1 + b2);
        if (a1 + b2 < 21 && q <= 10)
        {
            cout << q << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}