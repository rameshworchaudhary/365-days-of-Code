class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


def max_path_sum(root):
    maximum = float("-inf")

    def dfs(node):
        nonlocal maximum

        if node is None:
            return 0

        left_sum = max(0, dfs(node.left))
        right_sum = max(0, dfs(node.right))

        path_through_node = node.val + left_sum + right_sum
        maximum = max(maximum, path_through_node)

        return node.val + max(left_sum, right_sum)

    dfs(root)
    return maximum


root = TreeNode(-10)
root.left = TreeNode(9)
root.right = TreeNode(20)
root.right.left = TreeNode(15)
root.right.right = TreeNode(7)

print("Maximum Path Sum:", max_path_sum(root))