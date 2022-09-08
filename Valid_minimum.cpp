#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int o, t, r;
        cin >> o >> t >> r;
        if (o == t || t == r || r == 0)
        {
            cout << "Yes" << endl;
        }
        else if (o == t && r > o)
        {
            cout << "Yes" << endl;
        }
        else if (t == r && o > r)
        {
            cout << "Yes" << endl;
        }
        else if (t == r || t > o)
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