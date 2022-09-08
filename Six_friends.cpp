#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int xc, yt;
        cin >> xc >> yt;
        int d = 3 * xc;
        int tr = 2 * yt;
        if (d < tr)
        {
            cout << d << endl;
        }
        else
        {
            cout << tr << endl;
        }
    }
    return 0;
}