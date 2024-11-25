#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        vector<int> v;
        int k = y;
        int i = x;
        while (k != 0)
        {
            v.push_back(i);
            i--;
            k--;
        }
        reverse(v.begin(), v.end());
        vector<int> z;
        while (i >= 1)
        {
            z.push_back(i);
            i--;
        }

        for (int x : z)
        {
            cout << x << " ";
        }
        for (int x : v)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}