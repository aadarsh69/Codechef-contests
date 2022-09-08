#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int nn;
        cin >> nn;
        int ps[nn];
        int c = 0;
        for (int i = 0; i < nn; i++)
        {
            cin >> ps[i];
            if (ps[i - 1] > ps[i] && i >= 1)
            {
                swap(ps[i - 1], ps[i]);
                if (ps[i - 2] > ps[i - 1] && i >= 2)
                {
                    c += 2;
                }
                else if (i == 1)
                {
                    c += 1;
                }
                else
                {
                    c += 1;
                }
            }
        }
        if (c < 2)
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