#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        double u = pow(0.143 * n, n);
        int d = floor(u);
        if (u - d < 0.5)
        {
            cout << d << endl;
        }
        else
        {
            cout << d + 1 << endl;
        }
    }
    return 0;
}