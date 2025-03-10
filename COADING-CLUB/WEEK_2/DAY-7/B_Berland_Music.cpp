#include <bits/stdc++.h>
using namespace std;
// Problem-7;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> p(n);
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
        }

        string s;
        cin >> s;

        vector<pair<int, int>> liked, disliked;

        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '1')
            {
                liked.push_back({p[i], i});
            }
            else
            {
                disliked.push_back({p[i], i});
            }
        }

        sort(liked.begin(), liked.end());
        sort(disliked.begin(), disliked.end());

        vector<int> q(n);
        int current_value = 1;

        for (auto &song : disliked)
        {
            q[song.second] = current_value++;
        }

        for (auto &song : liked)
        {
            q[song.second] = current_value++;
        }

        for (int i = 0; i < n; i++)
        {
            cout << q[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
