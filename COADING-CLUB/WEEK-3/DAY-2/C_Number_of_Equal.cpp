#include <bits/stdc++.h>
using namespace std;
//PROBLEM-3
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
    long long int ans = 0;

    while (r < m && l < n)
    {
        int cur = ar[l];
        int cnt1 = 0;
        int cnt2 = 0;

        while (l < n && ar[l] == cur)
        {
            cnt1++;
            l++;
        }

        while (r < m && cur > arr[r])
        {
            r++;
        }

        while (r < m && arr[r] == cur)
        {
            cnt2++, r++;
        }

        ans += (1LL * cnt1 * cnt2);
    }
    cout << ans << endl;
    return 0;
}