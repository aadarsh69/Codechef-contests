#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int k, b = 0;
        cin >> k;
        while (k % 2 == 0)
        {
            k = k / 2;
            b++;
        }
        cout << b << endl;
    }
    return 0;
}