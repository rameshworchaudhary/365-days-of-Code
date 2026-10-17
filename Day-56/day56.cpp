#include <iostream>
#include <climits>
#include <algorithm>
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

int countGoodNodes(TreeNode* root, int maxSoFar) {
    if (root == nullptr)
        return 0;

    int count = 0;

    if (root->val >= maxSoFar)
        count = 1;

    int newMax = max(maxSoFar, root->val);

    return count
        + countGoodNodes(root->left, newMax)
        + countGoodNodes(root->right, newMax);
}

int main() {
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(1);
    root->right = new TreeNode(4);
    root->left->left = new TreeNode(3);
    root->right->left = new TreeNode(1);
    root->right->right = new TreeNode(5);

    cout << "Good nodes: "
         << countGoodNodes(root, INT_MIN) << endl;

    return 0;
}