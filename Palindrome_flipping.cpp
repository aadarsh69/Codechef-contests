#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int j;
        cin >> j;
        string r;
        cin >> r;
        int on = 0, sz = 0;
        for (int i = 0; i < j; i++)
        {
            if (r[i] == 1)
            {
                on++;
            }
            else
            {
                sz++;
            }
        }

        if (on % 2 == 0 && sz % 2 == 0)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
    return 0;
}