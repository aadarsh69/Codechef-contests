#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int aa, bb;
        cin >> aa >> bb;
        int value = abs(bb - aa);
        if (value % 2 == 0 || bb % aa == 0)
        {
            cout << 0 << endl;
        }

        else
        {
            cout << 1 << endl;
        }
    }
    return 0;
}