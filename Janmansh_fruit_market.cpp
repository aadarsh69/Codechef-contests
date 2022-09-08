#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int xx, aa, bb, cc;
        cin >> xx >> aa >> bb >> cc;
        if (aa < bb && aa < cc)
        {
            if (bb < cc)
            {
                cout << ((xx - 1) * aa) + bb << endl;
            }

            else
            {
                cout << ((xx - 1) * aa) + cc << endl;
            }
        }
        else if (bb < aa && bb < cc)
        {
            if (aa < cc)
            {
                cout << ((xx - 1) * bb) + aa << endl;
            }
            else
            {
                cout << ((xx - 1) * bb) + cc << endl;
            }
        }
        else if (cc < bb && cc < aa)
        {
            if (bb < aa)
            {
                cout << ((xx - 1) * cc) + bb << endl;
            }
            else
            {
                cout << ((xx - 1) * cc) + aa << endl;
            }
        }
    }
    return 0;
}