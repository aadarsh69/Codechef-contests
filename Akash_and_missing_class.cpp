#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int l = n / 7;
        int holiday = n % 7;
        if (holiday == 6)
        {
            cout << l + 1 << endl;
        }
        else
        {
            cout << l << endl;
        }
    }
    return 0;
}