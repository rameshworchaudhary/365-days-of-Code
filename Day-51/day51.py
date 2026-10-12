class TreeNode:
    def __init__(self, value):
        self.data = value
        self.left = None
        self.right = None


def is_mirror(left, right):
    if left is None and right is None:
        return True

    if left is None or right is None:
        return False

    if left.data != right.data:
        return False

    return (
        is_mirror(left.left, right.right)
        and is_mirror(left.right, right.left)
    )


def is_symmetric(root):
    if root is None:
        return True

    return is_mirror(root.left, root.right)


root = TreeNode(1)

root.left = TreeNode(2)
root.right = TreeNode(2)

root.left.left = TreeNode(3)
root.left.right = TreeNode(4)

root.right.left = TreeNode(4)
root.right.right = TreeNode(3)

print(str(is_symmetric(root)).lower())