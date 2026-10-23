class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


def build_tree(preorder, inorder):
    index_map = {value: i for i, value in enumerate(inorder)}

    def build(pre_start, pre_end, in_start, in_end):
        if pre_start > pre_end or in_start > in_end:
            return None

        root_value = preorder[pre_start]
        root = TreeNode(root_value)

        in_root = index_map[root_value]
        left_size = in_root - in_start

        root.left = build(
            pre_start + 1,
            pre_start + left_size,
            in_start,
            in_root - 1
        )

        root.right = build(
            pre_start + left_size + 1,
            pre_end,
            in_root + 1,
            in_end
        )

        return root

    return build(0, len(preorder) - 1, 0, len(inorder) - 1)


def print_inorder(root):
    if root is None:
        return

    print_inorder(root.left)
    print(root.val, end=" ")
    print_inorder(root.right)


preorder = [3, 9, 20, 15, 7]
inorder = [9, 3, 15, 20, 7]

root = build_tree(preorder, inorder)

print("Constructed tree (Inorder):", end=" ")
print_inorder(root)
print()