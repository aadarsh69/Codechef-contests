#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string e;
        cin >> e;
        int j = e.length();
        if (e[0] == e[j - 1])
        {
            cout << j - 2 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }
    return 0;
}