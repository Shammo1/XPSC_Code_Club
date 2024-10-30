#include <bits/stdc++.h>
using namespace std;

int main()
{
    // string s;
    // cin >> s;
    // int pos = -1;
    // int i = 0;
    // while (true)
    // {

    //     pos = s.find('a' + i);
    //     if (pos == -1)
    //     {
    //         char f = 'a' + i;
    //         if (f <= 'z')
    //         {
    //             cout << f;
    //             pos = INT_MAX;
    //             break;
    //         }
    //         else
    //         {
    //             pos = INT_MAX;
    //             break;
    //         }
    //     }
    //     else
    //     {
    //         i++;
    //     }
    // }
    // if (pos == -1)
    // {
    //     cout << "None";
    // }

    string s;
    cin >> s;
    int pos = -1;
    int i = 0;
    bool flag=false;
    while (i <= 25)
    {
        pos = s.find('a' + i);
        if (pos == -1)
        {
            char k = 'a' + i;
            cout << k;
            flag=true;
            break;
        }
        i++;
    }
    if (flag ==false)
    {
        cout << "None";
    }

    return 0;
}