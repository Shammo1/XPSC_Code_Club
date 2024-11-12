#include <bits/stdc++.h>
using namespace std;
//PROBLEM-6
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int min_changes = n;
        int current_changes = 0;

        for (int i = 0; i < k; i++) {
            if (s[i] == 'W') {
                current_changes++;
            }
        }

        min_changes = current_changes;

        for (int i = k; i < n; i++) {
            if (s[i - k] == 'W') {
                current_changes--;
            }
            if (s[i] == 'W') {
                current_changes++;
            }
            min_changes = min(min_changes, current_changes);
        }

        cout << min_changes << endl;
    }
    return 0;
}
