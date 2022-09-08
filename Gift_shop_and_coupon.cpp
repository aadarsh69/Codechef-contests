#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int nn, kk;
        cin >> nn >> kk;
        int g[nn], ans = nn, sum = 0;
        for (int i = 0; i < nn; i++)
        {
            cin >> g[i];
        }
        sort(g, g + nn);
        for (int i = 0; i < nn; i++)
        {
            if (sum + (g[i] + 1) / 2 > kk)
            {
                ans = i;
                break;
            }
            sum += g[i];
        }
        cout << ans << endl;
    }
    return 0;
}