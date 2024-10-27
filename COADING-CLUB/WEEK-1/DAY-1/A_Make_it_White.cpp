#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        string S;
        cin >> S;
        int fastPos = -1;
        int reversePos = -1;
        fastPos = S.find('B');
        reversePos = S.rfind('B');
        int ans = (reversePos - fastPos) + 1;
        cout << ans << '\n';
    }

    return 0;
}