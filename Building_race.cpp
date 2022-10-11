#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float o, p, k, l;
        cin >> o >> p >> k >> l;
        float d1 = o / k;
        float d2 = p / l;
        if (d1 > d2)
        {
            cout << "Chefina" << endl;
        }
        else if (d1 < d2)
        {
            cout << "Chef" << endl;
        }
        else
        {
            cout << "Both" << endl;
        }
    }
    return 0;
}