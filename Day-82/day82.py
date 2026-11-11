from collections import deque


class TreeNode:
    def __init__(self, value: int):
        self.val = value
        self.left = None
        self.right = None


def right_side_view(root: TreeNode | None) -> list[int]:
    visible_nodes: list[int] = []

    if root is None:
        return visible_nodes

    nodes = deque([root])

    while nodes:
        for index in range(len(nodes)):
            current = nodes.popleft()

            if index == 0:
                visible_nodes.append(current.val)

            if current.right is not None:
                nodes.append(current.right)
            if current.left is not None:
                nodes.append(current.left)

    return visible_nodes


if __name__ == "__main__":
    root = TreeNode(1)
    root.left = TreeNode(2)
    root.right = TreeNode(3)
    root.left.right = TreeNode(5)
    root.right.right = TreeNode(4)

    print(right_side_view(root))
