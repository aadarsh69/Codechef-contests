#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int hg;
        cin >> hg;
        string ew;
        cin >> ew;
        string yt;
        cin >> yt;
        for (int i = 0; i < hg; i++)
        {
            if (ew[i] == yt[i])
            {
                continue;
            }
            else
            {
                yt[i]++;
            }
        }
        cout << yt.size() << endl;
    }
    return 0;
}