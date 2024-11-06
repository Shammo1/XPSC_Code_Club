#include <bits/stdc++.h>
using namespace std;
//problem-8
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
        long long int ans = 0;
        priority_queue<int> pq;
        for (int x : v)
        {
            if (x > 0)
            {
                pq.push(x);
            }
            else
            {
                if (!pq.empty())
                {
                    int k = pq.top();
                    ans += k;
                    pq.pop();
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}