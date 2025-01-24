#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
    int a, b, c;
    cin >> a >> b >> c;
    int x = 0;
    bool flag = false;
    for (int i = 0; i < a; i++)
    {
        int k, j;
        cin >> k >> j;

        if (k - x >= b)
        {
            flag = true;
        }
        x = j;
    }
    if (c - x >= b)
        flag = true;
    if (flag == true)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
     }
    return 0;
}