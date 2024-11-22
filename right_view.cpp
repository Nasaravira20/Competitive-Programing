#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left, *right;
    
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

void rightView(Node* root) {
    if (root == nullptr)
        return;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        int size = q.size();
        for (int i = 1; i <= size; i++) {
            Node* node = q.front();
            q.pop();

            if (i == size) {
                cout << node->data << " ";  
            }

            if (node->left)
                q.push(node->left);
            if (node->right)
                q.push(node->right);
        }
    }
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);
    root->left->left->left = new Node(7);
    root->left->left->right = new Node(8);

    cout << "Right View of the Binary Tree: ";
    rightView(root);

    return 0;
}
