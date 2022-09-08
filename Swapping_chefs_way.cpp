#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int nng;
        cin >> nng;
        string l;
        cin >> l;
        string temp = l;
        sort(l.begin(), l.end());
        for (int i = 0; i < nng; i++)
        {
            if (temp[i] != l[i])
            {
                char e = temp[i];
                temp[i] = temp[nng - 1 - i];
                temp[nng - 1 - i] = e;
            }
        }
        if (l == temp)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}