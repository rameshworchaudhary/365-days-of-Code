class TreeNode:
    def __init__(self, val):
        self.val = val
        self.left = None
        self.right = None


def preorder(root):
    if root is None:
        return

    print(root.val, end=" ")
    preorder(root.left)
    preorder(root.right)


root = TreeNode(1)
root.left = TreeNode(2)
root.right = TreeNode(3)

print("Preorder Traversal:", end=" ")
preorder(root)