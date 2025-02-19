
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define fi first
#define se second
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define sz(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define No cout << "NO" << '\n';
#define Yes cout << "YES" << '\n';
#define no cout << "No" << '\n';
#define yes cout << "Yes" << '\n';
#define in(vec, n)              \
    for (int i = 0; i < n; i++) \
        cin >> vec[i];
#define out(vec, n)             \
    for (int i = 0; i < n; i++) \
        cout << vec[i] << " ";
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    in(v, n);

    sort(all(v));
    vector<ll> v2, v3;
    v2.push_back(v[0]);
    for (int i = 1; i < n; i++)
    {
        if (v2[0] == v[i])
        {
            v2.push_back(v[i]);
        }
        else
        {
            v3.push_back(v[i]);
        }
    }
    if (v2.size() == 0 || v3.size() == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << v2.size() << " " << v3.size() << endl;
        out(v2, v2.size());
        cout << endl;
        out(v3, v3.size());
        cout << endl;
    }
}
int main()
{
    fastio int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}