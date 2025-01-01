#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += ar[i];
    }
cout<<ans<<endl;
    if (ans % 2 == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << 1 << endl;
    }
    return 0;
}