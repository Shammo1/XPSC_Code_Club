#include <bits/stdc++.h>
using namespace std;
// PROBLEM-4
int main()
{
    long long int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    long long l = 0, r = 0, ans = 0, sum = 0;
    while (r < n)
    {
        sum += v[r];
        while (sum >= k)
        {
            ans += n - r;
            sum -= v[l];
            l++;
        }
        r++;
    }
    cout << ans << '\n';
    return 0;
}