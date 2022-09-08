#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s = "";
        char cur = 'a';
        for (int i = 0; i <= n; i++)
        {
            s = s + cur;
            cur++;
            if (cur == 'd')
            {
                cur = 'a';
            }
        }
        cout << s << endl;
    }
    return 0;
}