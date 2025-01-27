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
#define all(s) (s).begin(), (s).end()
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
    int n;
    string s;
    cin >> n >> s;
    int f = 0;
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i] != s[i - 1])
        {
            if (f == 0 && s[i] == '0')
            {
                f = 1;
                ans++;
            }
            else if (f == 1)
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
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