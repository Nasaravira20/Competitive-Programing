#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> missing(m);
        unordered_set<int> known;

        for (int i = 0; i < m; i++) cin >> missing[i];
        for (int i = 0; i < k; i++) {
            int q;
            cin >> q;
            known.insert(q);
        }

        string result = "";

        if (known.size() == n) {
            result = string(m, '1');
        } else {
            for (int i = 0; i < m; i++) {
                if (known.find(missing[i]) == known.end() && known.size() >= n - 1) {
                    result += '1';
                } else {
                    result += '0';
                }
            }
        }

        cout << result << endl;
    }

    return 0;
}