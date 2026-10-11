class TreeNode:
    def __init__(self, value):
        self.data = value
        self.left = None
        self.right = None


def invert_tree(root):
    if root is None:
        return None

    root.left, root.right = root.right, root.left

    invert_tree(root.left)
    invert_tree(root.right)

    return root


def print_tree(root):
    if root is None:
        return

    print(root.data, end=" ")
    print_tree(root.left)
    print_tree(root.right)


root = TreeNode(4)
root.left = TreeNode(2)
root.right = TreeNode(7)
root.left.left = TreeNode(1)
root.left.right = TreeNode(3)
root.right.left = TreeNode(6)
root.right.right = TreeNode(9)

invert_tree(root)

print("Inverted Tree (Preorder):", end=" ")
print_tree(root)
print()