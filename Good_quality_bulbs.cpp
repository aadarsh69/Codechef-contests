#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int nn, xx;
        cin >> nn >> xx;
        int s = nn - 1;
        int arr[s];
        int ave = 0;
        for (int i = 0; i < s; i++)
        {
            cin >> arr[s];
            ave += arr[i];
        }
        int val = (nn * xx) - ave;
        if (val <= 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << val << endl;
        }
    }
    return 0;
}