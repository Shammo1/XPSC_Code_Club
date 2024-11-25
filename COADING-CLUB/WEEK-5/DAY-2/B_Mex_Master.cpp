#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int sum = 0;
        bool f = false;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            if (x == 0)
            {
                sum++;
            }
            else if (x >= 2)
            {
                f = true;
            }
        }
        if (sum <= (n + 1) / 2)
        {
            cout << "0"<<endl;
        }
        else if (f || sum == n)
        {
            cout << "1"<<endl;
        }
        else
        {
            cout << "2"<<endl;
        }
    }

    return 0;
}