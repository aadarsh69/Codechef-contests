#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int nn, mm;
        cin >> nn >> mm;
        if (nn == 0)
        {
            cout << 2 * mm << endl;
        }
        else if (nn > mm)
        {
            cout << (2 * nn) - mm << endl;
        }
        else
        {
            cout << nn << endl;
        }
    }
    return 0;
}