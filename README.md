# Introduction
This project implements a solution to find the kth smallest element in a Binary Search Tree (BST). It demonstrates the use of tree traversal and vector manipulation in C++ to solve this common tree-based algorithmic problem.

# Algorithm

## Kth Smallest Element in BST
Logic
- The solution uses an inorder traversal of the BST to generate a sorted list of elements.
- The kth smallest element is then directly accessed from this sorted list.

## Complexity Analysis
**Time Complexity**: The time complexity is O(N), where N is the number of nodes in the BST, since it requires a full traversal of the tree.

**Space Complexity**: The space complexity is O(N) due to the storage of tree elements in a vector.

# Code Snippet
```cpp
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
```
