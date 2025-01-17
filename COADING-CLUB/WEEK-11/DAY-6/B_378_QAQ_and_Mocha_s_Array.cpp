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
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<int> v2;
        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++)
        {
            if (v[i] % v[0] != 0)
            {
                v2.push_back(v[i]);
            }
        }

        bool flag = false;
        // sort(v2.begin(), v2.end());
        for (int i = 0; i < v2.size(); i++)
        {

            if (v2[i] % v2[0] != 0)
            {
                flag = true;
            }
        }

        if (flag == true)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
        // cout << evenMin << oddMin;
    }
    return 0;
}