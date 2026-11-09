#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) : val(value), left(nullptr), right(nullptr) {}
};

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* first, TreeNode* second) {
    if (root == nullptr)
        return nullptr;

    if (first->val < root->val && second->val < root->val)
        return lowestCommonAncestor(root->left, first, second);

    if (first->val > root->val && second->val > root->val)
        return lowestCommonAncestor(root->right, first, second);

    return root;
}

int main() {
    TreeNode* root = new TreeNode(6);
    root->left = new TreeNode(2);
    root->right = new TreeNode(8);
    root->left->left = new TreeNode(0);
    root->left->right = new TreeNode(4);
    root->left->right->left = new TreeNode(3);
    root->left->right->right = new TreeNode(5);
    root->right->left = new TreeNode(7);
    root->right->right = new TreeNode(9);

    TreeNode* first = root->left;
    TreeNode* second = root->right;

    TreeNode* ancestor = lowestCommonAncestor(root, first, second);
    cout << "Lowest Common Ancestor: " << ancestor->val << endl;

    return 0;
}
