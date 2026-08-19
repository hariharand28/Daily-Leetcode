class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {

        map<int,int> mpp;

        for(int n: nums)
            mpp[n]++;

        int cnt=0;

        for(int n: nums){
            if(mpp[n]<=0 || n>k)
                continue;

            int tar=abs(k-n);

            if(mpp[tar]<=0)
                continue;
            
            int mini=min(mpp[n], mpp[tar]);
            if(n==tar)
                mini/=2;
            cnt+=mini;
            mpp[n]-=mini;
            mpp[tar]-=mini;
            
        }

        return cnt;
        
        
    }
};