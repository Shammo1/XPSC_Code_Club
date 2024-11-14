#include <bits/stdc++.h>
using namespace std;
//PROBLEM-8
int main()
{
    int a, b;
    cin >> a >> b;
    vector<int> v(a), v2(b);
    for (int i = 0; i < a; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < b; i++)
    {
        cin >> v2[i];
    }

    vector<int> merge;
    int l = 0;
    int r = 0;
    while (l < a && r < b)
    {

        if (v[l] <= v2[r])
        {
            merge.push_back(v[l]);

            l++;
        }
        else
        {
            merge.push_back(v2[r]);
            r++;
        }
    }
    while (l < a)
    {
        merge.push_back(v[l]);
        l++;
    }
    while (r < b)
    {
        merge.push_back(v2[r]);
        r++;
    }
    for (int x : merge)
    {
        cout << x << " ";
    }
    return 0;
}