#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int b;
        cin >> b;
        int count = 0;
        int gs[b];
        for (int i = 0; i < b; i++)
        {
            cin >> gs[i];
        }
        for (int i = 0; i < b; i++)
        {
            if (gs[i] >= 10 && gs[i] <= 60)
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}