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
        if (yt % xc != 0)
        {
            cout << yt / xc << endl;
        }
        else
        {
            cout << yt / xc - 1 << endl;
        }
    }
    return 0;
}