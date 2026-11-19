#include <iostream>
#include <sstream>
#include <string>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) : val(value), left(nullptr), right(nullptr) {}
};

class Codec {
public:
    string serialize(TreeNode* root) {
        ostringstream out;
        serializeSubtree(root, out);
        return out.str();
    }

    TreeNode* deserialize(const string& data) {
        istringstream input(data);
        return deserializeSubtree(input);
    }

private:
    void serializeSubtree(TreeNode* root, ostringstream& out) {
        if (root == nullptr) {
            out << "#,";
            return;
        }

        out << root->val << ",";
        serializeSubtree(root->left, out);
        serializeSubtree(root->right, out);
    }

    TreeNode* deserializeSubtree(istringstream& input) {
        string token;
        if (!getline(input, token, ','))
            return nullptr;
        if (token == "#")
            return nullptr;

        TreeNode* root = new TreeNode(stoi(token));
        root->left = deserializeSubtree(input);
        root->right = deserializeSubtree(input);
        return root;
    }
};

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(5);

    Codec codec;
    string data = codec.serialize(root);
    TreeNode* restored = codec.deserialize(data);

    cout << data << endl;
    cout << (restored != nullptr &&
             restored->right != nullptr &&
             restored->right->left != nullptr &&
             restored->right->left->val == 4)
         << endl;
    return 0;
}
