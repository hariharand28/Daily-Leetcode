class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int cnt=0;
        int in=0;

        for(int num: nums){
            if(num==target)
                cnt++;
            else if(num<target)
                in++;
        }

        if(cnt==0)
            return {};
        
        vector<int> ans;

        for(int i=0; i<cnt; i++){
            ans.push_back(in++);
        }

        return ans;
        
    }
};