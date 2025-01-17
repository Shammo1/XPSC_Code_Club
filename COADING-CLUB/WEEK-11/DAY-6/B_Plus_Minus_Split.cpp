#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        int cntP = 0;
        int cntM = 0;
        for (char ch : s)
        {
            if (ch == '+')
            {
                cntP++;
            }
            else
            {
                cntM++;
            }
        }
        cout << abs(cntM - cntP) << endl;
    }
    return 0;
}