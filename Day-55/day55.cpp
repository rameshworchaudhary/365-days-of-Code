#include <iostream>
using namespace std;

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

bool isSameTree(TreeNode* a, TreeNode* b) {
    if (a == nullptr && b == nullptr)
        return true;

    if (a == nullptr || b == nullptr)
        return false;

    if (a->data != b->data)
        return false;

    return isSameTree(a->left, b->left) &&
           isSameTree(a->right, b->right);
}

bool isSubtree(TreeNode* root, TreeNode* subRoot) {
    if (root == nullptr)
        return false;

    if (isSameTree(root, subRoot))
        return true;

    return isSubtree(root->left, subRoot) ||
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

    cout << (isSubtree(root, subRoot) ? "true" : "false")
         << endl;

    return 0;
}