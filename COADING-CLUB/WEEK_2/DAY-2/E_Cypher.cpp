#include <bits/stdc++.h>
using namespace std;
void count(int d, int u, int x)
{

    int D = d;
    int U = u;
    int ans = x;
    while (U--)
    {
        ans--;
        if (ans < 0)
        {
            ans = 9;
        }
    }
    while (d--)
    {
        ans++;
        if (ans == 10)
        {
            ans = 0;
        }
    }
    cout << ans << " ";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int i = 0;
        while (n--)
        {
            int x;
            string s;
            cin >> x >> s;
            int u = 0;
            int d = 0;

            for (char ch : s)
            {
                if (ch == 'D')
                {
                    d++;
                }
                else
                {
                    u++;
                }
            }
            // int ans =
            count(d, u, v[i]);
            i++;
            // cout << ans << " ";
        }
        cout << endl;
    }
    return 0;
}