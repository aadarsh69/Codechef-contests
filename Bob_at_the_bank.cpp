#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int y, h, n, b;
        cin >> y >> h >> n >> b;
        int r = (h - n) * b;
        cout << y + r << endl;
    }
    return 0;
}