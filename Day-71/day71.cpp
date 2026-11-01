
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

vector<double> averageOfLevels(TreeNode* root) {
    vector<double> ans;
    queue<TreeNode*> q;

    q.push(root);

    while (!q.empty()) {
        int n = q.size();
        double sum = 0;

        for (int i = 0; i < n; i++) {
            TreeNode* node = q.front();
            q.pop();

            sum += node->val;

            if (node->left != NULL)
                q.push(node->left);

            if (node->right != NULL)
                q.push(node->right);
        }

        ans.push_back(sum / n);
    }

    return ans;
}

int main() {

    // Creating Binary Tree
    TreeNode* root = new TreeNode(3);

    root->left = new TreeNode(9);
    root->right = new TreeNode(20);

    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    // Calling function
    vector<double> result = averageOfLevels(root);

    cout << "Average of Each Level: ";

    for (double x : result) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}
