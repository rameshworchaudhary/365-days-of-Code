from collections import deque

class TreeNode:
    def __init__(self, val):
        self.val = val
        self.left = None
        self.right = None


def buildBST(nums, left, right):
    if left > right:
        return None

    mid = (left + right) // 2

    root = TreeNode(nums[mid])

    root.left = buildBST(nums, left, mid - 1)
    root.right = buildBST(nums, mid + 1, right)

    return root


def sortedArrayToBST(nums):
    return buildBST(nums, 0, len(nums) - 1)


def levelOrder(root):
    if root is None:
        return

    q = deque([root])

    while q:
        curr = q.popleft()

        if curr is None:
            print("null", end=" ")
            continue

        print(curr.val, end=" ")

        q.append(curr.left)
        q.append(curr.right)


nums = [-10, -3, 0, 5, 9]

root = sortedArrayToBST(nums)

print("BST Level Order:", end=" ")
levelOrder(root)