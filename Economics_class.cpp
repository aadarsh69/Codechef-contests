#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int su[n];
        int dee[n];
        for (int i = 0; i < n; i++)
        {
            cin >> su[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> dee[i];
        }
        int e = 0;
        for (int i = 0; i < n; i++)
        {

            if (su[i] == dee[i])
            {
                e += 1;
            }
        }
        cout << e << endl;
    }
}