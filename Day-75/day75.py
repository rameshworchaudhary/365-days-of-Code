class TreeNode:
    def __init__(self, value):
        self.val = value
        self.left = None
        self.right = None


def are_mirrors(left, right):
    if left is None and right is None:
        return True

    if left is None or right is None:
        return False

    return (
        left.val == right.val
        and are_mirrors(left.left, right.right)
        and are_mirrors(left.right, right.left)
    )


def is_symmetric(root):
    if root is None:
        return True

    return are_mirrors(root.left, root.right)


root = TreeNode(1)
root.left = TreeNode(2)
root.right = TreeNode(2)
root.left.left = TreeNode(3)
root.left.right = TreeNode(4)
root.right.left = TreeNode(4)
root.right.right = TreeNode(3)

print("true" if is_symmetric(root) else "false")
