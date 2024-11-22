#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& arr) {
    if (arr.empty()) return "-1";
    sort(arr.begin(), arr.end());
    string first = arr[0];
    string last = arr[arr.size() - 1];
    int i = 0;
    while (i < first.size() && i < last.size() && first[i] == last[i]) {
        i++;
    }
    if (i == 0) return "-1";
    return first.substr(0, i);
}

int main() {
    vector<string> arr = {"geeksforgeeks", "geeks", "geek", "geezer"};
    cout << "Longest Common Prefix: " << longestCommonPrefix(arr) << endl;
    return 0;
}
