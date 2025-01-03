#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int next_number = 1;
    int rounds = 0;

    while (next_number <= n) {
        rounds++;
        bool collected_in_round = false;

        for (int i = 0; i < n; i++) {
            if (arr[i] == next_number) {
                next_number++;
              
                collected_in_round = true;
            }
        }

        if (!collected_in_round) {
            break;
        }
    }

    cout << rounds << endl;
    return 0;
}
