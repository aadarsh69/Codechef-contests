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
        if (yt > xc)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << xc - yt << endl;
        }
    }
    return 0;
}