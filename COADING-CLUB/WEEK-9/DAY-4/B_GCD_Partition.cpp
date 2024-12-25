#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        long long total = accumulate(v.begin(), v.end(), 0LL);
        long long ans = 1;
        long long z = 0;
        for (int i = 0; i < n - 1; i++)
        {
            z += v[i];
            total -= v[i];
            ans = max(ans, __gcd(z, total));
        }
        cout << ans << endl;
    }
    return 0;
}