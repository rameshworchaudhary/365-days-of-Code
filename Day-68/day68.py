class TreeNode:
    def __init__(self, val):
        self.val = val
        self.left = None
        self.right = None


def findPaths(root, path, ans):
    if root is None:
        return

    if path:
        path += "->"

    path += str(root.val)

    if root.left is None and root.right is None:
        ans.append(path)
        return

    findPaths(root.left, path, ans)
    findPaths(root.right, path, ans)


root = TreeNode(1)
root.left = TreeNode(2)
root.right = TreeNode(3)

ans = []
findPaths(root, "", ans)

print("Root-to-leaf paths:")
for path in ans:
    print(path)