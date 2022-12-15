#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int h, j, f;
        cin >> h >> j >> f;
        int r = log2(h);
        int s = r * j;
        int d = (r - 1) * f;
        int a = s + d;
        cout << a << endl;
    }
    return 0;
}