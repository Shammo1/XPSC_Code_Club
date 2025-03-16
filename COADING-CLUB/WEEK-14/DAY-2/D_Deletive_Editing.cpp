
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
    string s, t;
    cin >> s >> t;
    map<char, int> mp, mp2;
    for (auto ch : s)
    {
        mp[ch]++;
    }
    for (auto ch : t)
    {
        mp2[ch]++;
    }
    int i = 0;
    int j = 0;
    while (i < s.size() && j < t.size())
    {
        if (s[i] == t[j])
        {
            if (mp[s[i]] < mp2[t[j]])
            {
                break;
            }
            else if (mp[s[i]] == mp2[t[j]])
            {
                j++;
                mp2[t[j]]--;
            }
        }
        mp[s[i]]--;
        i++;
    }
    cout<<j;
    if (j == t.size())
    {
        Yes
    }
    else
    {
        No
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