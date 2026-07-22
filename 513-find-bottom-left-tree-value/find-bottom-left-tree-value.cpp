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
    int left=0;
    int ll=0;

    void leftt(TreeNode* node, int level){
        if(!node)
            return;

        if(level>ll){
            left=node->val;
            ll=level;
        }

        leftt(node->left,level+1);
        leftt(node->right, level+1);
    }

    int findBottomLeftValue(TreeNode* root) {
        left=root->val;
        leftt(root, 0);
        return left;
    }
};