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
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define in(vec, n)              \
    for (int i = 0; i < n; i++) \
        cin >> vec[i];
#define out(vec, n)             \
    for (int i = 0; i < n; i++) \
        cout << vec[i] << " ";
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve(string s)
{
    //  cout<<s.size();
    int cnt0 = 0;
    int cnt1 = 0;
    for (char ch : s)
    {
        if (ch == '0')
        {
            cnt0++;
        }
        else
        {
            cnt1++;
        }
    }
    if (min(cnt0, cnt1) % 2 == 1)
    {
        cout << "DA" << endl;
    }
    else
    {
        cout << "NET" << endl;
    }
}
int main()
{
    fastio int t = 1;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        solve(s);
    }
    return 0;
}