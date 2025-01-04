#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x, n;
    cin >> x >> n;

    set<long long> s1;

    s1.insert(0);
    s1.insert(x);

    int p;

    for (int i = 0; i < n; i++)
    {
        cin >> p;
        s1.insert(p);
        long long max_gap = 0;
        auto it = s1.begin();
        long long prev = *it;
        it++;

        for (; it != s1.end(); it++)
        {
            max_gap = max(max_gap, *it - prev);
            prev = *it;
        }

        cout << max_gap << " ";
    }

    return 0;
}
