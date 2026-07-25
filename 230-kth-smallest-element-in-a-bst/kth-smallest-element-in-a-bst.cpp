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
    void ez(TreeNode* node, vector<int>& v) {
        if (!node) {
            return;
        }

        v.push_back(node->val);
        ez(node->left, v);
        ez(node->right, v);
    }

    int kthSmallest(TreeNode* root, int k) {
        vector<int> ans;
        ez(root, ans);
        sort(ans.begin(), ans.end());

        return ans[k-1];
    }
};