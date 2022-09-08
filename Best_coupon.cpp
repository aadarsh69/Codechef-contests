#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int xc;
        cin >> xc;
        int d = 0.1 * xc;
        if (d > 100)
        {
            cout << d << endl;
        }
        else
        {
            cout << 100 << endl;
        }
    }
    return 0;
}