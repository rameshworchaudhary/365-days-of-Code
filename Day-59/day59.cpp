#include <iostream>
#include <stack>
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

int kthSmallest(TreeNode* root, int k) {
    stack<TreeNode*> st;

    while (root != nullptr || !st.empty()) {
        while (root != nullptr) {
            st.push(root);
            root = root->left;
        }

        root = st.top();
        st.pop();

        k--;

        if (k == 0)
            return root->val;

        root = root->right;
    }

    return -1;
}

int main() {
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(1);
    root->right = new TreeNode(4);
    root->left->right = new TreeNode(2);

    int k = 1;

    cout << "Kth Smallest Element: "
         << kthSmallest(root, k) << endl;

    return 0;
}