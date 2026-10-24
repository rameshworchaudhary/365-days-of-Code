class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


def build_tree(inorder, postorder):
    index_map = {value: i for i, value in enumerate(inorder)}
    post_index = len(postorder) - 1

    def build(in_start, in_end):
        nonlocal post_index

        if in_start > in_end:
            return None

        root_value = postorder[post_index]
        post_index -= 1

        root = TreeNode(root_value)
        in_root = index_map[root_value]

        # Build right subtree first
        root.right = build(in_root + 1, in_end)
        root.left = build(in_start, in_root - 1)

        return root

    return build(0, len(inorder) - 1)


def print_inorder(root):
    if root is None:
        return

    print_inorder(root.left)
    print(root.val, end=" ")
    print_inorder(root.right)


inorder = [9, 3, 15, 20, 7]
postorder = [9, 15, 7, 20, 3]

root = build_tree(inorder, postorder)

print("Constructed tree (Inorder):", end=" ")
print_inorder(root)
print()