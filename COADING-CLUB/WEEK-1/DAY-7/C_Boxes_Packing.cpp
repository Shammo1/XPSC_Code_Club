#include <bits/stdc++.h>
using namespace std;
//PROBLEM-13
int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    map<int, int> freq;
    for (int box : v)
    {
        freq[box]++;
    }

    int max_stacks = 0;
    for (auto it : freq)
    {
        int count = it.second;
        max_stacks = max(max_stacks, count);
    }

    cout << max_stacks << endl;

    return 0;
}