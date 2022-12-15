#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int g, h, j;
        cin >> g >> h >> j;
        if (j > g + h)
        {
            cout << "Yes" << endl;
        }
        else if (h > g + j)
        {
            cout << "Yes" << endl;
        }
        else if (g > h + j)
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