#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int y;
        cin >> y;
        int s[y];
        for (int i = 0; i < y; i++)
        {
            cin >> s[i];
        }
        int h = s[0];
        for (int i = 1; i < y; i++)
        {
            h =__gcd(h, s[i]);
        }
        int m = h * y;
        cout << m << endl;
    }
    return 0;
}