#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n1, x2, k3;
        cin >> n1 >> x2 >> k3;
        int di = k3 / x2;
        if (di > n1)
        {
            cout << n1 << endl;
        }
        else
        {
            cout << abs(di) << endl;
        }
    }
    return 0;
}