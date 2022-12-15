#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int w, d, g;
        cin >> w >> d >> g;
        int o1 = w + d;
        int o2 = w + g;
        int o3 = d + g;
        if (o1 % 2 != 0 || o2 % 2 != 0 || o3 % 2 != 0)
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