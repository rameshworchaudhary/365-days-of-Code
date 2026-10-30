class TreeNode:
    def __init__(self, val):
        self.val = val
        self.left = None
        self.right = None


def sumOfLeftLeaves(root):
    if root is None:
        return 0

    total = 0

    if root.left is not None:
        if root.left.left is None and root.left.right is None:
            total += root.left.val
        else:
            total += sumOfLeftLeaves(root.left)

    total += sumOfLeftLeaves(root.right)

    return total


root = TreeNode(3)
root.left = TreeNode(9)
root.right = TreeNode(20)

root.right.left = TreeNode(15)
root.right.right = TreeNode(7)

print("Sum of Left Leaves:", sumOfLeftLeaves(root))