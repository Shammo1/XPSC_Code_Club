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
        vector<int> v(n);
        vector<int> v2(n);
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> v2[i];
        }
        int x = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (v2[i] != 0)
            {

                x = min(x, v[i] - v2[i]);
            }
        }

        if (x == INT_MAX)
        {
            cout << "YES" << endl;
        }
        else if (x < 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (v[i] - v2[i] > x)
                {
                    flag = true;
                    break;
                }
            }
            if (flag == true)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}
