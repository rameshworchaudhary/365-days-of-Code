class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


def inorder_traversal(root):
    result = []

    def dfs(node):
        if node is None:
            return

        dfs(node.left)
        result.append(node.val)
        dfs(node.right)

    dfs(root)
    return result


root = TreeNode(1)
root.right = TreeNode(2)
root.right.left = TreeNode(3)

print("Inorder Traversal:", inorder_traversal(root))