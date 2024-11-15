#include <bits/stdc++.h>
using namespace std;
//PROBLEM-10
class Solution
{
public:
    int search(string pat, string txt)
    {

        int n = txt.length();
        int m = pat.length();

        if (n < m)
            return 0;

        vector<int> patCount(26, 0);
        vector<int> windowCount(26, 0);

        for (int i = 0; i < m; i++)
        {
            patCount[pat[i] - 'a']++;
        }

        int result = 0;
        int i = 0;

        while (i < m)
        {
            windowCount[txt[i] - 'a']++;
            i++;
        }

        if (windowCount == patCount)
        {
            result++;
        }

        while (i < n)
        {
            windowCount[txt[i] - 'a']++;
            windowCount[txt[i - m] - 'a']--;

            if (windowCount == patCount)
            {
                result++;
            }

            i++;
        }
        return result;
    }
};
int main()
{

    return 0;
}
