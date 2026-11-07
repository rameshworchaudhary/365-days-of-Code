class TreeNode:
    def __init__(self, value: int):
        self.val = value
        self.left = None
        self.right = None


def height(root: TreeNode | None, diameter: list[int]) -> int:
    if root is None:
        return 0

    left_height = height(root.left, diameter)
    right_height = height(root.right, diameter)

    diameter[0] = max(diameter[0], left_height + right_height)

    return 1 + max(left_height, right_height)


def diameter_of_binary_tree(root: TreeNode | None) -> int:
    diameter = [0]
    height(root, diameter)
    return diameter[0]


if __name__ == "__main__":
    root = TreeNode(1)
    root.left = TreeNode(2)
    root.right = TreeNode(3)
    root.left.left = TreeNode(4)
    root.left.right = TreeNode(5)

    print(diameter_of_binary_tree(root))
