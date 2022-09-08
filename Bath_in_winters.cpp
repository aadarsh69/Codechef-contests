#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int j, k;
        cin >> j >> k;
        int l = k * 2;
        int m=j/l;
        if (m <= j)
        {
            cout << m << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    return 0;
}