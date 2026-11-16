#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) : val(value), left(nullptr), right(nullptr) {}
};

TreeNode* buildTree(const vector<int>& preorder, int& preorderIndex,
                    int inorderStart, int inorderEnd,
                    const unordered_map<int, int>& inorderPositions) {
    if (inorderStart > inorderEnd)
        return nullptr;

    int rootValue = preorder[preorderIndex++];
    TreeNode* root = new TreeNode(rootValue);
    int inorderRoot = inorderPositions.at(rootValue);

    root->left = buildTree(preorder, preorderIndex, inorderStart,
                           inorderRoot - 1, inorderPositions);
    root->right = buildTree(preorder, preorderIndex, inorderRoot + 1,
                            inorderEnd, inorderPositions);

    return root;
}

TreeNode* constructTree(const vector<int>& preorder,
                        const vector<int>& inorder) {
    unordered_map<int, int> inorderPositions;

    for (int i = 0; i < static_cast<int>(inorder.size()); i++)
        inorderPositions[inorder[i]] = i;

    int preorderIndex = 0;
    return buildTree(preorder, preorderIndex, 0,
                     static_cast<int>(inorder.size()) - 1, inorderPositions);
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

    TreeNode* root = constructTree(preorder, inorder);
    printInorder(root);
    cout << endl;

    return 0;
}
