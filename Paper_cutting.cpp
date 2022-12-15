#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int so, f;
        cin >> so >> f;
        float d = so / f;
        cout << d * d << endl;
    }
    return 0;
}