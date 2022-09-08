#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int nn, xz;
        cin >> nn >> xz;
        int s = nn / 6;
        int c = ceil(s);
        if (nn <= 6)
        {
            cout << xz << endl;
        }
        else
        {
            if (nn % 6 == 0)
            {
                cout << c * xz << endl;
            }
            else
            {
                cout << (c + 1) * xz << endl;
            }
        }
    }
    return 0;
}