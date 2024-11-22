#include <bits/stdc++.h>
using namespace std;

pair<int, int> expandAroundCenter(const string& s, int l, int r) {
    while (l >= 0 && r < s.size() && s[l] == s[r]) {
        l--;
        r++;
    }
    return {l + 1, r - l - 1}; 
}

string longestPalindrome(string s) {
    int maxStart = 0, maxLen = 1;

    for (int i = 0; i < s.size() - 1; i++) {
        auto [start1, len1] = expandAroundCenter(s, i, i);
        auto [start2, len2] = expandAroundCenter(s, i, i + 1);

        if (len1 > maxLen) {
            maxLen = len1;
            maxStart = start1;
        }
        if (len2 > maxLen) {
            maxLen = len2;
            maxStart = start2;
        }
    }

    return s.substr(maxStart, maxLen);
}

int main() {
    string s = "babad";
    cout << "Longest Palindromic Substring: " << longestPalindrome(s) << endl;
    return 0;
}
