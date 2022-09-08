#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int xd;
        cin >> xd;
        if (xd % 3 == 0)
        {
            cout << "NORMAL" << endl;
        }
        else if (xd % 3 == 1)
        {
            cout << "HUGE" << endl;
        }
        else
        {
            cout << "SMALL" << endl;
        }
    }
    return 0;
}