#include <iostream>
#include <limits>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) : val(value), left(nullptr), right(nullptr) {}
};

bool isValid(TreeNode* node, long long minimum, long long maximum) {
    if (node == nullptr)
        return true;

    if (node->val <= minimum || node->val >= maximum)
        return false;

    return isValid(node->left, minimum, node->val) &&
           isValid(node->right, node->val, maximum);
}

bool isValidBST(TreeNode* root) {
    return isValid(root, numeric_limits<long long>::lowest(),
                   numeric_limits<long long>::max());
}

int main() {
    TreeNode* root = new TreeNode(2);
    root->left = new TreeNode(1);
    root->right = new TreeNode(3);

    cout << boolalpha << isValidBST(root) << endl;

    return 0;
}
