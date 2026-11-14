class TreeNode:
    def __init__(self, value: int):
        self.val = value
        self.left = None
        self.right = None


def is_valid(node: TreeNode | None, minimum: float, maximum: float) -> bool:
    if node is None:
        return True

    if node.val <= minimum or node.val >= maximum:
        return False

    return is_valid(node.left, minimum, node.val) and is_valid(
        node.right, node.val, maximum
    )


def is_valid_bst(root: TreeNode | None) -> bool:
    return is_valid(root, float("-inf"), float("inf"))


if __name__ == "__main__":
    root = TreeNode(2)
    root.left = TreeNode(1)
    root.right = TreeNode(3)

    print(is_valid_bst(root))
