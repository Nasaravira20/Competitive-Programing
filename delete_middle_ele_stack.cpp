#include <bits/stdc++.h>
using namespace std;

void deleteMiddle(stack<int>& st, int current, int middle) {
    if (current == middle) {
        st.pop();
        return;
    }

    int top = st.top();
    st.pop();

    deleteMiddle(st, current + 1, middle);

    st.push(top);
}

int main() {
    vector<int> given = {1, 2, 3, 4, 5};

    stack<int> st;
    for (int i : given) {
        st.push(i);
    }

    int middle = given.size() / 2;
    deleteMiddle(st, 0, middle);

    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}
