#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int xc, yt;
        cin >> xc >> yt;
        int d = xc * 100;
        int c = yt * 10;
        if (d >= c)
        {
            cout << "Cloth" << endl;
        }
        else
        {
            cout << "Disposable" << endl;
        }
    }
    return 0;
}