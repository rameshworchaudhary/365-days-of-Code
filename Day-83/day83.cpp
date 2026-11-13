#include <algorithm>
#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) : val(value), left(nullptr), right(nullptr) {}
};

int countGoodNodes(TreeNode* node, int maximum) {
    if (node == nullptr)
        return 0;

    int currentMaximum = max(maximum, node->val);
    int goodNode = node->val >= maximum ? 1 : 0;

    return goodNode + countGoodNodes(node->left, currentMaximum) +
           countGoodNodes(node->right, currentMaximum);
}

int goodNodes(TreeNode* root) {
    if (root == nullptr)
        return 0;

    return countGoodNodes(root, root->val);
}

int main() {
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(1);
    root->right = new TreeNode(4);
    root->left->left = new TreeNode(3);
    root->right->left = new TreeNode(1);
    root->right->right = new TreeNode(5);

    cout << goodNodes(root) << endl;

    return 0;
}
