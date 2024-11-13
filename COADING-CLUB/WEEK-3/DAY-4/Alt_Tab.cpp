#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    unordered_map<string, int> mp;
    int Q;
    cin >> Q;

    vector<string> v(Q);
    for (int i = 0; i < Q; i++)
    {
        cin >> v[i];
    }
    reverse(v.begin(), v.end());

    for (int i = 0; i < Q; i++)
    {

        if (mp.find(v[i]) == mp.end())
        {
            mp[v[i]] = 0;

            string g = v[i];
            int x = g.size() - 2;
            cout << g[x] << g.back();
        }
        else
        {
            continue;
        }
    }

    return 0;
}