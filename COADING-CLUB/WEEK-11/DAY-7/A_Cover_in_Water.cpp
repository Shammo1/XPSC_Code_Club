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
        bool flag = false;
        int cnt = 0;
        int cntH = 0;
        for (char ch : s)
        {

            if (ch == '.')
            {
                cnt++;
                if (cnt >= 3)
                {
                    flag = true;
                }
            }
            else if (ch == '#')
            {
                cntH++;
                cnt = 0;
            }
        }
        if (flag == true)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << abs(n - cntH) << endl;
        }
    }
    return 0;
}