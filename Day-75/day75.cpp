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

bool areMirrors(TreeNode* left, TreeNode* right) {
    if (left == nullptr && right == nullptr)
        return true;

    if (left == nullptr || right == nullptr)
        return false;

    return left->val == right->val &&
           areMirrors(left->left, right->right) &&
           areMirrors(left->right, right->left);
}

bool isSymmetric(TreeNode* root) {
    if (root == nullptr)
        return true;

    return areMirrors(root->left, root->right);
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(3);

    cout << (isSymmetric(root) ? "true" : "false") << endl;

    return 0;
}
