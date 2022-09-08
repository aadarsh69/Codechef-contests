#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, r = 0;
        cin >> n >> k;
        string s;
        cin >> s;
        for (int i = 0; i < n / 2; i++)
        {
            if (s[i] != s[n - i - 1])
            {
                r = r + 1;
            }
        }
        if (k >= r)
        {
            if ((k - r) % 2 == 0)
            {
                cout << "Yes" << endl;
            }
            else if (n % 2 != 0)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}