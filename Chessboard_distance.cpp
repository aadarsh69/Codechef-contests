#include <bits/stdc++.h>
using namespace std;
int solve()
{
    int x1, x2, y1, y2;
    cin >> x1 >> x2 >> y1 >> y2;
    int xa = max(x1, x2) - min(x1, x2);
    int ya = max(y1, y2) - min(y1, y2);
    int answer = max(xa, ya);
    cout << answer << endl;
    return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}