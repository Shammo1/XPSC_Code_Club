#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<long long> v;
    v.push_back(0);
    vector<int> v2;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(v.back() + x);
        if (i == 0)
        {
            v2.push_back(x);
        }
        else
        {
            v2.push_back(max(v2.back(), x));
        }
    }
    for (int i = 0; i < q; i++)
    {
        int k;
        cin >> k;
        int ind = upper_bound(v2.begin(), v2.end(), k) - v2.begin();
        cout << v[ind] << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}