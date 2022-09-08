#include <bits/stdc++.h>
using namespace std;
void solvetestcase()
{
    int x;
    cin >> x;
    int a = x;
    int b = x | (1 << 28);
    int c = x | (1 << 29);
    cout << a << " " << b << " " << c << " " << endl;
}
int main()
{
    int t = 1;
    cin >> t;
    for (int T = 1; T <= t; T++)
    {
        solvetestcase();
    }

    return 0;
}