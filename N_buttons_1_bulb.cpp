#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int bu;
        cin >> bu;
        int n1 = 0, n2 = 0;
        string st1, st2;
        cin >> st1 >> st2;
        for (int i = 0; i < bu; i++)
        {
            if (st1 == "1")
            {
                n1++;
            }
        }
        for (int i = 0; i < bu; i++)
        {
            if (st2 == "1")
            {
                n2++;
            }
        }
        int d = abs(n1 - n2);
        if (d == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            if (d % 2 == 0)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
    }
    return 0;
}