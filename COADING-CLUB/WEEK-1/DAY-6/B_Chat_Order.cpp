#include <bits/stdc++.h>
using namespace std;
// problem-9
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
            cout << v[i] << endl;
        }
        else
        {
            continue;
        }
    }

    return 0;
}
