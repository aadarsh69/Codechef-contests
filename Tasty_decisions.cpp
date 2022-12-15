#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int e, d;
        cin >> e >> d;
        int s = 2 * e;
        int a = 5 * d;
        if (s > a)
        {
            cout << "Chocolate" << endl;
        }
        else if (s == a)
        {
            cout << "Either" << endl;
        }
        else
        {
            cout << "Candy" << endl;
        }
    }
    return 0;
}