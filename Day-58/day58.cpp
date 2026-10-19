#include <iostream>
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

bool validateBST(TreeNode* root, long long low, long long high) {
    if (root == nullptr)
        return true;

    if (root->val <= low || root->val >= high)
        return false;

    return validateBST(root->left, low, root->val) &&
           validateBST(root->right, root->val, high);
}

int main() {
    TreeNode* root = new TreeNode(2);
    root->left = new TreeNode(1);
    root->right = new TreeNode(3);

    if (validateBST(root, LLONG_MIN, LLONG_MAX))
        cout << "Valid BST: true" << endl;
    else
        cout << "Valid BST: false" << endl;

    return 0;
}