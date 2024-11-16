#include <bits/stdc++.h>
using namespace std;

char solve(string &a, string &b)
{
    if (a == b)
        return '=';

    char typeA = a.back();
    char typeB = b.back();
    int lenA = a.length();
    int lenB = b.length();

    if (typeA == 'S')
    {
        if (typeB == 'S')
        {
            if (lenA < lenB)
            {
                return '>';
            }
            else
            {
                return '<';
            }
        }
        else
        {
            return '<';
        }
    }
    if (typeA == 'M')
    {
        if (typeB == 'M')
        {
            return '=';
        }
        else if (typeB == 'S')
        {
            return '>';
        }
        else
        {
            return '<';
        }
    }
    if (typeA == 'L')
    {
        if (typeB == 'L')
        {
            return lenA < lenB ? '<' : '>';
        }
        else
        {
            return '>';
        }
    }

    return '=';
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        cout << solve(a, b) << endl;
    }
    return 0;
}
