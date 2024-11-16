#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int t; 
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> board(n, vector<int>(m));
        vector<long long> diag1(n + m - 1, 0);
        vector<long long> diag2(n + m - 1, 0);

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> board[i][j];
                diag1[i - j + m - 1] += board[i][j];
                diag2[i + j] += board[i][j];
            }
        }

        long long maxSum = 0;

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                long long currentSum = 1ll * (diag1[i - j + m - 1] + diag2[i + j] - board[i][j]);
                maxSum = max(maxSum, currentSum);
            }
        }

        cout << maxSum << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
    return 0;
}
