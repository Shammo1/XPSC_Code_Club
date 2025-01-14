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

    priority_queue<int> pq;
    pq.push(v[0]);
    cout << pq.top() << " ";
    for (int i = 1; i < n; i++)
    {
        int x = pq.top() + v[i];
        pq.push(x);
        cout << x << " ";
    }

    return 0;
}