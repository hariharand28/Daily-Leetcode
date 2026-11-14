class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {

        vector<int> ans;

        int sum=0;

        for(int n: nums)
            if(n%2==0)
                sum+=n;

        for(auto r: queries){
            int val=r[0];
            int in=r[1];
            int curr=nums[in];

            if((curr+val)%2==0)
                if(curr%2==0)
                    sum+=val;
                else
                    sum+=(val+curr);
            else if(curr%2==0)
                sum-=curr;
                
            ans.push_back(sum);
            nums[in]+=val;
        }

        return ans;
        
    }
};