#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, p, q, r;
        cin >> a >> b >> c >> p >> q >> r;
        if ((p + b + c) > (p + q + r) / 2)
        {
            cout << "Yes" << endl;
        }
        else if ((q + a + c) > (p + q + r) / 2)
        {
            cout << "Yes" << endl;
        }
        else if ((r + a + b) > (p + q + r) / 2)
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