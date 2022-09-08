#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int u, i;
        cin >> u >> i;
        if (u < i)
        {
            cout << "REPAIR" << endl;
        }
        else if (u > i)
        {
            cout << "NEW PHONE" << endl;
        }
        else
        {
            cout << "ANY" << endl;
        }
    }
    return 0;
}