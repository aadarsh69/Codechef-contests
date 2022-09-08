#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int jh, sa;
        cin >> jh >> sa;
        int we = 7 * jh;
        cout << we - sa << endl;
    }
    return 0;
}