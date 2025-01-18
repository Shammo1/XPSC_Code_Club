#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 1;
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
        sort(v.begin(), v.end());
        int mid = ((n + 1) / 2) - 1;
        int cnt = 0;
        for (int i = mid; i < n; i++)
        {
            if (v[i] == v[mid])
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}