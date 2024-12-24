#include <bits/stdc++.h>
using namespace std;
long long LCM(long long a, long long b)
{
    return (a / __gcd(a, b)) * b;
}
int main()
{
    long long a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    long long x = LCM(b, c);
    long long q = a / x;
    long long i = ((a / b) - q) * d;
    long long j = ((a / c) - q) * e;
    long long ans = i + j + (1LL * q * max(d, e));
    cout << ans << endl;
    return 0;
}