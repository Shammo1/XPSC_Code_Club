#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string s;
        for (int i = 0; i < n; i++)
        {
            s += "BAN";
        }

        vector<pair<int, int>> v;
        int l = 0, r = 3 * n - 1;

        while (l < r)
        {

            while (l < 3 * n && s[l] != 'B')
                ++l;
            while (r >= 0 && s[r] != 'N')
                --r;
            if (l < r)
            {

                v.push_back({l + 1, r + 1});
                swap(s[l], s[r]);
                ++l;
                --r;
            }
        }

        cout << v.size() << endl;
        for (int k = 0; k < v.size(); k++)
        {
            cout << v[k].first << " " << v[k].second << endl;
        }
    }
    return 0;
}
