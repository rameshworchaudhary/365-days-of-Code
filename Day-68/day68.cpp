#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};

void findPaths(TreeNode* root, string path,
               vector<string>& ans) {
    if (root == NULL)
        return;

    if (path != "")
        path += "->";

    path += to_string(root->val);

    if (root->left == NULL && root->right == NULL) {
        ans.push_back(path);
        return;
    }

    findPaths(root->left, path, ans);
    findPaths(root->right, path, ans);
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    vector<string> ans;
    findPaths(root, "", ans);

    cout << "Root-to-leaf paths:" << endl;
    for (string path : ans)
        cout << path << endl;

    return 0;
}