#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y;
        cin >> x >> y;

        int ans = (y + 1) / 2;
        x -= (ans * 5 * 3 - y * 2 * 2);
        x = max(x, 0);

        ans += (x + 5 * 3 - 1) / (5 * 3);

        cout << ans << endl;
    }

    return 0;
}
