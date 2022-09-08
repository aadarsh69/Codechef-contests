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
        int w[n];
        for (int i = 0; i < n; i++)
        {
            cin >> w[i];
        }
        int u = 0;
        for (int i = 0; i < n; i++)
        {
            int r = 1 + i + u;
            if (r == w[i])
            {
                u++;
            }
        }
        cout << u << endl;
    }
    return 0;
}