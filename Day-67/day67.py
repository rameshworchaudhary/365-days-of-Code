class TreeNode:
    def __init__(self, val):
        self.val = val
        self.left = None
        self.right = None


def postorder(root):
    if root is None:
        return

    postorder(root.left)
    postorder(root.right)
    print(root.val, end=" ")


root = TreeNode(1)
root.left = TreeNode(2)
root.right = TreeNode(3)

print("Postorder Traversal:", end=" ")
postorder(root)