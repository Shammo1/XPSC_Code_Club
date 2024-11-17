#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        string s;
        cin >> a >> s;
        int cnt = 0;
        int r = 1;
        while (r < a)
        {
            if (s[r] != s[r - 1])
            {
                cnt++;
            }
            r++;
        }
        cout << (cnt + 1) / 2 << endl;
    }
    return 0;
}