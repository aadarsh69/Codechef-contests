#include <bits/stdc++.h>
using namespace std;
void equal()
{
    int f, s;
    cin >> f >> s;
    if (f == s)
    {
        cout << "YES" << endl;
        return;
    }
    if (f < s)
    {
        while (s > f)
        {
            f *= 2;
        }
    }
    else
    {
        while (f > s)
        {
            s *= 2;
        }
    }
    if (f == s)
        cout << "YES" << endl;

    else
        cout << "NO" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        equal();
    }
    return 0;
}