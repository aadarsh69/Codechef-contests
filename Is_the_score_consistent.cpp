#include <bits/stdc++.h>
using namespace std;
int diff(int xx, int yy)
{
    if (xx <= yy)
    {
        return yy - xx;
    }
    else
    {
        return -1;
    }
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int aa, bb;
        cin >> aa >> bb;
        int cc, dd;
        cin >> cc >> dd;
        int fr = diff(aa, cc);
        int sr = diff(bb, dd);
        if (fr == -1 || sr == -1)
        {
            cout << "IMPOSSIBLE" << endl;
        }
        else
        {
            cout << "POSSIBLE" << endl;
        }
    }
    return 0;
}