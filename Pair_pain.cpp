#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int nn;
        cin >> nn;
        int as[nn];
        for (int i = 0; i < nn; i++)
        {
            cin >> as[i];
        }
        int c = 0;
        for (int i = 0; i < nn; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (as[i] + as[j] > as[i] * as[j])
                {
                    c += 1;
                }
            }
        }
        cout << c << endl;
    }
    return 0;
}