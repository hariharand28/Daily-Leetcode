/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        int pp=p->val;
        int qq=q->val;

        while(root){
            if(pp>root->val && qq>root->val){
                root=root->right;
            } else if(pp<root->val && qq<root->val){
                root=root->left;
            }else
                return root;
        }

        return NULL;
        
    }
};