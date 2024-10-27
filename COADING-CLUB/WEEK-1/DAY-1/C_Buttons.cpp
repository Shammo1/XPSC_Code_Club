#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int x = 0;
    int ans = 0;
    if (a == b)
    {
        cout << a + b;
    }

    else if (a > b)
    {
        x = a - 1;
        ans = a;
        if (x > b)
        {
            ans += x;
        }
        else
        {
            ans += b;
        }
        cout << ans << endl;
    }
    else if (b > a)
    {
        x = b - 1;
        ans = b;
        if (x > a)
        {
            ans += x;
        }
        else
        {
            ans += a;
        }
        cout << ans << endl;
    }

    return 0;
}