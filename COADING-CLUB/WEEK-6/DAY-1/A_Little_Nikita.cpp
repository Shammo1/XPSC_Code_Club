#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int a, b;
        cin >> a >> b;
        int x = (a - b);
        if (a < b)
        {
            cout << "No" << endl;
        }

        else if (x % 2 == 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}