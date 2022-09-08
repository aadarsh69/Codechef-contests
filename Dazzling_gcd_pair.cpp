#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int aa, bb;
        cin >> aa >> bb;
        if (aa % 2 == 0)
        {
            if (bb - aa >= 2)
            {
                cout << aa << " " << aa + 2 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else
        {
            if (bb - aa >= 3)
            {
                if (aa % 3 == 0)
                {
                    cout << aa << " " << aa + 3 << endl;
                }
                else
                {
                    cout << aa + 1 << " " << aa + 3 << endl;
                }
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
    return 0;
}