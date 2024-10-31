#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        long long int x;
        cin >> x;
        v.push_back(x);
    }
    long long int totalSum = 0;
    int smallestOdd = INT_MAX;
    for (int f : v)
    {
        totalSum += f;
        if (f % 2 != 0)
        {
            smallestOdd = min(f, smallestOdd);
        }
    }
    if (totalSum % 2 == 0)
    {
        cout << totalSum;
    }
    else
    {
        if (smallestOdd != INT_MAX)
        {
            cout << totalSum - smallestOdd;
        }
        else
        {
            cout << "0";
        }
    }

    return 0;
}