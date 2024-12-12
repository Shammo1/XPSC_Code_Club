#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n, m;
    scanf("%lld%lld", &n, &m);
    ll ans = 0;
    for (int i = 0; i <= 30; ++i)
    {
        ll x = n & ((1LL << (i + 1)) - 1);
        ll t = (1LL << i) - x;
        if (n >= (1LL << i))
        {
            t = min(t, x + 1);
        }
        if (x >= (1LL << i) || t <= m)
        {
            ans |= (1LL << i);
        }
    }
    printf("%lld\n", ans);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}