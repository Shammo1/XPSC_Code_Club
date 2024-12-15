#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        vector<int> v(x);
        for (int i = 0; i < x; i++)
        {
            cin >> v[i];
        }
        int ans = INT_MAX;
        for (int i = 0; i < x; i++)
        {
            int m = 0;
            if (i + 1 < x)
            {
                m = max(m, abs(v[i + 1] - v[i]));
            }
            if (i - 1 >= 0)
            {
                m = max(m, abs(v[i - 1] - v[i]));
            }
            ans = min(ans, m);
        }
        cout << ans << endl;
    }

    return 0;
}