class TreeNode:
    def __init__(self, val):
        self.val = val
        self.left = None
        self.right = None


def searchBST(root, val):
    if root is None or root.val == val:
        return root

    if val < root.val:
        return searchBST(root.left, val)

    return searchBST(root.right, val)


def inorder(root):
    if root is None:
        return

    inorder(root.left)
    print(root.val, end=" ")
    inorder(root.right)


root = TreeNode(4)
root.left = TreeNode(2)
root.right = TreeNode(7)
root.left.left = TreeNode(1)
root.left.right = TreeNode(3)

val = 2
result = searchBST(root, val)

print("Search Result:", end=" ")
if result:
    inorder(result)
else:
    print("Not Found")