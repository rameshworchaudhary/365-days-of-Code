#include <iostream>
#include <vector>
#include <queue>
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

TreeNode* buildBST(vector<int>& nums, int left, int right) {
    if (left > right)
        return NULL;

    int mid = left + (right - left) / 2;

    TreeNode* root = new TreeNode(nums[mid]);

    root->left = buildBST(nums, left, mid - 1);
    root->right = buildBST(nums, mid + 1, right);

    return root;
}

TreeNode* sortedArrayToBST(vector<int>& nums) {
    return buildBST(nums, 0, nums.size() - 1);
}

void levelOrder(TreeNode* root) {
    if (root == NULL)
        return;

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode* curr = q.front();
        q.pop();

        if (curr == NULL) {
            cout << "null ";
            continue;
        }

        cout << curr->val << " ";

        q.push(curr->left);
        q.push(curr->right);
    }
}

int main() {
    vector<int> nums = {-10, -3, 0, 5, 9};

    TreeNode* root = sortedArrayToBST(nums);

    cout << "BST Level Order: ";
    levelOrder(root);

    return 0;
}