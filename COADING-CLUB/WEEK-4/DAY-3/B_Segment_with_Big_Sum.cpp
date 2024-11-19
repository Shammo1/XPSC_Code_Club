#include <bits/stdc++.h>
using namespace std;
// PROBLEM-2
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long s;
    cin >> n >> s;
    vector<long long> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long sum = 0;
    int minLength = n + 1;
    int l = 0;
    int r = 0;

    while (r < n)
    {

        while (r < n && sum < s)
        {
            sum += a[r];
            r++;
        }
        while (sum >= s)
        {
            minLength = min(minLength, r - l);
            sum -= a[l];
            l++;
        }
    }

    if (minLength == n + 1)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << minLength << endl;
    }

    return 0;
}
