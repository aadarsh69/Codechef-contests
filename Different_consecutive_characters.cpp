#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r;
        cin >> r;
        string w;
        cin >> w;
        int zx = 0;
        for (int g = 0; g < r; g++)
        {
            if (w[g] == w[g + 1])
            {
                zx++;
            }
        }
        cout << zx << endl;
    }
    return 0;
}