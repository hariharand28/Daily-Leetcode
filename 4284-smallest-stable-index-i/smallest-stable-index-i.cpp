class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==0) return -1;

        vector<int>maxii(n);

        maxii[0]=nums[0];

        for(int i=1; i<n; i++){
            maxii[i]=max(maxii[i-1], nums[i]);
        }

        vector<int>minn(n);
        minn[n-1]=nums[n-1];

        for(int i=n-2; i>=0; i--){
            minn[i]=min(minn[i+1],nums[i]);
        }

        for(int i=0; i<nums.size(); i++){
            int sc=maxii[i]-minn[i];

            if(sc<=k)
                return i;
        }

        return -1;
        
    }
};