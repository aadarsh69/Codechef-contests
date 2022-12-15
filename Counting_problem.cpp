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
        int k = 0;
        int d[j];
        for (int h = 0; h < j; h++)
        {
            cin >> d[h];
        }
        for (int f = 0; f < j; f++)
        {
            if (d[f] % 2)
            {
                k++;
            }
        }
        if (k == 0 || k % 2)
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