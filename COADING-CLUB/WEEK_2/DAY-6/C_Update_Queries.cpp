#include <bits/stdc++.h>
using namespace std;
//problem-13
int main()
{
    int test_cases;
    cin >> test_cases;

    while (test_cases--) 
    {
        int n, m;
        cin >> n >> m;

        string a;
        cin >> a;

        vector<int> indices(m);
        vector<pair<int, int>> operations(m);

        vector<int> count(n, 0);

        for (int i = 0; i < m; i++) 
        {
            cin >> indices[i];
            indices[i]--;
            operations[i] = {count[indices[i]]++, indices[i]};
        }

        string c;
        cin >> c;

        sort(operations.begin(), operations.end());
        sort(c.begin(), c.end());

        for (int i = m - 1; i >= 0; i--) 
        {
            a[operations[i].second] = c[i];
        }

        cout << a << '\n';
    }

    return 0;
}
