class TreeNode:
    def __init__(self, value: int):
        self.val = value
        self.left = None
        self.right = None


def count_good_nodes(node: TreeNode | None, maximum: int) -> int:
    if node is None:
        return 0

    current_maximum = max(maximum, node.val)
    good_node = int(node.val >= maximum)

    return (
        good_node
        + count_good_nodes(node.left, current_maximum)
        + count_good_nodes(node.right, current_maximum)
    )


def good_nodes(root: TreeNode | None) -> int:
    if root is None:
        return 0

    return count_good_nodes(root, root.val)


if __name__ == "__main__":
    root = TreeNode(3)
    root.left = TreeNode(1)
    root.right = TreeNode(4)
    root.left.left = TreeNode(3)
    root.right.left = TreeNode(1)
    root.right.right = TreeNode(5)

    print(good_nodes(root))
