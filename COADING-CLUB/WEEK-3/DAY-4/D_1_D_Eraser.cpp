#include <bits/stdc++.h>
using namespace std;
//PROBLEM-7
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        string s;
        cin >> n >> m >> s;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                cnt++;
                i += m - 1;
            }
        }

        cout << cnt << endl;
    }
    return 0;
}