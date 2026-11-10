#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) : val(value), left(nullptr), right(nullptr) {}
};

vector<vector<int>> levelOrder(TreeNode* root) {
    vector<vector<int>> levels;

    if (root == nullptr)
        return levels;

    queue<TreeNode*> nodes;
    nodes.push(root);

    while (!nodes.empty()) {
        int levelSize = nodes.size();
        vector<int> currentLevel;

        for (int i = 0; i < levelSize; i++) {
            TreeNode* current = nodes.front();
            nodes.pop();
            currentLevel.push_back(current->val);

            if (current->left != nullptr)
                nodes.push(current->left);
            if (current->right != nullptr)
                nodes.push(current->right);
        }

        levels.push_back(currentLevel);
    }

    return levels;
}

int main() {
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    vector<vector<int>> levels = levelOrder(root);

    cout << "[";
    for (int i = 0; i < levels.size(); i++) {
        cout << "[";
        for (int j = 0; j < levels[i].size(); j++) {
            cout << levels[i][j];
            if (j + 1 < levels[i].size())
                cout << ", ";
        }
        cout << "]";
        if (i + 1 < levels.size())
            cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}
