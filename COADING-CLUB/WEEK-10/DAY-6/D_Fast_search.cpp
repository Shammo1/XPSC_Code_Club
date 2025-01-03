#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int k;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        int l, r;
        cin >> l >> r;
        auto low = lower_bound(v.begin(), v.end(), l);
        auto high = upper_bound(v.begin(), v.end(), r);
       
        cout << (high-low) << " ";
    }

    return 0;
}
