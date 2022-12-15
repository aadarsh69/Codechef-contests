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
        if (y > 100)
        {
            cout << y - 10 << endl;
        }
        else
        {
            cout << y << endl;
        }
    }
    return 0;
}