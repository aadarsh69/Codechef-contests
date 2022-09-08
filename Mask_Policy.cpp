#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, d;
        cin >> n >> a;
        d = n - a;
        if (d > a)
        {
            cout << a << endl;
        }
        else if (a > d)
        {
            cout << d << endl;
        }
        else
        {
            cout << a << endl;
        }
    }
    return 0;
}