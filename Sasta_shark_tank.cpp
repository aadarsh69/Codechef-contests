#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int as, bv;
        cin >> as >> bv;
        int a1 = 10 * as;
        int a2 = 5 * bv;
        if (a1 == a2)
        {
            cout << "Any" << endl;
        }
        else if (a1 > a2)
        {
            cout << "First" << endl;
        }
        else
        {
            cout << "Second" << endl;
        }
    }
    return 0;
}