class TreeNode:
    def __init__(self, value: int):
        self.val = value
        self.left = None
        self.right = None


def lowest_common_ancestor(
    root: TreeNode | None, first: TreeNode, second: TreeNode
) -> TreeNode | None:
    if root is None:
        return None

    if first.val < root.val and second.val < root.val:
        return lowest_common_ancestor(root.left, first, second)

    if first.val > root.val and second.val > root.val:
        return lowest_common_ancestor(root.right, first, second)

    return root


if __name__ == "__main__":
    root = TreeNode(6)
    root.left = TreeNode(2)
    root.right = TreeNode(8)
    root.left.left = TreeNode(0)
    root.left.right = TreeNode(4)
    root.left.right.left = TreeNode(3)
    root.left.right.right = TreeNode(5)
    root.right.left = TreeNode(7)
    root.right.right = TreeNode(9)

    first = root.left
    second = root.right

    ancestor = lowest_common_ancestor(root, first, second)
    print(f"Lowest Common Ancestor: {ancestor.val}")
