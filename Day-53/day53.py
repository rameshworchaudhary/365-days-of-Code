class TreeNode:
    def __init__(self, value):
        self.data = value
        self.left = None
        self.right = None


def find_paths(root, target_sum, path, result):
    if root is None:
        return

    path.append(root.data)
    target_sum -= root.data

    if (root.left is None and root.right is None
            and target_sum == 0):
        result.append(path.copy())

    find_paths(root.left, target_sum, path, result)
    find_paths(root.right, target_sum, path, result)

    path.pop()


def path_sum(root, target_sum):
    result = []
    path = []

    find_paths(root, target_sum, path, result)
    return result


root = TreeNode(5)
root.left = TreeNode(4)
root.right = TreeNode(8)

root.left.left = TreeNode(11)
root.left.left.left = TreeNode(7)
root.left.left.right = TreeNode(2)

root.right.left = TreeNode(13)
root.right.right = TreeNode(4)
root.right.right.left = TreeNode(5)
root.right.right.right = TreeNode(1)

target_sum = 22
result = path_sum(root, target_sum)

print(f"Paths with sum {target_sum}:")
for path in result:
    print(path)