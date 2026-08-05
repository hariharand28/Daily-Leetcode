class Solution {
public:

    void back(vector<int>& candidates, int target, vector<int> pos, int curr, vector<vector<int>>& ans, int in){
        if(curr>target)
            return;
        else if(curr==target){
            ans.push_back(pos);
            return;
        }


        for(int i=in;i<candidates.size(); i++){
            pos.push_back(candidates[i]);
            back(candidates, target, pos, curr+candidates[i], ans, i);
            pos.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {\

    vector<vector<int>> ans;
    vector<int> pos;
    int curr=0;
    back(candidates, target,pos,curr, ans, 0);
    return ans;
        
    }
};