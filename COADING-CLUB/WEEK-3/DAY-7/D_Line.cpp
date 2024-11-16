#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<int> v(n, 0);
        long long sum = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                sum += i;
                v[i] = n - 1 - i - i;
            }
            else
            {
                sum += n - 1 - i;
                v[i] = i - (n - 1 - i);
            }
        }

        sort(v.rbegin(), v.rend());

        vector<long long> result(n + 1, sum);
        long long currentSum = sum;

        for (int k = 1; k <= n; k++)
        {
            currentSum += max(0, v[k - 1]);
            result[k] = currentSum;
        }

        for (int k = 1; k <= n; k++)
        {
            cout << result[k] << " ";
        }
        cout << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
    return 0;
}
