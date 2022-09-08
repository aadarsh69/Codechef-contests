#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int nm;
        cin >> nm;
        if (nm == 2 || nm == 3)
        {
            cout << nm - 1 << endl;
        }
        else
        {
            cout << nm << endl;
        }
    }
    return 0;
}