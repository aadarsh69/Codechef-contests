#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int st;
        cin >> st;
        // int a = st - 1;
        int d[st];
        int b = 0;
        for (int i = 0; i < st; i++)
        {
            cin >> d[i];
        }
        for (int i = 1; i < st - 1; i++)
        {
            b = b + d[i];
        }
        cout << b + d[st - 1] << endl;
    }
    return 0;
}