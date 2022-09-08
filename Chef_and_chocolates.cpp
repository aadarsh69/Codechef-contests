#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int cc, xx, yy;
        cin >> cc >> xx >> yy;
        int r = cc - xx;
        cout << r * yy << endl;
    }
    return 0;
}
