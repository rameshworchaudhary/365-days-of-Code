#include <iostream>
#include <limits>
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

bool isValid(TreeNode* root, long long lower, long long upper) {
    if (root == nullptr)
        return true;

    if (root->val <= lower || root->val >= upper)
        return false;

    return isValid(root->left, lower, root->val) &&
           isValid(root->right, root->val, upper);
}

bool isValidBST(TreeNode* root) {
    return isValid(
        root,
        numeric_limits<long long>::lowest(),
        numeric_limits<long long>::max()
    );
}

int main() {
    TreeNode* root = new TreeNode(2);
    root->left = new TreeNode(1);
    root->right = new TreeNode(3);

    cout << (isValidBST(root) ? "true" : "false") << endl;

    return 0;
}
