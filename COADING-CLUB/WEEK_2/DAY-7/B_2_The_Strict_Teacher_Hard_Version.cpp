#include <bits/stdc++.h>
#define ll long long int
using namespace std;
// Problem-11;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, m, t;
        cin >> n >> m >> t;
        vector<int> v(m);
        for (int i = 0; i < m; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        while (t--)
        {
            ll pos, ans = INT_MAX;
            cin >> pos;
            auto it = upper_bound(v.begin(), v.end(), pos);
            if (it == v.begin())
                ans = v.front() - 1;
            else if (it == v.end())
                ans = n - v.back();
            else
            {
                ans = (*it - *(it - 1)) / 2;
            }
            cout << ans << endl;
        }
    }

    return 0;
}