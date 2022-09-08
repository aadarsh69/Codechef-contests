#include <bits/stdc++.h>
using namespace std;
void heon()
{
    int j;
    cin >> j;
    for (int i = 0; i * i <= j; i++)
    {
        if ((j - (2 * i)) % (i + 2) == 0 && (j != 2 * i))
        {
            cout << "Yes" << endl;
            return;
        }
    }
    cout << "No" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        heon();
    }
    return 0;
}