
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

#include <bits/stdc++.h>
using namespace std;

int maxCommStr(string &s1, string &s2)
{
    int m = s1.length();
    int n = s2.length();

    // Consider every pair of index and find the length
    // of the longest common substring beginning with
    // every pair. Finally return max of all maximums.
    int res = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int curr = 0;
            while ((i + curr) < m && (j + curr) < n && s1[i + curr] == s2[j + curr])
            {
                curr++;
            }
            res = max(res, curr);
        }
    }

    return res;
}

void solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    int z = maxCommStr(s1, s2);
    cout << (s1.size() - z) + (s2.size() - z) << '\n';
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