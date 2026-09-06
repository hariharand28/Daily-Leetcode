class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root)
            return nullptr;
        if(root==p || root==q)
            return root;
        
        TreeNode* left =lowestCommonAncestor(root->left, p, q);
        TreeNode* right =lowestCommonAncestor(root->right, p, q);

        if(right && left)
            return root;
        if(right)
            return right;
        else
            return left;
        
    }
};