#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        v[i] = {a[i], i + 1};
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n - 2; i++)
    {
        int target = x - v[i].first;
        int l = i + 1, r = n - 1;

        while (l < r)
        {
            int sum = v[l].first + v[r].first;
            if (sum == target)
            {
                cout << v[i].second << " "
                     << v[l].second << " "
                     << v[r].second << endl;
                return 0;
            }
            else if (sum < target)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
    }

    cout << "IMPOSSIBLE" << endl;
    return 0;
}
