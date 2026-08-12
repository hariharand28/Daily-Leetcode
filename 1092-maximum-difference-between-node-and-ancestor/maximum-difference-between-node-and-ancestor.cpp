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
    int ans=INT_MIN;
    void back(TreeNode* node, int maxi, int mini){
        if(!node)
            return;
        int vall=node->val;
        ans=max(ans, max(abs(maxi-vall),abs(mini-vall)));
        maxi=max(maxi, vall);
        mini=min(mini, vall);

        back(node->left, maxi, mini);
        back(node->right,maxi, mini);

    }
    int maxAncestorDiff(TreeNode* root) {

        back(root, root->val, root->val);
        return ans;
        
    }
};