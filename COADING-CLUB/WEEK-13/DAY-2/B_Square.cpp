
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

void solve(int a, int b, int c, int d)
{
    int x = max(a, b);
    int y = max(c, d);
    int z = min(a, b) + min(c, d);
    //  cout << a << b << c << d;
    if (a == b || c == d)
    {
        no
    }
    else if (x == y && x == z)
    {
        yes
    }
    else
    {
        no
    }
}
int main()
{
    fastio int t = 1;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        // vector<int> v(n);
        // in(v, n);

        solve(a, b, c, d);
    }
    return 0;
}