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
        string s = "abcdefghijklmnopqrstuvwxyz";
        string j;
        cin >> j;

        int i = n - 1;
        string k;
        while (i >= 0)
        {
            if (j[i] != '0')
            {

                k += s[(j[i] - '0') - 1];
                i--;
            }
            else
            {
                int x = stoi(j.substr(i - 2, 2));
                k += s[x - 1];
                i -= 3;
            }
        }
        reverse(k.begin(), k.end());
        cout << k << '\n';
    }
    return 0;
}