#include <bits/stdc++.h>

using namespace std;

struct Node{
	int data;
	struct Node* left;
	struct Node* right;

	Node(int data){
		this->data = data;
		left = right = nullptr;
	}
};
int main()
{
	struct Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
    cout<<root->right->data;
  return 0;
}