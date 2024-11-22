#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, c;
        cin >> n >> c;

        int points[n];
        int costs[n];

        for (int i = 0; i < n; i++) {
            cin >> costs[i];
            points[i] = i + 1;
        }

        for (int i = 0; i < n; i++) {
            costs[i] += points[i];
        }

        sort(costs, costs + n);

        int usedTeleporters = 0;

        for (int i = 0; i < n; i++) {
            if (c >= costs[i]) {
                c -= costs[i];
                usedTeleporters++;
            } else {
                break;
            }
        }

        cout << usedTeleporters << endl;
    }

    return 0;
}
