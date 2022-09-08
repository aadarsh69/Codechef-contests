#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int am;
        cin >> am;
        if (am <= 100)
        {
            cout << am << endl;
        }
        if (am > 100 && am <= 1000)
        {
            cout << am - 25 << endl;
        }
        if (am > 1000 && am <= 5000)
        {
            cout << am - 100 << endl;
        }
        if (am > 5000)
        {
            cout << am - 500 << endl;
        }
    }
    return 0;
}