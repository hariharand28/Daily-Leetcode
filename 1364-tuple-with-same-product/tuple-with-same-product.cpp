class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int ans=0;

        unordered_map<long long, int> mpp;

        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
              long long product = 1LL * nums[i] * nums[j];

                ans += 8 * mpp[product];
                mpp[product]++;
            }
        }

        return ans;
        
    }
};