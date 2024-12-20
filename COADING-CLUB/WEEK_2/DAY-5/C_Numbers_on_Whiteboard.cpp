#include <bits/stdc++.h>
using namespace std;

void solve(int n)
{
    multiset<int> was;
    for (int i = 1; i <= n; ++i)
    {
        was.insert(i);
    }
    vector<pair<int, int>> ans;
    for (int i = 0; i < n - 1; ++i)
    {
        auto it = was.end();
        --it;
        int a = *it;
        was.erase(it);
        it = was.end();
        --it;
        int b = *it;
        was.erase(it);
        was.insert((a + b + 1) / 2);
        ans.push_back(make_pair(a, b));
    }
    cout << *was.begin() << endl;
    for (auto p : ans)
    {
        cout << p.first << " " << p.second << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}
