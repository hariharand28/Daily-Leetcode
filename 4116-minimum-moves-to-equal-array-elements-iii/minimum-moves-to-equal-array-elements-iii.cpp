class Solution {
public:
    int minMoves(vector<int>& nums) {
        int sum=0, maxi=INT_MIN;

        for(int i=0; i<nums.size(); i++)
            {
                sum+=nums[i];
                maxi=max(nums[i], maxi);
            }

        return (nums.size()*maxi)-sum;
        
    }
};