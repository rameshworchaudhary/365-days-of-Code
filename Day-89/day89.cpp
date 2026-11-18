#include <algorithm>
#include <iostream>
#include <utility>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) : val(value), left(nullptr), right(nullptr) {}
};

pair<int, int> robSubtree(TreeNode* root) {
    if (root == nullptr)
        return {0, 0};

    auto left = robSubtree(root->left);
    auto right = robSubtree(root->right);

    int skipCurrent = max(left.first, left.second) +
                      max(right.first, right.second);
    int robCurrent = root->val + left.first + right.first;

    return {skipCurrent, robCurrent};
}

int rob(TreeNode* root) {
    auto result = robSubtree(root);
    return max(result.first, result.second);
}

int main() {
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->right = new TreeNode(3);
    root->right->right = new TreeNode(1);

    cout << rob(root) << endl;
    return 0;
}
