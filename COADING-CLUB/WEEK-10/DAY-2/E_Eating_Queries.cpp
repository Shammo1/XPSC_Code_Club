#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> v(n), v2(n + 1);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.rbegin(), v.rend());
        for (int i = 1; i <= n; i++)
        {
            v2[i] = v2[i - 1] + v[i - 1];
        }
        for (int i = 0; i < q; i++)
        {
            int k, ans = -1;
            cin >> k;
            auto it = lower_bound(v2.begin(), v2.end(), k);
            if (it != v2.end())
            {
                ans = it - v2.begin();
            }
            cout << ans << '\n';
        }
    }
    return 0;
}