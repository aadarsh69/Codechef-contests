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
        if (j % 2 == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            int o = j - 1;
            int m = 0;
            for (int i = 0; i < j; i++)
            {
                if (o % 2 == 0)
                {
                    m = 1;
                }
                else
                {
                    m++;
                }
            }
            cout << m << endl;
        }
    }
    return 0;
}