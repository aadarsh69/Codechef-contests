#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int d, f;
        cin >> d >> f;
        int taste = d * f;
        if (taste % 4 == 0)
        {
            taste = taste / 4;
        }
        else
        {
            taste = taste / 4 + 1;
        }
        cout << taste << endl;
    }
    return 0;
}