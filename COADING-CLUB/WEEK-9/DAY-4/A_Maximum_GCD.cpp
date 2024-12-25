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
        // long long ans = 1;
        // for (long long i = 2; i <= x; i++)
        // {
        //     for (long long j = i + 1; j <= x; j++)
        //     {
        //         // cout<<i<<j<<" ";
        //         ans = max(ans, __gcd(i, j));
        //     }
        // }
        cout << x / 2 << endl;
    }
    return 0;
}