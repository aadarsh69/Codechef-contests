#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int Xa, Xb, Xc;
        cin >> Xa >> Xb >> Xc;
        if (Xa > 50)
        {
            cout << "A" << endl;
        }
        if (Xb > 50)
        {
            cout << "B" << endl;
        }
        if (Xc > 50)
        {
            cout << "C" << endl;
        }
        if (Xa <= 50 && Xb <= 50 && Xc <= 50)
        {
            cout << "Nota" << endl;
        }
    }
    return 0;
}