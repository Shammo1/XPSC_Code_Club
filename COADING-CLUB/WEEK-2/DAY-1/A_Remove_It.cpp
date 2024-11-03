#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (auto it : v)
    {
        if (it == m)
        {
            continue;
        }
        else
        {
            cout << it << " ";
        }
    }
    return 0;
}