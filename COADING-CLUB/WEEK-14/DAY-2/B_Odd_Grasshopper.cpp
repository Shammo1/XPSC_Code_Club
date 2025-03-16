
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
    ll x, n;
    cin >> x >> n;
    ll z;
    if (n % 4 == 0)
    {
        z = 0;
    }
    else if (n % 4 == 1)
    {
        z = -1 * n;
    }
    else if (n % 4 == 2)
    {
        z = 1;
    }
    else if (n % 4 == 3)
    {
        z = n + 1;
    }
    if (x%2==0)
    {
        ll Fp=x+z;
        cout<<Fp<<endl;
    }
    else{
        ll Fp=x-z;
        cout<<Fp<<endl;
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