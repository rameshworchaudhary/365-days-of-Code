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

bool sameTree(TreeNode* first, TreeNode* second) {
    if (first == nullptr || second == nullptr)
        return first == second;

    return first->val == second->val &&
           sameTree(first->left, second->left) &&
           sameTree(first->right, second->right);
}

bool isSubtree(TreeNode* root, TreeNode* subRoot) {
    if (subRoot == nullptr)
        return true;

    if (root == nullptr)
        return false;

    return sameTree(root, subRoot) ||
           isSubtree(root->left, subRoot) ||
           isSubtree(root->right, subRoot);
}

int main() {
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(4);
    root->right = new TreeNode(5);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(2);

    TreeNode* subRoot = new TreeNode(4);
    subRoot->left = new TreeNode(1);
    subRoot->right = new TreeNode(2);

    cout << (isSubtree(root, subRoot) ? "true" : "false") << endl;

    return 0;
}
