#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int xc, yt, zs;
        cin >> xc >> yt >> zs;
        if (zs >= xc + yt)
        {
            cout << 2 << endl;
        }
        else if (zs >= xc)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    return 0;
}