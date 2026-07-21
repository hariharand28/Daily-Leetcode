class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {

        sort(nums.begin(), nums.end());
        int n=nums.size();
        if(n==1) return 0;
         if(-nums[0]+nums[n-1]-2*k<0)
            return 0;
        else
            return  -nums[0]+nums[n-1]-2*k;
        
    }
};