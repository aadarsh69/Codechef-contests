#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int al, bo;
        cin >> al >> bo;
        if (al == 0 || bo == 0)
        {
            cout << 7 << endl;
        }
        else
        {
            int c = max(al, bo);
            cout << 7 - c << endl;
        }
    }
    return 0;
}