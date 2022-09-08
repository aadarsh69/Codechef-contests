#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, w;
        cin >> n >> w;
        int r[n];

        for (int i = 0; i < n; i++)
        {
            cin >> r[i];
        }
        sort(r, r + n);
        int sum = 0, count = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            sum += r[i];
            count++;
            if (w <= sum)
            {
                break;
            }
        }
        int res;
        res = n - count;
        cout << res << endl;
    }
    return 0;
}