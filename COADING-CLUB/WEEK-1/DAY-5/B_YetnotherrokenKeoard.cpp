#include <bits/stdc++.h>
using namespace std;
//problem-6
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) {
        string s, result; 
        cin >> s;
        int countLowerB = 0, countUpperB = 0;
        reverse(s.begin(), s.end());
        for (char ch : s) {
            if (ch == 'b') {
                countLowerB++;
            } else if (ch == 'B') {
                countUpperB++;
            } else {
                if (countLowerB > 0 && islower(ch)) {
                    countLowerB--;
                    continue;
                }
                if (countUpperB > 0 && isupper(ch)) {
                    countUpperB--;
                    continue;
                }
                result.push_back(ch);
            }
        }

        if (result.empty()) {
            cout << '\n'; 
        } else {
            reverse(result.begin(), result.end());
            cout << result << '\n';
        }
    }
    return 0;
}
