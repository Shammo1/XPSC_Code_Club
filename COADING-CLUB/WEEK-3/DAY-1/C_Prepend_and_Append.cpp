#include <bits/stdc++.h>
using namespace std;
//PROBLEM-1;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int l = 0, r = n - 1;
        int ans = n;
        while (l <= r)
        {
            if (s[l] == s[r])
            {
                break;
            }
            else
            {
                l++;
                r--;
                ans -= 2;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}