"""

binary-tree-right-side-view

    3       <-  3
   / \
  9   20    <-  20
     /  \
    15   7  <-  7

Output: [3, 20, 7]
"""
from __future__ import annotations
from typing import List, Optional

class TreeNode:
    def __init__(
        self, val: int = 0, left: TreeNode | None = None, right: TreeNode | None = None
    ) -> None:
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def rightSideView(self, root: Optional[TreeNode]) -> List[int]:
        """
        Function returns the right side view of binary tree.

        >>> binary_tree_right_side_view(None)
        []
        """
        def dfs(root: Optional[TreeNode], depth, right_view):
            if not root:
                return

            if depth == len(right_view):
                right_view.append(root.val)

            dfs(root.right, depth + 1, right_view)
            dfs(root.left, depth + 1, right_view)

        right_view: list = []
        if not root:
            return right_view
        dfs(root, 0, right_view)
        return right_view