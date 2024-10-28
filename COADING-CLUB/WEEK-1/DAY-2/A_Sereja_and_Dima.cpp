#include <bits/stdc++.h>
using namespace std;
// A. Sereja and Dima problem-1
int main()
{
    int n;
    cin >> n;
    deque<int> dq;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        dq.emplace_back(x);
    }
    int s = 0;
    int d = 0;

    int i = 0;
    while (!dq.empty())
    {
        i++;
        if (i % 2 == 0)
        {
            if (dq.front() >= dq.back())
            {
                s += dq.front();
                dq.pop_front();
            }
            else
            {
                s += dq.back();
                dq.pop_back();
            }
        }
        else
        {
            if (dq.front() >= dq.back())
            {
                d += dq.front();
                dq.pop_front();
            }
            else
            {
                d += dq.back();
                dq.pop_back();
            }
        }
    }
    cout << d << " " << s;

    return 0;
}