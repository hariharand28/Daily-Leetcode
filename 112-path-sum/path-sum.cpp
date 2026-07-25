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
    bool a=false;
    void ez(TreeNode* node, int sum, int tar){
        if(!node)
            return;

            if (!node->left && !node->right) {
            if (sum + node->val == tar)
                a = true;
            return;
        }


        ez(node->right, sum+node->val, tar);
        ez(node->left, sum+node->val, tar);

    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root)
            return a;
        ez(root, 0, targetSum);
        return a;
    }
};