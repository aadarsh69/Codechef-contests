#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int e[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> e[i];
        }
        sort(e, e + 3);
        cout << e[1] + e[2] << endl;
    }
    return 0;
}