
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
    int n;
    cin >> n;
    vector<int> v(n), v2;
    in(v, n);
    int ans = 0;
    int cnt = 0;
    bool flag = false;
    v2.insert(v2.end(), v.begin(), v.end());
    v2.insert(v2.end(), v.begin(), v.end());

    for (int x : v2)
    {
        if (x == 1)
        {
            cnt++;
            ans = max(ans, cnt);
        }
        else
        {
            cnt = 0;
        }
    }
    cout << ans;   
 
}
int main()
{
    fastio int t = 1;
    while (t--)
    {
        solve();
     
    }
    return 0;
}