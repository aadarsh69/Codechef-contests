#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int sa, nb;
        cin >> sa >> nb;
        int d = nb - sa;
        int div = d % 3;
        if (div % 3 == 2)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
    return 0;
}