#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<long long> lst(n);
        for (int i = 0; i < n; i++) {
            cin >> lst[i];
        }

        priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> mh; 
        priority_queue<pair<long long, int>> mh; 
        unordered_map<int, bool> r; 

        for (int i = 0; i < n; i++) {
            mh.push({lst[i], i});
            mh.push({lst[i], i});
        }

        int turn = 0; 
        while (r.size() < n - 1) {
            if (turn % 2 == 0) {
                while (r[mh.top().second]) {
                    mh.pop(); 
                }
                r[mh.top().second] = true;
                mh.pop();
            } else {
                while (r[mh.top().second]) {
                    mh.pop(); 
                }
                r[mh.top().second] = true;
                mh.pop();
            }
            turn++;
        }
        for (int i = 0; i < n; i++) {
            if (!r[i]) {
                cout << lst[i] << endl;
                break;
            }
        }
    }

}
