class TreeNode:
    def __init__(self, value: int):
        self.val = value
        self.left = None
        self.right = None


def build_tree(
    preorder: list[int],
    preorder_index: list[int],
    inorder_start: int,
    inorder_end: int,
    inorder_positions: dict[int, int],
) -> TreeNode | None:
    if inorder_start > inorder_end:
        return None

    root_value = preorder[preorder_index[0]]
    preorder_index[0] += 1
    root = TreeNode(root_value)
    inorder_root = inorder_positions[root_value]

    root.left = build_tree(
        preorder,
        preorder_index,
        inorder_start,
        inorder_root - 1,
        inorder_positions,
    )
    root.right = build_tree(
        preorder,
        preorder_index,
        inorder_root + 1,
        inorder_end,
        inorder_positions,
    )

    return root


def construct_tree(preorder: list[int], inorder: list[int]) -> TreeNode | None:
    inorder_positions = {value: index for index, value in enumerate(inorder)}
    return build_tree(
        preorder,
        [0],
        0,
        len(inorder) - 1,
        inorder_positions,
    )


def inorder_values(root: TreeNode | None) -> list[int]:
    if root is None:
        return []

    return inorder_values(root.left) + [root.val] + inorder_values(root.right)


if __name__ == "__main__":
    preorder = [3, 9, 20, 15, 7]
    inorder = [9, 3, 15, 20, 7]

    root = construct_tree(preorder, inorder)
    print(*inorder_values(root))
