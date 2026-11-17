#include <algorithm>
#include <climits>
#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) : val(value), left(nullptr), right(nullptr) {}
};

int bestDownwardPath(TreeNode* root, int& maximumPathSum) {
    if (root == nullptr)
        return 0;

    int leftGain = max(0, bestDownwardPath(root->left, maximumPathSum));
    int rightGain = max(0, bestDownwardPath(root->right, maximumPathSum));

    maximumPathSum = max(maximumPathSum, root->val + leftGain + rightGain);
    return root->val + max(leftGain, rightGain);
}

int maxPathSum(TreeNode* root) {
    int maximumPathSum = INT_MIN;
    bestDownwardPath(root, maximumPathSum);
    return maximumPathSum;
}

int main() {
    TreeNode* root = new TreeNode(-10);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    cout << maxPathSum(root) << endl;
    return 0;
}
