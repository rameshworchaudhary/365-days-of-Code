class TreeNode:
    def __init__(self, value):
        self.data = value
        self.left = None
        self.right = None


def is_same_tree(a, b):
    if a is None and b is None:
        return True

    if a is None or b is None:
        return False

    if a.data != b.data:
        return False

    return (
        is_same_tree(a.left, b.left)
        and is_same_tree(a.right, b.right)
    )


def is_subtree(root, sub_root):
    if root is None:
        return False

    if is_same_tree(root, sub_root):
        return True

    return (
        is_subtree(root.left, sub_root)
        or is_subtree(root.right, sub_root)
    )


root = TreeNode(3)
root.left = TreeNode(4)
root.right = TreeNode(5)
root.left.left = TreeNode(1)
root.left.right = TreeNode(2)

sub_root = TreeNode(4)
sub_root.left = TreeNode(1)
sub_root.right = TreeNode(2)

print(str(is_subtree(root, sub_root)).lower())