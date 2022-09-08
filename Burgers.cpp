#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int po, lk;
        cin >> po >> lk;
        if (po < lk)
        {
            cout << po << endl;
        }
        else
        {
            cout << lk << endl;
        }
    }
    return 0;
}