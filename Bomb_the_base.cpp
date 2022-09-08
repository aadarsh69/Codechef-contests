#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int nn, xx;
        cin >> nn >> xx;
        int g[nn];
        for (int i = 0; i < nn; i++)
        {
            cin >> g[i];
        }
        int count = 0;
        for (int i = 0; i < nn; i++)
        {
            if (g[i] < xx)
            {
                count=i+1;
            }
            
        }
        cout << count << endl;
    }
    return 0;
}