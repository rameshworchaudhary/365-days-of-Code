class TreeNode:
    def __init__(self, val):
        self.val = val
        self.left = None
        self.right = None


def lowestCommonAncestor(root, p, q):
    if root is None:
        return None

    if p.val < root.val and q.val < root.val:
        return lowestCommonAncestor(root.left, p, q)

    if p.val > root.val and q.val > root.val:
        return lowestCommonAncestor(root.right, p, q)

    return root


root = TreeNode(6)

root.left = TreeNode(2)
root.right = TreeNode(8)

root.left.left = TreeNode(0)
root.left.right = TreeNode(4)

root.right.left = TreeNode(7)
root.right.right = TreeNode(9)

root.left.right.left = TreeNode(3)
root.left.right.right = TreeNode(5)

p = root.left
q = root.right

ans = lowestCommonAncestor(root, p, q)

print("Lowest Common Ancestor:", ans.val)