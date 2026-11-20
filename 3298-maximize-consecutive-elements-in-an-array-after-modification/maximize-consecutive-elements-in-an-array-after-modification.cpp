class Solution {
public:
    int maxSelectedElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        unordered_map<int,int> mpp;
        int ans=1;
        for(int n: nums){
            mpp[n+1]=mpp[n]+1;
            mpp[n]=mpp[n-1]+1;
            ans=max(ans, max(mpp[n], mpp[n+1]));
        }
    return ans;
        
    }
};