class Solution {
public:
    // Helper function returns pair: {LCA node, max depth from this node}
    pair<TreeNode*, int> dfs(TreeNode* root) {
        if (!root) return {nullptr, 0};  // Base case: null node

        auto left = dfs(root->left);
        auto right = dfs(root->right);

        if (left.second == right.second) {
            // Equal depth ⇒ current node is LCA
            return {root, left.second + 1};
        } else if (left.second > right.second) {
            // Left deeper ⇒ propagate left's LCA
            return {left.first, left.second + 1};
        } else {
            // Right deeper ⇒ propagate right's LCA
            return {right.first, right.second + 1};
        }
    }

    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        return dfs(root).first;  // Only return the node, not the depth
    }
};
