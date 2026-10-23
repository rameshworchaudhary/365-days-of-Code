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
    vector<int>& preorder,
    int preStart,
    int preEnd,
    int inStart,
    int inEnd,
    unordered_map<int, int>& inMap
) {
    if (preStart > preEnd || inStart > inEnd)
        return nullptr;

    int rootValue = preorder[preStart];
    TreeNode* root = new TreeNode(rootValue);

    int inRoot = inMap[rootValue];
    int leftSize = inRoot - inStart;

    root->left = build(
        preorder,
        preStart + 1,
        preStart + leftSize,
        inStart,
        inRoot - 1,
        inMap
    );

    root->right = build(
        preorder,
        preStart + leftSize + 1,
        preEnd,
        inRoot + 1,
        inEnd,
        inMap
    );

    return root;
}

TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
    unordered_map<int, int> inMap;

    for (int i = 0; i < inorder.size(); i++)
        inMap[inorder[i]] = i;

    return build(
        preorder, 0, preorder.size() - 1,
        0, inorder.size() - 1, inMap
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
    vector<int> preorder = {3, 9, 20, 15, 7};
    vector<int> inorder = {9, 3, 15, 20, 7};

    TreeNode* root = buildTree(preorder, inorder);

    cout << "Constructed tree (Inorder): ";
    printInorder(root);
    cout << endl;

    return 0;
}