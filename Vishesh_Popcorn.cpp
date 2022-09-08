#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, a1, a2, b1, b2, c1, c2;
        cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
        a = a1 + a2;
        b = b1 + b2;
        c = c1 + c2;
        int maxs=max(a,b);
        cout<<max(maxs,c)<<endl;
    }
    return 0;
}