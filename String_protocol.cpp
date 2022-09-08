#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string f;
        cin >> f;
        int i=0;
        int c = 0;
        
        while(i<n)
        {
            if (f[i] = f[i + 1])
            {
                c+=1;
                i+=2;
            }
            else
            {
                c++;
                i++;
            }
            
        }
        if(i==n){
            c++;
        }
        cout << c << endl;
    }
    return 0;
}