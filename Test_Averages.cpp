#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int z, x, c;
        cin >> z >> x >> c;
        double j = (z + x) / 2;
        double k = (z + c) / 2;
        double l = (x + c) / 2;
        if (j < 35 || k < 35 || l < 35)
        {
            cout << "Fail" << endl;
        }
        else
        {
            cout << "Pass" << endl;
        }
    }
    return 0;
}