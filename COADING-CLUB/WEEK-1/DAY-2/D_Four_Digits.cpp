#include <bits/stdc++.h>
using namespace std;
//D - Four Digits not topicwise problem

int main()
{
    int n;
    cin >> n;
    if (n < 10)
    {
        cout << "000" << n << '\n';
    }
    else if (n <= 99)
    {
        cout << "00" << n << '\n';
    }
    else if (n < 1000)
    {
        cout << "0" << n << '\n';
    }
    else
    {
        cout << n << '\n';
    }

    return 0;
}