#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int nj;
        cin >> nj;
        if (nj % 4 == 0)
        {
            cout << nj / 4 << endl;
        }
        else
        {
            cout << (nj / 4) + 1 << endl;
        }
    }
    return 0;
}