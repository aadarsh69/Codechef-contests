#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int p1, p2, e1, e2;
        cin >> p1 >> p2 >> e1 >> e2;
        int d1 = p1 - e1;
        int d2 = p2 - e2;
        int n1 = pow(d1, 2);
        int n2 = pow(d2, 2);
        if ((n1 + n2) % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}