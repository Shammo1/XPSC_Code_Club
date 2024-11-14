#include <bits/stdc++.h>
using namespace std;
// PROBLEM-9
void solve()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long long maxSum = 0;
        int cnt = 0;
        bool flag = false;

        for (int i = 0; i < n; i++)
        {
            if (a[i] != 0)
            {
                maxSum += abs(a[i]);
                if (a[i] < 0)
                {
                    if (!flag)
                    {
                        cnt++;
                        flag = true;
                    }
                }
                else
                {
                    flag = false;
                }
            }
        }

        cout << maxSum << " " << cnt << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
