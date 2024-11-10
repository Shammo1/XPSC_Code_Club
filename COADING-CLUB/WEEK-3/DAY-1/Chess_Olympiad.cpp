#include <bits/stdc++.h>
using namespace std;
//NON TOPIC WISE
int main()
{
    int w, d, l;
    cin >> w >> d >> l;
    int t = 4 - (w + d + l);
    int x = d + 0.5;
    int a = w + x + t;
    int b = l + x;
    if (a > b)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}