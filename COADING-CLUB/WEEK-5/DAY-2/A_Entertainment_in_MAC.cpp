#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        string s2 = s;
        reverse(s2.begin(), s2.end());
        cout << min(s, s2 + s) << "\n";
    }
    return 0;
}