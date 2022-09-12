#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int h, j, k;
        cin >> h >> j >> k;
        int re = 2 * (h + j);
        int tc = k * re;
        cout << tc << endl;
    }
    return 0;
}