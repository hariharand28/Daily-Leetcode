class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int start=0;
        int end=0;
        vector<int> ori=nums;
        sort(nums.begin(), nums.end());

        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=ori[i]){
                start=i;
                break;
            }

        }


        for(int i=nums.size()-1; i>=0; i--){
            if(nums[i]!=ori[i]){
                end=i;
                break;
            }
        }

    if(start==0 & end==0)
        return start;
    else
        return abs(start-end)+1;
        
    }
};