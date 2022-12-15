#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int w, e, r;
        cin >> w >> e >> r;
        if (r > e)
        {
            cout << w << endl;
        }
        else
        {
            int g = e / r;
            if (e % r == 0)
            {
                cout << w * (g) << endl;
            }
            else
            {
                cout << w * (g + 1) << endl;
            }
        }
    }
    return 0;
}