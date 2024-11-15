#include <bits/stdc++.h>
using namespace std;
//PROBLEM-11
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        int n, k, q;
        cin >> n >> k >> q;
 
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
 
        long long ans = 0;
        int left = 0;
 
        while (left < n)
        {
            while (left < n && a[left] > q)
            {
                left++;
            }
 
            if (left >= n)
                break;
 
          
            int right = left;
            while (right < n && a[right] <= q)
            {
                right++;
            }
 
    
            int len = right - left;
            if (len >= k)
            {
                ans += 1LL*(len - k + 1) * (len - k + 2) / 2;
            }
 
         
            left = right;
        }
 
        cout << ans << endl;
    }
 
    return 0;
}