#include <iostream>
#include <vector>
#include "TreeNode.h";
using namespace std;

class Solution {
public:
    int kthSmallest(TreeNode* root, int k);
    void inorder(TreeNode* root, vector<int>& container);
};

int main() {
    vector<int> container;
    int k = 2;

    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(1);
    root->right = new TreeNode(4);
    root->left->right = new TreeNode(2);
    Solution solution;

    cout << "The " << k << "th smallest element is: " << solution.kthSmallest(root, k) << endl;

	return 0;
}

int Solution::kthSmallest(TreeNode* root, int k) {
    std::vector<int> container;
    // Inorder traversal generates a non decreasing vector
    inorder(root, container);
    return container[k - 1];
}

void Solution::inorder(TreeNode* root, vector<int>& container) {
    if (root) {
        // Traverse the left children
        inorder(root->left, container);
        // Get root node
        container.push_back(root->val);
        // Traverse the right children
        inorder(root->right, container);
    }
}