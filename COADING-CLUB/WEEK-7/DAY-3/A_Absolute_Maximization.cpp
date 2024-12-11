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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int and_result = a[0];
        int or_result = a[0];

        for (int i = 1; i < n; i++)
        {
            and_result &= a[i];
            or_result |= a[i];
        }

        cout << (or_result - and_result) << endl;
    }
}

int main()
{
    solve();
    return 0;
}
