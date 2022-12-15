#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int d;
        cin >> d;
        string w;
        cin >> w;
        string e;
        cin >> e;
        map<char, int> m;
        for (int k = 0; k < d; k++)
        {
            m[w[k]]++;
        }
        map<char, int> p;
        for (int l = 0; l < d; l++)
        {
            p[e[l]]++;
        }
        int ans = 0;
        int x = 0;
        int y = 0;
        for (int j = 0; j < d; j++)
        {
            if (m.find(w[j]) != m.end())
            {
                x = m[w[j]];
            }
            if (p.find(w[j]) != p.end())
            {
                y = p[w[j]];
            }
            ans = max(ans, min(x, y));
        }
        cout << ans << endl;
    }
    return 0;
}