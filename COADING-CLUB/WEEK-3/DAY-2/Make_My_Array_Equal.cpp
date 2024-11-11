#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a, a + n);
        if (n == 1)
        {
            cout << "YES\n";
        }
        else if (n == 2)
        {
            if (a[0] == a[1] || a[0] == 0 || a[1] == 0)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else
        {
            int c = 0;
            for (int i = 0; i < n - 1; i++)
            {
                if (a[i] == 0)
                {
                    continue;
                }
                else if (a[i] != a[i + 1])
                {
                    c = 1;
                    break;
                }
            }
            if (c == 1)
                cout << "NO\n";
            else
                cout << "YES\n";
        }
    }
    return 0;
}
