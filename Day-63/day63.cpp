#include <iostream>
#include <vector>
#include <unordered_map>
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

TreeNode* build(
    vector<int>& inorder,
    vector<int>& postorder,
    int inStart,
    int inEnd,
    int& postIndex,
    unordered_map<int, int>& inMap
) {
    if (inStart > inEnd)
        return nullptr;

    int rootValue = postorder[postIndex--];
    TreeNode* root = new TreeNode(rootValue);

    int inRoot = inMap[rootValue];

    // Build right subtree first
    root->right = build(
        inorder, postorder,
        inRoot + 1, inEnd,
        postIndex, inMap
    );

    root->left = build(
        inorder, postorder,
        inStart, inRoot - 1,
        postIndex, inMap
    );

    return root;
}

TreeNode* buildTree(
    vector<int>& inorder,
    vector<int>& postorder
) {
    unordered_map<int, int> inMap;

    for (int i = 0; i < inorder.size(); i++)
        inMap[inorder[i]] = i;

    int postIndex = (int)postorder.size() - 1;

    return build(
        inorder, postorder,
        0, (int)inorder.size() - 1,
        postIndex, inMap
    );
}

void printInorder(TreeNode* root) {
    if (root == nullptr)
        return;

    printInorder(root->left);
    cout << root->val << " ";
    printInorder(root->right);
}

int main() {
    vector<int> inorder = {9, 3, 15, 20, 7};
    vector<int> postorder = {9, 15, 7, 20, 3};

    TreeNode* root = buildTree(inorder, postorder);

    cout << "Constructed tree (Inorder): ";
    printInorder(root);
    cout << endl;

    return 0;
}