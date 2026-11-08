class TreeNode:
    def __init__(self, value: int):
        self.val = value
        self.left = None
        self.right = None


def same_tree(first: TreeNode | None, second: TreeNode | None) -> bool:
    if first is None or second is None:
        return first is second

    return (
        first.val == second.val
        and same_tree(first.left, second.left)
        and same_tree(first.right, second.right)
    )


def is_subtree(root: TreeNode | None, sub_root: TreeNode | None) -> bool:
    if sub_root is None:
        return True

    if root is None:
        return False

    return (
        same_tree(root, sub_root)
        or is_subtree(root.left, sub_root)
        or is_subtree(root.right, sub_root)
    )


if __name__ == "__main__":
    root = TreeNode(3)
    root.left = TreeNode(4)
    root.right = TreeNode(5)
    root.left.left = TreeNode(1)
    root.left.right = TreeNode(2)

    sub_root = TreeNode(4)
    sub_root.left = TreeNode(1)
    sub_root.right = TreeNode(2)

    print(str(is_subtree(root, sub_root)).lower())
