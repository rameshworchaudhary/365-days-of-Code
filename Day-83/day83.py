from collections import deque


class TreeNode:
    def __init__(self, value: int):
        self.val = value
        self.left = None
        self.right = None


def zigzag_level_order(root: TreeNode | None) -> list[list[int]]:
    levels: list[list[int]] = []

    if root is None:
        return levels

    nodes = deque([root])
    left_to_right = True

    while nodes:
        current_level: list[int] = []

        for _ in range(len(nodes)):
            current = nodes.popleft()
            current_level.append(current.val)

            if current.left is not None:
                nodes.append(current.left)
            if current.right is not None:
                nodes.append(current.right)

        if not left_to_right:
            current_level.reverse()

        levels.append(current_level)
        left_to_right = not left_to_right

    return levels


if __name__ == "__main__":
    root = TreeNode(3)
    root.left = TreeNode(9)
    root.right = TreeNode(20)
    root.right.left = TreeNode(15)
    root.right.right = TreeNode(7)

    print(zigzag_level_order(root))
