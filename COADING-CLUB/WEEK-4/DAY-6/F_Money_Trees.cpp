#include <bits/stdc++.h>
using namespace std;
//PROBLEM-8
void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> V(n), V2(n);
    for (int i = 0; i < n; i++)

    {
        cin >> V[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> V2[i];
    }
    int maxLength = 0, l = 0, r = 0;
    long long sum = 0;

    while (r < n)
    {
        sum += V[r];

        if (r > l && V2[r - 1] % V2[r] != 0)
        {
            l = r;
            sum = V[r];
        }

        while (sum > k)
        {
            sum -= V[l];
            l++;
        }

        maxLength = max(maxLength, r - l + 1);
        r++;
    }

    cout << maxLength << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
