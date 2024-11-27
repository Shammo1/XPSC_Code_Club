#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    long long int ans = 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        ans += a[i];
    }
    cout << ans - 2 * a[n - 2] << '\n';
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}