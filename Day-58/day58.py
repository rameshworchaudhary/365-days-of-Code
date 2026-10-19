class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


def validate_bst(root, low=float("-inf"), high=float("inf")):
    if root is None:
        return True

    if root.val <= low or root.val >= high:
        return False

    return (
        validate_bst(root.left, low, root.val)
        and validate_bst(root.right, root.val, high)
    )


root = TreeNode(2)
root.left = TreeNode(1)
root.right = TreeNode(3)

print("Valid BST:", str(validate_bst(root)).lower())