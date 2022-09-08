#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int xi, xz, yi, yz;
        cin >> xi >> xz >> yi >> yz;
        float c1;
        float c2;
        c1 = yi / xi;
        c2 = yz / xz;
        if (c1 < c2)
        {
            cout << -1 << endl;
        }
        else if (c1 == c2)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
    return 0;
}