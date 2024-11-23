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
        int n;
        cin >> n;
        int size = (n * (n - 1)) / 2;
        map<int, int> mp;
        for (int i = 0; i < size; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }

        multiset<int> mt;
        int s = n - 1;
        int ans = 0;
        for (pair<int, int> p : mp)
        {
            int x = p.second;
            ans = max(ans, p.first);
            if (x == s)
            {
                mt.insert(p.first);
                s--;
            }
            else
            {

                while (x > s)
                {
                    x -= s;
                    s--;
                    mt.insert(p.first);
                }
                if (x == s)
                {
                    mt.insert(p.first);
                    s--;
                }
            }
        }

        mt.insert(ans);

        for (auto it : mt)
        {
            cout << it << " ";
        }

        cout << endl;
    }
    return 0;
}