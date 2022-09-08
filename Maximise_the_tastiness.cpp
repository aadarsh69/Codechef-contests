#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int t1, t2, tb, td;
        cin >> t1 >> t2 >> tb >> td;
        int i1 = max(t1, t2);
        int i2 = max(tb, td);
        cout << i1 + i2 << endl;
    }
    return 0;
}