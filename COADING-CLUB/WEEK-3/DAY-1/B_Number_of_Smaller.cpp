#include <bits/stdc++.h>
using namespace std;
//PROBLEM-2
int main()
{
    int n, m;
    cin >> n >> m;
    int ar[n];
    int arr[m];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }

    int l = 0;
    int r = 0;
    int ans = 0;

    while (r < m)
    {
        if (l < n && ar[l] < arr[r])
        {
            ans++;
            l++;
        }
        else
        {
            cout << ans << " ";
            r++;
        }
    }

    return 0;
}