#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int nc, can;
        cin >> nc >> can;
        if (can >= nc)
        {
            cout << 0 << endl;
        }
        else
        {
            int l = nc - can;
            if ((l % 4) == 0)
            {
                cout << l / 4 << endl;
            }
            else
            {
                cout << (l / 4) + 1 << endl;
            }
        }
    }
    return 0;
}