#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int xc, yu, zx;
        cin >> xc >> yu >> zx;
        int r = yu / xc;
        if (r > zx)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << zx - r << endl;
        }
    }
    return 0;
}