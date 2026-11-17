class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {

        int mini=nums[0], maxi=nums[0];

        for(int n: nums){
            mini=min(mini, n);
            maxi=max(maxi, n);
        }

        return ((long long)(maxi-mini)*k);
        
    }
};