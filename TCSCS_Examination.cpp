#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int dsa1, toc1, dm1;
        int dsa2, toc2, dm2;
        cin >> dsa1 >> toc1 >> dm1;
        cin >> dsa2 >> toc2 >> dm2;
        if (dsa1 + toc1 + dm1 > dsa2 + toc2 + dm2)
        {
            cout << "Dragon" << endl;
        }
        else if (dsa1 + toc1 + dm1 < dsa2 + toc2 + dm2)
        {
            cout << "Sloth" << endl;
        }
        else
        {
            if (dsa1 > dsa2)
            {
                cout << "Dragon" << endl;
            }
            else if (dsa1 < dsa2)
            {
                cout << "Sloth" << endl;
            }
            else
            {
                if (toc1 > toc2)
                {
                    cout << "Dragon" << endl;
                }
                else if (toc1 < toc2)
                {
                    cout << "Sloth" << endl;
                }
                else
                {
                    cout << "Tie" << endl;
                }
            }
        }
    }
    return 0;
}
