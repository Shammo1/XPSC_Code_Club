#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &a, int n)
{
    unordered_set<int> seen;
    for (int i = n - 1; i >= 0; i--)
    {
        if (seen.find(a[i]) != seen.end())
        {
            return i + 1;
        }
        seen.insert(a[i]);
    }
    return 0;
}

int main()
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

        int result = solve(a, n);
        cout << result << endl;
    }

    return 0;
}
