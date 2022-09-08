#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int d, f, g;
        cin >> d >> f >> g;
        int p=max(f,g);
        cout << max(d, p) << endl;
    }
    return 0;
}