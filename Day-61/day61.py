class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


def max_difference(node, min_val, max_val):
    if node is None:
        return max_val - min_val

    min_val = min(min_val, node.val)
    max_val = max(max_val, node.val)

    left_diff = max_difference(node.left, min_val, max_val)
    right_diff = max_difference(node.right, min_val, max_val)

    return max(left_diff, right_diff)


def max_ancestor_diff(root):
    if root is None:
        return 0

    return max_difference(root, root.val, root.val)


root = TreeNode(8)
root.left = TreeNode(3)
root.right = TreeNode(10)

root.left.left = TreeNode(1)
root.left.right = TreeNode(6)
root.left.right.left = TreeNode(4)
root.left.right.right = TreeNode(7)

root.right.right = TreeNode(14)
root.right.right.left = TreeNode(13)

print("Maximum Difference:", max_ancestor_diff(root))