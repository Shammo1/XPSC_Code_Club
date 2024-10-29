#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, t;
    cin >> a >> b >> t;
    if (a > t)
    {
        cout << "0";
    }
    else
    {
        int cnt = b;
        int x = 1;
        while (true)
        {
            x++;
            if (a * x <= (t + 0.5))
            {
                cnt += b;
            }
            else
            {
                break;
            }
        }
        cout << cnt;
    }
    return 0;
}