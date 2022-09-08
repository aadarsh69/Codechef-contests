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
        char q[n];
        cin >> q;
        int z = 0, o = 0;
        for (int i = 0; i < n; i++)
        {
            if (q[i] == '0')

                z++;

            else

                o++;
        }
        if (n % 2 == 0)
        {
            if (z == o)

                cout << "Yes" << endl;

            else if (z % 2 == 0 && o % 2 == 0)

                cout << "Yes" << endl;

            else

                cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
    return 0;
}