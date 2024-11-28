#include <bits/stdc++.h>
using namespace std;

const int maxn = 1000100;

int n;
pair<int, int> a[99];
char s[maxn];

void solve()
{
    cin >> n >> (s + 1);

    for (int i = 0; i < 26; i++)
    {
        a[i] = pair<int, int>(0, i);
    }

    for (int i = 1; i <= n; i++)
    {
        a[s[i] - 'a'].first++;
    }

    sort(a, a + 26, greater<pair<int, int>>());

    queue<pair<int, int>> q;

    while (a[0].first > a[1].first)
    {
        cout << char('a' + a[0].second);
        a[0].first--;
    }

    for (int i = 0; i < 26; i++)
    {
        q.push(a[i]);
    }

    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();
        if (p.first == 0)
        {
            continue;
        }
        cout << char('a' + p.second);
        p.first--;
        q.push(p);
    }

    cout << endl;
}

int main()
{
    int T = 1;
    cin >> T;

    while (T--)
    {
        solve();
    }

    return 0;
}
