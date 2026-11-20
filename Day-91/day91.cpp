#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) : val(value), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (subRoot == nullptr)
            return true;
        if (root == nullptr)
            return false;

        return isSameTree(root, subRoot) ||
               isSubtree(root->left, subRoot) ||
               isSubtree(root->right, subRoot);
    }

private:
    bool isSameTree(TreeNode* first, TreeNode* second) {
        if (first == nullptr || second == nullptr)
            return first == second;

        return first->val == second->val &&
               isSameTree(first->left, second->left) &&
               isSameTree(first->right, second->right);
    }
};

int main() {
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(4);
    root->right = new TreeNode(5);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(2);

    TreeNode* subRoot = new TreeNode(4);
    subRoot->left = new TreeNode(1);
    subRoot->right = new TreeNode(2);

    Solution solution;
    cout << boolalpha << solution.isSubtree(root, subRoot) << endl;
    return 0;
}
