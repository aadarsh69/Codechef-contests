#include <bits/stdc++.h>
using namespace std;
int main()
{

    int r;
    cin >> r;
    int e = 0;
    for (int j = 1; j <= r; j++)
    {
        for (int k = 1; k <= r; k++)
        {
            if (j + k == r)
            {
                e++;
            }
        }
    }
    cout << e << endl;

    return 0;
}