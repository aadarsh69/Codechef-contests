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
        int g[n];
        for (int i = 0; i < n; i++)
        {
            cin >> g[n];
        }
        int l[n];
        for (int i = 0; i < n; i++)
        {
            l[n] = g[n];
        }
        sort(l, l + n);
        for (int i = 0; i < n; i++)
        {
            for (int j = n - 1; j > i; j--)
            {
                if ((g[n] & g[j]) == 0)
                {
                    continue;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (g[i] != l[i])
            {
                count = 1;
                break;
            }
        }
        if (count == 0)
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