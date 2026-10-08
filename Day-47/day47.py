from collections import deque

class TreeNode:
    def __init__(self, value):
        self.data = value
        self.left = None
        self.right = None


def zigzag_traversal(root):
    if root is None:
        return

    queue = deque([root])
    left_to_right = True

    while queue:
        level = []

        for _ in range(len(queue)):
            current = queue.popleft()

            level.append(current.data)

            if current.left:
                queue.append(current.left)

            if current.right:
                queue.append(current.right)

        if not left_to_right:
            level.reverse()

        print(*level)

        left_to_right = not left_to_right


root = TreeNode(1)

root.left = TreeNode(2)
root.right = TreeNode(3)

root.left.left = TreeNode(4)
root.left.right = TreeNode(5)

root.right.left = TreeNode(6)
root.right.right = TreeNode(7)

zigzag_traversal(root)