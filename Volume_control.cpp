#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int xx, yy;
        cin >> xx >> yy;
        int d = xx - yy;
        cout << abs(d) << endl;
    }
    return 0;
}