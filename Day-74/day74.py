class TreeNode:
    def __init__(self, value):
        self.val = value
        self.left = None
        self.right = None


def is_valid(root, lower=float("-inf"), upper=float("inf")):
    if root is None:
        return True

    if root.val <= lower or root.val >= upper:
        return False

    return is_valid(root.left, lower, root.val) and is_valid(
        root.right, root.val, upper
    )


def is_valid_bst(root):
    return is_valid(root)


root = TreeNode(2)
root.left = TreeNode(1)
root.right = TreeNode(3)

print("true" if is_valid_bst(root) else "false")
