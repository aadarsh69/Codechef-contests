#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tests;
    cin >> tests;
    while (tests--)
    {
        int z, y, a, b, c;
        cin >> z >> y >> a >> b >> c;

        if (z - y >= a + b + c)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}