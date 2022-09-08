#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int pr[4];
        for (int i = 0; i < 4; i++)
        {
            cin >> pr[i];
        }
        int per = 0;
        for (int i = 0; i < 4; i++)
        {
            if (pr[i] >= 10)
            {
                per++;
            }
        }
        cout << per << endl;
    }
    return 0;
}