#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

void zigzagTraversal(TreeNode* root) {
    if (root == nullptr)
        return;

    queue<TreeNode*> q;
    q.push(root);

    bool leftToRight = true;

    while (!q.empty()) {
        int size = q.size();
        vector<int> level;

        for (int i = 0; i < size; i++) {
            TreeNode* current = q.front();
            q.pop();

            level.push_back(current->data);

            if (current->left)
                q.push(current->left);

            if (current->right)
                q.push(current->right);
        }

        if (!leftToRight) {
            reverse(level.begin(), level.end());
        }

        for (int value : level) {
            cout << value << " ";
        }

        cout << endl;

        leftToRight = !leftToRight;
    }
}

int main() {
    TreeNode* root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    zigzagTraversal(root);

    return 0;
}