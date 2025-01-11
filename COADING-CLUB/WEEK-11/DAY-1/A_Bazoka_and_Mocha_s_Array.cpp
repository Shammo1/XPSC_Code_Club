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
        vector<int> v(n), v2(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        v2 = v;
        sort(v2.begin(), v2.end());
        if (v == v2)
        {
            cout << "Yes" << endl;
        }
        else
        {
            bool flag = false;
            for (int i = 0; i < n; i++)
            {
                rotate(v.begin(), v.begin() + 1, v.end());
                if (v == v2)
                {

                    flag = true;
                }
            }
            if (flag == true)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}