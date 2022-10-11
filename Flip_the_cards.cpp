#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int s, d;
        cin >> s >> d;
        int jkl = s - d;
        cout << min(jkl, d) << endl;
    }
    return 0;
}