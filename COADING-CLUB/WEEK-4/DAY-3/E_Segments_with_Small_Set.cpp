#include <bits/stdc++.h>
using namespace std;
// PROBLEM-5

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    unordered_map<int, int> mp;
    int l = 0, r = 0, ans = 0;
    long long segment = 0;

    while (r < n)
    {
        if (mp[a[r]] == 0)
        {
            ans++;
        }
        mp[a[r]]++;
        r++;

        while (ans > k)
        {
            mp[a[l]]--;
            if (mp[a[l]] == 0)
            {
                ans--;
            }
            l++;
        }

        segment += (r - l);
    }

    cout << segment << endl;
    return 0;
}
