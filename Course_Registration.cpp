#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int nn, mm, kk;
        cin >> nn >> mm >> kk;
        if (mm - kk > nn)
        {
            cout << "Yes" << endl;
        }
        else if (mm - kk == nn)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}