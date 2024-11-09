#include <bits/stdc++.h>
using namespace std;
 //problem-6
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        deque<int> dq;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            dq.push_back(x);
        }
        
        int mx = n;
        int mn = 1;
        int k = 0, r = n-1;
        
        while (!dq.empty())
        {
            if (dq.front() == mx)
            {
                dq.pop_front();
                mx--;
                k++;
            }
            else if (dq.front() == mn)
            {
                dq.pop_front();
                mn++;
                k++;
            }
            else if (dq.back() == mx)
            {
                dq.pop_back();
                mx--;
                r--;
            }
            else if (dq.back() == mn)
            {
                dq.pop_back();
                mn++;
                r--;
            }
            else
            {
                break;
            }
        }
        
        if (k <= r)
        {
            cout << k+1 << " " << r+1 << '\n';
        }
        else
        {
            cout << "-1" << '\n';
        }
    }
        return 0;
    }
 