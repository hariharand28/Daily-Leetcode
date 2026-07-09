class Solution {
public:
    int maxSumRangeQuery(vector<int>& nums, vector<vector<int>>& requests) {
        const int MOD=1e9+7;
        int n=nums.size();

        vector<int> req(n,0);

        for(auto &t: requests){
            req[t[0]]++;
            if(t[1]+1<n)
                req[t[1]+1]--;
        }

        for(int i=1; i<n; i++){
            req[i]+=req[i-1];
        }

        sort(nums.begin(), nums.end());
        int last=nums.size()-1;
        sort(req.begin(), req.end());

        long long ans=0;

        for(int i=req.size()-1; i>=0; i--){
            ans = (ans + 1LL * req[i] * nums[i]) % MOD;
        }

        return ans%MOD;
        
    }
};