#include <bits/stdc++.h>
using namespace std;
const int N = 1e2 + 10;

int a[N];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        int res = a[1];
        for (int i = 2; i <= n; i++)
            res &= a[i];
        cout << res << endl;
    }
    return 0;
}