class TreeNode:
    def __init__(self, value):
        self.data = value
        self.left = None
        self.right = None


def is_same_tree(p, q):
    if p is None and q is None:
        return True

    if p is None or q is None:
        return False

    if p.data != q.data:
        return False

    return (
        is_same_tree(p.left, q.left)
        and is_same_tree(p.right, q.right)
    )


p = TreeNode(1)
p.left = TreeNode(2)
p.right = TreeNode(3)

q = TreeNode(1)
q.left = TreeNode(2)
q.right = TreeNode(3)

print(str(is_same_tree(p, q)).lower())