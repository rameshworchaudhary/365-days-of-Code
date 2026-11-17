class TreeNode:
    def __init__(
        self,
        value: int,
        left: "TreeNode | None" = None,
        right: "TreeNode | None" = None,
    ):
        self.val = value
        self.left = left
        self.right = right


def max_path_sum(root: TreeNode | None) -> int:
    maximum_path_sum = float("-inf")

    def best_downward_path(node: TreeNode | None) -> int:
        nonlocal maximum_path_sum
        if node is None:
            return 0

        left_gain = max(0, best_downward_path(node.left))
        right_gain = max(0, best_downward_path(node.right))

        maximum_path_sum = max(
            maximum_path_sum,
            node.val + left_gain + right_gain,
        )
        return node.val + max(left_gain, right_gain)

    best_downward_path(root)
    return int(maximum_path_sum)


if __name__ == "__main__":
    root = TreeNode(
        -10,
        left=TreeNode(9),
        right=TreeNode(20, TreeNode(15), TreeNode(7)),
    )
    print(max_path_sum(root))
