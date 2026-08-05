class Solution {
public:

    void back(vector<int>& candi, int in, int curr, vector<int>& pos, int target,vector<vector<int>>& ans ){
        if(curr>target)
            return;
        if(curr==target){
            ans.push_back(pos);
            return;
        }

        for(int i=in; i<candi.size(); i++){
            if(i>in && candi[i]==candi[i-1])
                continue;

            if(curr + candi[i] > target)
                break;
                
            pos.push_back(candi[i]);
            back(candi, i+1, curr+candi[i], pos, target, ans);
            pos.pop_back();
        }
    }


    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int>pos;
        back(candidates,0,0,pos, target,ans);
        return ans;
        
    }
};