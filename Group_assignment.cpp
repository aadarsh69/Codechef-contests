#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n1, x2;
        cin >> n1 >> x2;
        int f;
        if (x2 <= n1)
        {
            f = n1 - x2;
            cout << n1 + f + 1 << endl;
        }
        else
        {
            f = abs(n1 - x2);
            cout << n1 - f + 1 << endl;
        }
    }
    return 0;
}