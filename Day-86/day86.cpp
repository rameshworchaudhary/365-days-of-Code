#include <iostream>
#include <stack>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) : val(value), left(nullptr), right(nullptr) {}
};

int kthSmallest(TreeNode* root, int k) {
    stack<TreeNode*> nodes;
    TreeNode* current = root;

    while (current != nullptr || !nodes.empty()) {
        while (current != nullptr) {
            nodes.push(current);
            current = current->left;
        }

        current = nodes.top();
        nodes.pop();

        if (--k == 0)
            return current->val;

        current = current->right;
    }

    return -1;
}

int main() {
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(1);
    root->right = new TreeNode(4);
    root->left->right = new TreeNode(2);

    cout << kthSmallest(root, 1) << endl;

    return 0;
}
