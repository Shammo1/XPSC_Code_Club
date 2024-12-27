#include <bits/stdc++.h>
using namespace std;
long long LCM(long long a, long long b)
{
    return (a / __gcd(a, b)) * b;
}
int main()
{
    long long x;
    cin >> x;
    long long ans ;
    for (long long i = 1; i * i <= x; i++)
    {
        if (x % i == 0 && LCM(i, x / i) == x)
        {
            ans = i;
        }
    }
    cout << ans << " " << x /ans << endl;
    return 0;
}