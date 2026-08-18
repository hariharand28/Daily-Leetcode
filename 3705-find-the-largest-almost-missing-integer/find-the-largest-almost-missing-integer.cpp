class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {

        if(k==1){
            unordered_map<int,int> mpp;

            for(int num: nums){
                mpp[num]++;
            }
            int maxi=-1;

            for(auto& it: mpp){
                if(it.second==1)
                    maxi=max(maxi, it.first);
            }
            return maxi;
        }

        else if(k==nums.size()){
            int maxi=-1;

            for(int num: nums)
                maxi=max(maxi, num);
            return maxi;
        }

        int f=nums[0];
        int l=nums[nums.size()-1];
        if(f==l) return -1;

        for(int i=1; i<nums.size()-1;i++){
            if(nums[i]==f)
                f=-1;
            else if(nums[i]==l)
                l=-1;
        }

        return max(f,l);

        
    }
};