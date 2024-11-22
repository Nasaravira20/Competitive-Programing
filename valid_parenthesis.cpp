#include <bits/stdc++.h>
using namespace std;

bool isBalanced(const string& str) {
    stack<char> s;
    
    for (char ch : str) {
        if (ch == '(') {
            s.push(ch);
        } else if (ch == ')') {
            if (s.empty()) {
                return false;
            }
            s.pop();
        }
    }
    
    return s.empty();
}

int main() {
    string str1 = "((()))()()";
    string str2 = "())((())";
    
    cout << "Input: " << str1 << "\nOutput: " 
         << (isBalanced(str1) ? "Balanced" : "Not Balanced") << endl;
    
    cout << "Input: " << str2 << "\nOutput: " 
         << (isBalanced(str2) ? "Balanced" : "Not Balanced") << endl;
    
    return 0;
}
