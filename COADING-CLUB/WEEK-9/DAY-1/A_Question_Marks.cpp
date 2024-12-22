#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        string s;
        cin >> s;
        int cntA = 0;
        int cntB = 0;
        int cntC = 0;
        int cntD = 0;
        int cntX = 0;

        for (char k : s)
        {
            if (k == 'A')
            {
                cntA++;
            }
            if (k == 'B')
            {
                cntB++;
            }
            if (k == 'C')
            {
                cntC++;
            }
            if (k == 'D')
            {
                cntD++;
            }
            if (k == '?')
            {
                cntX++;
            }
        }
        int ans = min(a, cntA) + min(a, cntB) + min(a, cntC) + min(a, cntD);
        cout << ans << endl;
    }
    return 0;
}