#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int t1, t2, di, dc;
        cin >> t1 >> t2 >> di >> dc;
        int p1 = t1 - di;
        int p2 = t2 - dc;
        if (p1 < p2)
        {
            cout << "First" << endl;
        }
        else if (p2 < p1)
        {
            cout << "Second" << endl;
        }
        else
        {
            cout << "Any" << endl;
        }
    }
    return 0;
}