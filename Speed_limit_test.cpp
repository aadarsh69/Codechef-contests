#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float q, s, w, d;
        cin >> q >> s >> w >> d;
        float l1 = q / s;
        float l2 = w / d;
        if (l1 == l2)
        {
            cout << "Equal" << endl;
        }
        else if (l1 > l2)
        {
            cout << "Alice" << endl;
        }
        else
        {
            cout << "Bob" << endl;
        }
    }
    return 0;
}