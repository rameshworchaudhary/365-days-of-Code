
from collections import deque

class TreeNode:
    def __init__(self, val):
        self.val = val
        self.left = None
        self.right = None


def averageOfLevels(root):

    ans = []
    q = deque([root])

    while q:
        n = len(q)
        total = 0

        for i in range(n):
            node = q.popleft()

            total += node.val

            if node.left:
                q.append(node.left)

            if node.right:
                q.append(node.right)

        ans.append(total / n)

    return ans


# Creating Binary Tree
root = TreeNode(3)

root.left = TreeNode(9)
root.right = TreeNode(20)

root.right.left = TreeNode(15)
root.right.right = TreeNode(7)


# Calling function
result = averageOfLevels(root)

print("Average of Each Level:", result)
