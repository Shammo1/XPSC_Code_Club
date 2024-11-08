#include <bits/stdc++.h>
using namespace std;
//problem-14
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> cnt;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        cnt[a[i]]++;
    }

    set<int> s;
    for ( auto& p : cnt) {
        s.insert(p.first);
        s.insert(p.first + 1);
    }

    int last = 0, count = 0;
    for (int x : s) {
        count += max(0, cnt[x] - last);
        last = cnt[x];
    }

    cout << count << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
