#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int g, h;
        cin >> g >> h;
        for (int i = 0; i < h; i++)
        {
            g++;
        }
        if (g % 2 == 0)
        {
            cout << "Janmansh" << endl;
        }
        else
        {
            cout << "Jay" << endl;
        }
    }
    return 0;
}