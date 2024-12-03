#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    map<int, int> freq;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        freq[a[i]]++;
    }

    vector<int> v2;
    for (auto p : freq)
    {
        if (p.second >= k)
        {
            v2.push_back(p.first);
        }
    }

    if (v2.empty())
    {
        cout << "-1\n";
        return;
    }

    sort(v2.begin(), v2.end());

    int max = 0;
    int x = -1, y = -1;

    int l = 0;
    while (l < v2.size())
    {
        int r = l;
        while (r < v2.size() && v2[r] == v2[l] + (r - l))
        {
            ++r;
        }
        if (r - l > max)
        {
            max = r - l;
            x = v2[l];
            y = v2[r - 1];
        }
        l = r;
    }

    cout << x << " " << y << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
