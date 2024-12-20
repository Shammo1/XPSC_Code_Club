#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
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

        int cnt0 = 0;
        int cnt1 = 0;
        for (int i = 0; i < x; i++)
        {
            if (v[i] == 0)
            {
                cnt0++;
            }
            if (v[i] == 1)
            {
                cnt1++;
            }
        }

        cout << (1ll << cnt0) * (ll)cnt1 << '\n';
    }

    return 0;
}