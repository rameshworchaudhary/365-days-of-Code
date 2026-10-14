#include <iostream>
#include <vector>
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

void findPaths(TreeNode* root, int targetSum,
               vector<int>& path,
               vector<vector<int>>& result) {
    if (root == nullptr)
        return;

    path.push_back(root->data);
    targetSum -= root->data;

    if (root->left == nullptr && root->right == nullptr &&
        targetSum == 0) {
        result.push_back(path);
    }

    findPaths(root->left, targetSum, path, result);
    findPaths(root->right, targetSum, path, result);

    path.pop_back();
}

vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
    vector<vector<int>> result;
    vector<int> path;

    findPaths(root, targetSum, path, result);
    return result;
}

int main() {
    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(4);
    root->right = new TreeNode(8);

    root->left->left = new TreeNode(11);
    root->left->left->left = new TreeNode(7);
    root->left->left->right = new TreeNode(2);

    root->right->left = new TreeNode(13);
    root->right->right = new TreeNode(4);
    root->right->right->left = new TreeNode(5);
    root->right->right->right = new TreeNode(1);

    int targetSum = 22;
    vector<vector<int>> result = pathSum(root, targetSum);

    cout << "Paths with sum " << targetSum << ":" << endl;

    for (const auto& path : result) {
        cout << "[";
        for (int i = 0; i < path.size(); i++) {
            cout << path[i];
            if (i < path.size() - 1)
                cout << ", ";
        }
        cout << "]" << endl;
    }

    return 0;
}