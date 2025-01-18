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

    vector<int> v2;
    v2 = v;
    for (int i = 0; i < n; i++)
    {
        v2.push_back(v[i]);
    }
    int cnt = 0;
    int c = 0;
    for (int x : v2)
    {

        if (x == 1)
        {
            c++;
            cnt = max(cnt, c);
        }
        else if (x == 0)
        {
            c = 0;
        }
    }
    cout << cnt;
    return 0;
}