#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int qa, gb, dc;
        cin >> qa >> gb >> dc;
        if (qa > gb && qa > dc)
        {
            cout << "Alice" << endl;
        }
        else if (gb > qa && gb > dc)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Charlie" << endl;
        }
    }
    return 0;
}