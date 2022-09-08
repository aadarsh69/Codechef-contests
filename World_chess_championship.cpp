#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        string e;
        cin >> e;
        long long int cc = 0, nn = 0, dd = 0;
        for (int i = 0; i < e.length(); i++)
        {
            if (e[i] == 'C')
            {
                cc++;
            }
            else if (e[i] == 'N')
            {
                nn++;
            }
            else
            {
                dd++;
            }
        }
        int pp = 100 * x;
        if ((2 * cc) + dd > (2 * nn) + dd)
        {
            cout << 60 * x << endl;
        }
        else if ((2 * cc) + dd == (2 * nn) + dd)
        {
            cout << 55 * x << endl;
        }
        else
        {
            cout << 40 * x << endl;
        }
    }
    return 0;
}