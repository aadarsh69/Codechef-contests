#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int nn;
        cin >> nn;
        string d;
        cin >> d;
        string ne;
        ne = "";
        for (int i = 0; i < d.length(); i++)
        {
            if (d[i] == 'A')
            {
                ne.push_back('T');
            }
            else if (d[i] == 'T')
            {
                ne.push_back('A');
            }
            else if (d[i] = 'C')
            {
                ne.push_back('G');
            }
            else
            {
                ne.push_back('C');
            }
        }
        cout << ne << endl;
    }
    return 0;
}