#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int y, u;
        cin >> y >> u;
        int k = (y - u) % 2;
        int l = abs(k);
        if (y == u)
        {
            cout << "Yes" << endl;
        }

        else if (l == 0)
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