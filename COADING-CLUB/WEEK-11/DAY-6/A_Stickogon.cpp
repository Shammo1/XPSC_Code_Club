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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }

        int ans = 0;
        for (pair<int, int> x : mp)
        {
            ans = ans + (x.second / 3);
        }
        cout << ans << endl;
    }
    return 0;
}