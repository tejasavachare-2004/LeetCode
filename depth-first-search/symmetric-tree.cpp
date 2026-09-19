/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    bool check(TreeNode* r,TreeNode* l){
        if (r == NULL && l == NULL) {
            return true;
        }

        if (r == NULL || l == NULL) {
            return false;
        }


        if(r->val != l->val){
            return false;
        }

       
        bool a =check(l->left,r->right);
        bool b =check(l->right , r->left);
        

        return a && b;
    }

    bool isSymmetric(TreeNode* root) {
        if(root == NULL ){
            return true;
        }

        return check(root->right, root->left);
        
        
    }
};