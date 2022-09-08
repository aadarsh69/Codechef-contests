#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int b;
        cin >> b;
        int w[b];
        for (int i = 0; i < b; i++)
        {
            cin >> w[i];
        }
        string r;
        cin >> r;
        vector<int> d;
        for (int i = 0; i < b; i++)
        {
            if (r[i] == 0)
            {
                d.push_back(w[i]);
            }
        }
        sort(d.begin(), d.end());
        cout << d.front() << endl;
    }
    return 0;
}