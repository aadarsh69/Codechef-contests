#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int nh;
        cin >> nh;
        string fd;
        cin >> fd;
        int c = 0;
        for (int i = 0; i < nh - 1; i++)
        {
            if (fd[i] == 0 && fd[i + 1] == 1)
            {
                c++;
            }
        }
        cout << c << endl;
    }
    return 0;
}