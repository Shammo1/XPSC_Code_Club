#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        string s;
        cin >> x >> s;
        int cnt = 0;
        for (char ch : s)
        {
            if (ch == '1')
            {
                cnt++;
            }
        }

        if (min(cnt, x - cnt) % 2 == 1)
        {
            cout << "Zlatan" << '\n';
        }
        else
        {
            cout << "Ramos" << '\n';
        }
    }

    return 0;
}
