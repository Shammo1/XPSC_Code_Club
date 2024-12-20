#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int a;
        cin >> a;
        vector<int> v(a);
        for (int i = 0; i < a; i++)
        {
            cin >> v[i];
        }
        bool flag = false;
        int cnt = 0;
        for (int i = a - 2; i >= 0; i--)
        {
            while (v[i] >= v[i + 1] && v[i] > 0)
            {
                v[i] = v[i] / 2;
                cnt++;
            }

            if (v[i] == v[i + 1])
            {

                flag = true;
                break;
            }
        }
        if (flag == true)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << cnt << endl;
        }
    }
    return 0;
}