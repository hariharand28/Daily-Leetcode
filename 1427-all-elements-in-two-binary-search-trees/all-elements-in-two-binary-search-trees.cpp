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
    vector<int> ans;

    void bb(TreeNode* n){
        if(!n)
            return;
        else
            ans.push_back(n->val);
        bb(n->right);
        bb(n->left);
    }

    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        bb(root1);
        bb(root2);
        sort(ans.begin(), ans.end());

        return ans;
    }
};