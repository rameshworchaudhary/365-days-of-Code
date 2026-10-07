from collections import deque

class TreeNode:
    def __init__(self, value):
        self.data = value
        self.left = None
        self.right = None


def level_order(root):
    if root is None:
        return

    queue = deque([root])

    while queue:
        size = len(queue)

        for _ in range(size):
            current = queue.popleft()

            print(current.data, end=" ")

            if current.left:
                queue.append(current.left)

            if current.right:
                queue.append(current.right)

        print()


root = TreeNode(1)

root.left = TreeNode(2)
root.right = TreeNode(3)

root.left.left = TreeNode(4)
root.left.right = TreeNode(5)

root.right.right = TreeNode(6)

level_order(root)