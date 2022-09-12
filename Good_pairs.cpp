#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int h;
        cin >> h;
        int w = 0;
        int d[h];
        for (int i = 0; i < h; i++)
        {
            cin >> d[i];
        }
        for (int g = 0; g < h; g++)
        {
            for (int j = 0; j < g; j++)
            {
                if (d[g] == d[j])
                {
                    w++;
                }
            }
        }
        cout << w << endl;
    }
    return 0;
}