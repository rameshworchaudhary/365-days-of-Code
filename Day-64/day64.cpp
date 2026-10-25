#include <iostream>
#include <algorithm>
#include <climits>
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

int maxPathSumHelper(TreeNode* root, int& maximum) {
    if (root == nullptr)
        return 0;

    int leftSum = max(0, maxPathSumHelper(root->left, maximum));
    int rightSum = max(0, maxPathSumHelper(root->right, maximum));

    int pathThroughNode = root->val + leftSum + rightSum;
    maximum = max(maximum, pathThroughNode);

    return root->val + max(leftSum, rightSum);
}

int maxPathSum(TreeNode* root) {
    int maximum = INT_MIN;
    maxPathSumHelper(root, maximum);
    return maximum;
}

int main() {
    TreeNode* root = new TreeNode(-10);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    cout << "Maximum Path Sum: " << maxPathSum(root) << endl;

    return 0;
}