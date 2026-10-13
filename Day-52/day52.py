class TreeNode:
    def __init__(self, value):
        self.data = value
        self.left = None
        self.right = None


def has_path_sum(root, target_sum):
    if root is None:
        return False

    if root.left is None and root.right is None:
        return root.data == target_sum

    remaining = target_sum - root.data

    return (
        has_path_sum(root.left, remaining)
        or has_path_sum(root.right, remaining)
    )


root = TreeNode(5)
root.left = TreeNode(4)
root.right = TreeNode(8)
root.left.left = TreeNode(11)
root.left.left.left = TreeNode(7)
root.left.left.right = TreeNode(2)
root.right.left = TreeNode(13)
root.right.right = TreeNode(4)
root.right.right.right = TreeNode(1)

target_sum = 22

print(str(has_path_sum(root, target_sum)).lower())