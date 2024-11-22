#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minh;
    vector<pair<int, int>> lst = {{1, 3}, {2, 4}, {6, 8}, {9, 10}};
    vector<pair<int, int>> result;
    
    for (auto interval : lst) {
        minh.push(interval);
    }

    auto current = minh.top();
    minh.pop();

    while (!minh.empty()) {
        auto next = minh.top();
        minh.pop();

        if (current.second >= next.first) {
            current.second = max(current.second, next.second);
        } else {
            result.push_back(current);
            current = next;
        }
    }

    result.push_back(current);

    for (auto interval : result) {
        cout << "[" << interval.first << ", " << interval.second << "] ";
    }

    return 0;
}
