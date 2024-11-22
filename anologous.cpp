#include <bits/stdc++.h>
using namespace std;

bool areAnagrams(const string& s1, const string& s2) {
    if (s1.length() != s2.length()) return false;

    unordered_map<char, int> freq1, freq2;

    for (char ch : s1) {
        freq1[ch]++;
    }

    for (char ch : s2) {
        freq2[ch]++;
    }

    return freq1 == freq2;
}

int main() {
    string s1 = "geeks", s2 = "kseeg";
    cout << "Input: " << s1 << ", " << s2 << "\nOutput: "
         << (areAnagrams(s1, s2) ? "true" : "false") << endl;

    s1 = "allergy"; s2 = "allergic";
    cout << "Input: " << s1 << ", " << s2 << "\nOutput: "
         << (areAnagrams(s1, s2) ? "true" : "false") << endl;

    return 0;
}
