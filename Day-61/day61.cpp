#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = right = nullptr;
    }
};

int maxDifference(TreeNode* node, int minVal, int maxVal) {
    if (node == nullptr)
        return maxVal - minVal;

    minVal = min(minVal, node->val);
    maxVal = max(maxVal, node->val);

    int leftDiff = maxDifference(node->left, minVal, maxVal);
    int rightDiff = maxDifference(node->right, minVal, maxVal);

    return max(leftDiff, rightDiff);
}

int maxAncestorDiff(TreeNode* root) {
    if (root == nullptr)
        return 0;

    return maxDifference(root, root->val, root->val);
}

int main() {
    TreeNode* root = new TreeNode(8);
    root->left = new TreeNode(3);
    root->right = new TreeNode(10);

    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(6);
    root->left->right->left = new TreeNode(4);
    root->left->right->right = new TreeNode(7);

    root->right->right = new TreeNode(14);
    root->right->right->left = new TreeNode(13);

    cout << "Maximum Difference: "
         << maxAncestorDiff(root) << endl;

    return 0;
}