
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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    bool flag = false;
    bool flag2 = false;
    int maxE = max(a, b);
    int minE = min(a, b);
    for (int i = minE; i <= maxE; i++)
    {
        if (i == c || i == d)
        {
            flag = true;
            break;
        }
    }
    for (int i = maxE; i <= 100; i++)
    {
        if (i == c || i == d)
        {
            flag2 = true;
            break;
        }
        if (i == 12)
        {
            for (int j = 1; j <= minE; j++)
            {
                if (j == c || j == d)
                {
                    flag2 = true;
                    break;
                }
            }
            break;
        }
    }

    if (flag == true && flag2 == true)
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