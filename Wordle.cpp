#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, g;
        cin >> s >> g;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == g[i])
            {
                cout << "G";
            }
            else
            {
                cout << "B";
            }
        }
        cout << endl;
    }
    return 0;
}
