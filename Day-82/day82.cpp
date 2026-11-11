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

vector<int> rightSideView(TreeNode* root) {
    vector<int> visibleNodes;

    if (root == nullptr)
        return visibleNodes;

    queue<TreeNode*> nodes;
    nodes.push(root);

    while (!nodes.empty()) {
        int levelSize = nodes.size();

        for (int i = 0; i < levelSize; i++) {
            TreeNode* current = nodes.front();
            nodes.pop();

            if (i == levelSize - 1)
                visibleNodes.push_back(current->val);

            if (current->left != nullptr)
                nodes.push(current->left);
            if (current->right != nullptr)
                nodes.push(current->right);
        }
    }

    return visibleNodes;
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(4);

    vector<int> visibleNodes = rightSideView(root);

    cout << "[";
    for (int i = 0; i < visibleNodes.size(); i++) {
        cout << visibleNodes[i];
        if (i + 1 < visibleNodes.size())
            cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}
