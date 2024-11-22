#include <bits/stdc++.h>
using namespace std;

void nextGreaterElement(vector<int>& arr) {
    stack<int> st;
    int n = arr.size();
    
    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && st.top() <= arr[i]) {
            st.pop();
        }
        
        if (st.empty()) {
            cout << arr[i] << " --> -1" << endl;
        } else {
            cout << arr[i] << " --> " << st.top() << endl;
        }
        
        st.push(arr[i]);
    }
}

int main() {
    vector<int> arr1 = {4, 5, 2, 25};
    vector<int> arr2 = {13, 7, 6, 12};
    
    cout << "For arr1:" << endl;
    nextGreaterElement(arr1);
    
    cout << "\nFor arr2:" << endl;
    nextGreaterElement(arr2);
    
    return 0;
}
