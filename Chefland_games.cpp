#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int d, f, g, h;
        cin >> d >> f >> g >> h;
        if (d == 0 && f == 0 && g == 0 && h == 0)
        {
            cout << "IN" << endl;
        }
        else
        {
            cout << "OUT" << endl;
        }
    }
    return 0;
}