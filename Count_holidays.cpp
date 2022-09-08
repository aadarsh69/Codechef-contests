#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int r[n];
        int hls = 8;
        for (int i = 0; i < n; i++)
        {
            cin >> r[i];
            if (r[i] % 7 != 0 && r[i] % 7 != 6)
            {
                hls++;
            }
        }
        cout << hls << endl;
    }
    return 0;
}