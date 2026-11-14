class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {

        int n=nums.size();
        if(n<l)
            return -1;
        r=min(r,n);

        int sum=0;
        int ans=INT_MAX;

        for(int i=0; i<n; i++){
            sum=0;
            for(int j=i; j<n &&j<r+i; j++){
                sum+=nums[j];
                if(j-i+1>=l && sum>0)
                    ans=min(ans, sum);
            }
        }
        if(ans==INT_MAX)
            return -1;
        return ans;
    }
};