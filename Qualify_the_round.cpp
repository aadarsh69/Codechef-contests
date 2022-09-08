#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, rd, e;
        cin >> x >> rd >> e;
        if (rd + e * 2 >= x)
        {
            cout << "Qualify" << endl;
        }
        else
        {
            cout << "Notqualify" << endl;
        }
    }
    return 0;
}