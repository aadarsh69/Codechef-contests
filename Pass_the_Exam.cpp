#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m1, m2, m3;
        cin >> m1 >> m2 >> m3;
        int total = m1 + m2 + m3;
        if (total >= 100 && m1 >= 10 && m2 >= 10 && m3 >= 10)
        {
            cout << "PASS" << endl;
        }
        else
        {
            cout << "FAIL" << endl;
        }
    }
    return 0;
}