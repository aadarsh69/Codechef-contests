#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int w, r;
        cin >> w >> r;
        int u = max(w, r);
        cout << u << endl;
    }
    return 0;
}