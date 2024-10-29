#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    int mod = A % C;
    if (mod != 0)
    {
        int newC = C - mod;
        int ans = A + newC;
        if (ans > B)
        {
            cout << "-1";
        }
        else
        {
            cout << ans << endl;
        }
    }
    else
    {
        cout << A;
    }

    return 0;
}