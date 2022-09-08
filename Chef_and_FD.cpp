#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n, greater<int>());
        int count = 0;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (sum < x)
            {
                sum = sum + arr[i];
                count++;
            }
            else
            {
                break;
            }
        }
        if (sum < x)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << count << endl;
        }
    }
    return 0;
}