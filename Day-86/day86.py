class TreeNode:
    def __init__(self, value: int):
        self.val = value
        self.left = None
        self.right = None


def kth_smallest(root: TreeNode | None, k: int) -> int:
    nodes = []
    current = root

    while current is not None or nodes:
        while current is not None:
            nodes.append(current)
            current = current.left

        current = nodes.pop()
        k -= 1

        if k == 0:
            return current.val

        current = current.right

    return -1


if __name__ == "__main__":
    root = TreeNode(3)
    root.left = TreeNode(1)
    root.right = TreeNode(4)
    root.left.right = TreeNode(2)

    print(kth_smallest(root, 1))
