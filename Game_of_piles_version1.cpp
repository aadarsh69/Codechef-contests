#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int np;
        cin >> np;
        int pi[np];
        int sum;
        for (int i = 0; i < np; i++)
        {
            cin >> pi[i];
            sum = sum + pi[i];
        }
        if (sum > 0)
        {
            if (sum % 2 == 0)
            {
                cout << "Chefina" << endl;
            }
            else
            {
                cout << "Chef" << endl;
            }
        }
        else
        {
            if (sum % 2 == 0)
            {
                cout << "Chefina" << endl;
            }
            else
            {
                cout << "Chef" << endl;
            }
        }
    }
    return 0;
}