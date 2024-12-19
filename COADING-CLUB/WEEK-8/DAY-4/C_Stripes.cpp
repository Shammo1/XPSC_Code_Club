#include <bits/stdc++.h>

using namespace std;

const int MAX = 200007;
const int MOD = 1000000007;

void solve()
{
    char g[8][8];
    vector<int> r;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin >> g[i][j];
            if (g[i][j] == 'R')
            {
                r.push_back(i);
            }
        }
    }
    for (int i : r)
    {
        bool flag = true;
        for (int j = 0; j < 8; j++)
        {
            if (g[i][j] != 'R')
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << "R\n";
            return;
        }
    }
    cout << "B\n";
}

int main()
{

    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve();
    }
}