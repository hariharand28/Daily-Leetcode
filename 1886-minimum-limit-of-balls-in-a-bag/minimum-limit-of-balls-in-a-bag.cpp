class Solution {
public:
    int minimumSize(vector<int>& nums, int maxi) {

        int left=0, right=*max_element(nums.begin(), nums.end());

        int ans=right;

        while(left<=right){
            int mid=left+(right-left)/2;
            int op=0;
            if(mid==0) op=maxi+1;
            else
                for(int n: nums)
                    op+=((n+mid-1)/mid)-1;

            if(op<=maxi){
                ans=mid;
                right=mid-1;
            }else
                left=mid+1;
        }

        return ans;
        
    }
};