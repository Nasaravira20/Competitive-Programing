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

int maxDepth(Node* root) {
    if (root == nullptr)
        return 0;
    return max(maxDepth(root->left), maxDepth(root->right)) + 1;
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->left->left = new Node(6);

    cout << "Maximum Depth of the Binary Tree: " << maxDepth(root);

    return 0;
}
