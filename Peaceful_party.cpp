#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int pa, pb, pc;
        cin >> pa >> pb >> pc;
        if (pa + pc > pb)
        {
            cout << pa + pc << endl;
        }
        else
        {
            cout << pb << endl;
        }
    }
    return 0;
}