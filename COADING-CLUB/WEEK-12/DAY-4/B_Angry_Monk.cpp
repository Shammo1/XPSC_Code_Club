#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k, n;
        cin >> k >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        int ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            ans += (v[i] * 2) - 1;
        }
        cout << ans << endl;
    }
    return 0;
}