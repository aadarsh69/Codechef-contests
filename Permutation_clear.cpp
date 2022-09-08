#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m;
        cin >> m;
        vector<int> g(m);
        for (int i = 0; i < m; i++)
        {
            cin >> g[i];
        }
        int k;
        cin >> k;
        set<int> d;
        for (int j = 0; j < k; j++)
        {
            int x;
            cin >> x;
            d.insert(x);
        }
        for (int i = 1; i < m; i++)
        {
            if (d.count(g[i]))
            {
                continue;
            }
            else
            {
                cout << g[i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}