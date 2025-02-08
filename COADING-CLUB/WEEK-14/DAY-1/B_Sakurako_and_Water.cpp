
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
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int sum = 0;
    for (int k = 0; k < n; k++)
    {
        int i = 0, j = k, mn = 0;
        while (i < n && j < n)
        {

            if (arr[i][j] < n)
            {
                mn = min(mn, arr[i][j]);
            }
            i++;
            j++;
        }
        sum += abs(mn);
    }

    for (int k = 1; k < n; k++)
    {
        int i = k, j = 0, mn = 0;
        while (i < n && j < n)
        {
            if (arr[i][j] < n)
            {
                mn = min(mn, arr[i][j]);
            }
            i++;
            j++;
        }
        sum += abs(mn);
    }
    cout << sum << endl;
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