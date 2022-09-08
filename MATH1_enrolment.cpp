#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int xs, cd;
        cin >> xs >> cd;
        int d = cd - xs;
        if (cd < xs)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << d << endl;
        }
    }
    return 0;
}