/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if (!root) {
            return res;
        }
        queue<TreeNode*> q1;
        q1.push(root);
        bool isLefttoRight = true;

        while (!q1.empty()) {
            vector<int> curr;
            int curr_level = q1.size();
            for (int i = 0; i < curr_level; ++i) {
                TreeNode* currNode = q1.front();
                q1.pop();
                curr.push_back(currNode->val);
                if (currNode->left) {
                    q1.push(currNode->left);
                }
                if (currNode->right) {
                    q1.push(currNode->right);
                }
            }
            if(!isLefttoRight){
                reverse(curr.begin(),curr.end());
            }
        res.push_back(curr);
        isLefttoRight = !isLefttoRight;
        }
        return res;
        
    }
};