class TreeNode:
    def __init__(self, value):
        self.val = value
        self.left = None
        self.right = None


def height(root):
    if root is None:
        return 0

    left_height = height(root.left)
    if left_height == -1:
        return -1

    right_height = height(root.right)
    if right_height == -1:
        return -1

    if abs(left_height - right_height) > 1:
        return -1

    return 1 + max(left_height, right_height)


def is_balanced(root):
    return height(root) != -1


def main():
    root = TreeNode(3)
    root.left = TreeNode(9)
    root.right = TreeNode(20)
    root.right.left = TreeNode(15)
    root.right.right = TreeNode(7)

    print(str(is_balanced(root)).lower())


if __name__ == "__main__":
    main()
