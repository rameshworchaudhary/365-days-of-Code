#include <algorithm>
#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) {
        val = value;
        left = nullptr;
        right = nullptr;
    }
};

int height(TreeNode* root) {
    if (root == nullptr)
        return 0;

    int leftHeight = height(root->left);
    if (leftHeight == -1)
        return -1;

    int rightHeight = height(root->right);
    if (rightHeight == -1)
        return -1;

    if (abs(leftHeight - rightHeight) > 1)
        return -1;

    return 1 + max(leftHeight, rightHeight);
}

bool isBalanced(TreeNode* root) {
    return height(root) != -1;
}

int main() {
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    cout << (isBalanced(root) ? "true" : "false") << endl;

    return 0;
}
