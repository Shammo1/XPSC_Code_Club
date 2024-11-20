#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int X = a - 1;
        int Y = abs(b - c) + c - 1;
        int ans = 0;

        if (X <= Y)
        {
            ans += 1;
        }

        if (X >= Y)
        {
            ans += 2;
        }

        cout << ans << endl;
    }
    return 0;
}
