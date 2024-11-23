#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        char first = s[0];
        char last = s[s.size() - 1];
        map<char, set<int>> mp;

        for (int i = 0; i < s.size(); i++)
        {
            mp[s[i]].insert(i + 1);
        }

        int cost = 0;
        vector<int> ans;
        if (first == last)
        {
            auto it = *mp.find(first);

            for (auto v : it.second)
            {
                ans.push_back(v);
            }
        }
        else if (first < last)
        {
            auto it = mp.find(first);
            while (true)
            {
                for (auto v : it->second)
                {
                    ans.push_back(v);
                }

                if (it->first != first)
                {
                    auto prev = mp.find(it->first);
                    prev--;
                    cost += it->first - prev->first;
                }
                if (it->first == last)
                {
                    break;
                }
                it++;
            }
        }
        else
        {
            auto it = mp.find(first);
            while (true)
            {
                for (auto v : it->second)
                {
                    ans.push_back(v);
                }

                if (it->first != first)
                {
                    auto next = mp.find(it->first);
                    next++;
                    cost += next->first - it->first;
                }
                if (it->first == last)
                {
                    break;
                }
                it--;
            }
        }

        cout << cost << " " << ans.size() << endl;
        for (auto x : ans)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}