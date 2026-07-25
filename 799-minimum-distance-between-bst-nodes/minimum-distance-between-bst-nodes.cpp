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

    void diff(TreeNode* node, vector<int>& d){
        if(!node){
            return;
        }
        d.push_back(node->val);
        diff(node->left, d);
        diff(node->right, d);
    }

    int minDiffInBST(TreeNode* root) {
        vector<int> d;
        diff(root,d);

        int ans=INT_MAX;

        sort(d.begin(), d.end());

        for(int i=1; i<d.size(); i++){
            ans=min(ans, d[i]-d[i-1]);
        }

        return ans;
    }
};