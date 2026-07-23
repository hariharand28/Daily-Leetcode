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
    int sum=0;

    void hh(TreeNode* node, int num) {
        if(node == nullptr)
            return;

        num = num * 10 + node->val;

        if(node->left == nullptr && node->right == nullptr) {
            sum += num;
            return;
        }

        if(node->left)
            hh(node->left, num);

        if(node->right)
            hh(node->right, num);
    }

    int sumNumbers(TreeNode* root) {

        hh(root, 0);

        return sum;
        
    }
};