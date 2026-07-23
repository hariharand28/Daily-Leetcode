class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int cnt=0;
        unordered_map<int,int>mpp;

        for(int i=0; i<nums.size(); i++){
            if(mpp[nums[i]]>0){
                cnt+=(nums[i-1]-nums[i])+1;
                nums[i]=nums[i-1]+1;
            }

            mpp[nums[i]]++;
            
        }

        return cnt;
        
    }
};